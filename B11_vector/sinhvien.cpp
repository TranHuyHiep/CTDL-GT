#include<bits/stdc++.h>
using namespace std;

class sv
{
	string ten;
	int tuoi, diem;	
	public:
		friend istream &operator>>(istream &is, sv&s);
		friend ostream &operator<<(ostream &is, sv s);
		int &gettuoi(){return tuoi;}
		int &getdiem(){return diem;}
};

class Lop
{
	vector<sv> C;
	double dtb(int k)
	{
		double t=0, d=0;
		for(auto c:C) if(c.gettuoi()==k){d++; t+=c.getdiem();}
		if(d==0) d=1;
		return t/d;
	}
	
	void sx(bool dk(sv,sv))
	{
		for(int i=0; i<C.size(); i++)
			for(int j=i+1; j<C.size(); j++)
				if(dk(C[i],C[j])) swap(C[i],C[j]);
	}
	public:
		void sxdiem(){sx(diemtang);}
		void sxtuoi(){sx(tuoigiam);}
		
		void dtbtuoi()
		{
			for(int i=1; i<200; i++)
			{
				double t=dtb(i);
				if(t) cout<<"\nDiem trung binh tuoi "<<i<<" la: "<<t;
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
		friend ostream &operator<<(ostream &os, Lop s)
		{
			for(auto c:s.C) cout<<c<<"\n";
			return os;
		}
};

ostream &operator<<(ostream &os, sv s)
{
	os<<setw(20)<<left<<s.ten<<setw(10)<<s.tuoi<<setw(10)<<s.diem;
	return os;
}
istream &operator>>(istream &is, sv&s)
{
	is.ignore(1);
	getline(is,s.ten);
	is>>s.tuoi>>s.diem;
	return is;
}
bool diemtang(sv u,sv v){return u.getdiem() > v.getdiem();}
bool tuoigiam(sv u,sv v){return u.gettuoi() < v.gettuoi();}
int menu()
{
	systeam("cls");
	cout<<"Chon mon: ";
	int chon;
	cout<<"\n1. Nhap lop hoc";
	cout<<"\n2. Xuat lop hoc";
	cout<<"\n3. Diem trung binh";
	cout<<"\n4. Sap xep tuoi";
	cout<<"\n5. Sap xep diem";
	cout<<"\n6. Thoat";
	cout<<"\nBan chon: ";cin>>chon;
	if(chon>=1&&chon<=6) return chon;
	return menu;
}

int main(){
	freopen("abc.txt","r",stdin);
	Lop L;
	bool ok=0;
	do
	{
		int mon=menu();
		switch(mon)
		{
			case 1:
				ifstream fin("abc.txt",ios::in);
				fin>>L;
				fin.close();
				ok=1;
				break;
			case 2: if(ok) cout<<"\nDanh sach: \n"<<L; else cout<<"chua nhap du lieu ";break;
			case 3:
				L.dtbtuoi();break;
			case 4:
				L.sxdiem(); cout<<"\nDanh sach sv sx tang dan: \n"<<L; break;
			case 5;
				L.sxtuoi();	cout<<"\nDanh sach sx diem giam: "<<L; break;
			case 6: return 0;
			
		}
		cout << "\nDone";
		system("pause";)
	}
	
}
