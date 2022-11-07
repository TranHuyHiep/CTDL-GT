#include<bits/stdc++.h>
using namespace std;

template <class T>  //Lop mau mot so thuoc tinh chua xac dinh kieu khi xay dung
class day
{
	int n;
	T *a;
	public:
		day() {n=0; a=nullptr;}
		~day() {if(!a) delete[]a;}
		void nhap(string ten="")
		{
			cout<<"So pt day "<<ten<<" : "; cin>>n;
			a=new T[n];
			for(int i=0;i<n;i++) 
			{
				cout<<ten<<"["<<i<<"] = ";
				cin>>a[i];
			}
		}
		void xuat(string ten="",char space=' ')
		{
			cout<<ten<<"\n";
			for(int i=0;i<n;i++) cout<<a[i]<<space;
		}
};
typedef pair<int,int> ps;
istream &operator>>(istream &is,ps &p)
{
	char c;
	is>>p.first>>c>>p.second;
	return is;	
}
ostream &operator<<(ostream &os,ps p)
{
	os<<p.first<<"/"<<p.second;
	return os;	
}
int main()
{
	day<int> A;      //A chua cac so nguyen
	day<double> B;   //B chua cac so thuc
	A.nhap("A");
	B.nhap("B");
	A.xuat("Day la day A",'\n');
	B.xuat("Day la day B",'\t');
	day<ps> *C=new day<ps>();
	C->nhap("C"); 
	C->xuat("Day C");
	delete []C;
	day<bool> D,*p;
	p=&D; p->nhap("D"); p->xuat("Day so nguyen D",'&');
}


