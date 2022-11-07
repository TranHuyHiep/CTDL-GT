#include<bits/stdc++.h>
using namespace std;
enum sex{NU,NAM};
struct sv
{
	string ten; //char ten[30];
	int tuoi,diem;
	sex gt;
};
void nhap(int &n,sv *&a)
{
	cout<<"Nhap so sv ";
	cin>>n;
	a=new sv[n+5];
	for(int i=1;i<=n;i++)
	{
		int g;
		cout<<"Ho ten : "; fflush(stdin); getline(cin,a[i].ten);
		cout<<"Tuoi : "; cin>>a[i].tuoi;
		cout<<"Diem : "; cin>>a[i].diem;
		cout<<"Gioi (Nu:0 va Nam:1) : "; cin>>g;
		a[i].gt=g?NAM:NU;
	}
}
void xuat(int n,sv *a)
{
	for(int i=1;i<=n;i++)
	{
		cout<<setw(25)<<left<<a[i].ten<<setw(5)<<a[i].tuoi;
		cout<<setw(5)<<a[i].diem<<setw(5)<<(a[i].gt?"Nam":"Nu")<<"\n";
	}
}
void sx(int n,sv *a)
{
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].ten>a[j].ten)   //kieu string co san cac phep toan so sanh nen khong can dung strcmp
	swap(a[i],a[j]);	
}
double diemtb(int n,sv *a,sex s)
{
	double t=0,d=0;
	for(int i=1;i<=n;i++) if(a[i].gt==s) {t+=a[i].diem;d++;}
	return d!=0?t/d:-1;
}
int main()
{
	sv *a; int n;
	nhap(n,a);
	cout<<"Danh sach sv : \n"; xuat(n,a);
	sx(n,a); cout<<"Danh sach sau sx : \n"; xuat(n,a);
	double tb=diemtb(n,a,NAM);
	if(tb<0) cout<<"\nKhong co ai la nam gioi ";
	else cout<<"\nDiem trung binh nam gioi "<<tb;
	cout<<"\nDiem trung binh nu gioi "<<diemtb(n,a,NU);
	delete []a;
}


