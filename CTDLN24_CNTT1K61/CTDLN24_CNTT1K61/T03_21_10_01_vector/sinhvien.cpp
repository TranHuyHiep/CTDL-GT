//Xây dung lop sinh viên gom tên, tuoi, diem, có các toán tu >>, <<
//Xây dung lop lop hoc
//Hàm tính di?m trung bình theo tu?i k
//Hàm in ra di?m trung bình theo t?ng tu?i có trong trong danh sách
//S?p x?p theo hàm di?u ki?n nào dó
//Xu?t danh sách theo di?m tang và xu?t theo tu?i gi?m d?n
#include<bits/stdc++.h>
#include "vector.cpp"
using namespace std;
class sv
{
	string ten;
	int tuoi,diem;
	public:
		int gettuoi(){return tuoi;}
		int getdiem(){return diem;}
		friend istream &operator>>(istream &is, sv&s);
		friend ostream &operator<<(ostream &,sv);
		sv(string t="",int tt=0,int td=0) {ten=t;tuoi=tt;diem=td;}
};
ostream &operator<<(ostream &os, sv s)
{
	os<<setw(30)<<left<<s.ten<<setw(10)<<s.tuoi<<setw(10)<<s.diem;
	return os;
}
istream &operator>>(istream &is, sv&s)
{
	is.ignore(1);
	getline(is,s.ten);
	is>>s.tuoi>>s.diem;
	return is;
}
bool diemtang(sv u,sv v) {return u.getdiem()<v.getdiem();}
bool tuoigiam(sv u,sv v) {return u.gettuoi()>v.gettuoi();}
class Lop
{
	vector<sv> C;
	double dtb(int k)
	{
		double t=0,d=0;
		//for(auto c: C) if(c.gettuoi()==k) {d++; t+=c.getdiem();} 
		for(auto c=C.begin();c!=C.end();c++) 
		{
			if(c->gettuoi()==k) {d++; t+=c->getdiem();}
			//cout<<c->gettuoi()<<" ";	
		}
		if(d==0) d=1;
		return t/d;
	}
	void sx(bool dk(sv,sv))
	{
		for(int i=0;i<C.size();i++)
		for(int j=i+1;j<C.size();j++)
		if(dk(C[j],C[i])) swap(C[i],C[j]);
	}
	public:
		void sxdiem(){sx(diemtang);}
		void sxtuoi(){sx(tuoigiam);}
		void dtbtuoi()
		{
			for(int i=1;i<=145;i++)
			{
				double t=dtb(i);
				if(t) cout<<"\nDiem trung binh tuoi "<<i<<" la "<<t;
			}
		}
		friend istream &operator>>(istream &is, Lop&s)
		{
			int n;
			is>>n;
			s.C.resize(n);
			for(auto &c:s.C) is>>c;
			return is;
		}
		friend ostream &operator<<(ostream &os,Lop s)
		{
			for(auto c: s.C) cout<<c<<"\n";
			return os;
		}
};
int menu()
{
	system("cls");
	cout<<"Chon mon";
	int chon;
	cout<<"\n1. nhap lop hoc ";
	cout<<"\n2. xuat";
	cout<<"\n3. diem tb";
	cout<<"\n4. sap xep tuoi";
	cout<<"\n5. sap xep diem";
	cout<<"\n6. Thoat";
	cout<<"\nBan chon : "; cin>>chon;
	if(chon>=1 && chon<=6) return chon;
	return menu();
}
int main()
{
	Lop L;
	bool ok=0;
	ifstream fin;
	do
	{
		int mon=menu();
		switch(mon)
		{
			case 1: 
					fin.open("abc.txt",ios::in);
					fin>>L;
					fin.close();
					ok=1;
					break;
			case 2: if(ok) cout<<"danh sach \n"<<L; else cout<<"chua nhap dl"; break;
			case 3: L.dtbtuoi(); break;
			case 4: L.sxdiem();	cout<<"\ndanh sach sv sx diem tang dan: \n"<<L; break;
			case 5: L.sxtuoi();	cout<<"\ndanh sach sv sx tuoi giam dan: \n"<<L; break;
			case 6: return 0;
		}
		cout<<"\nDone\n";
		system("pause");
	}
	
	while(1);
}


