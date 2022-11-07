//de quy tren mang
#include<bits/stdc++.h>
using namespace std;

void nhap(int *a,int n)
{
	if(n==0) return;
	nhap(a,n-1);
	cout<<"a["<<n<<"]= "; 
	cin>>a[n];
}
void xuat(int *a,int n)
{
	if(n!=0) {xuat(a,n-1); cout<<a[n]<<" ";}
}
int sum(int *a,int n)
{
	return n==0?0:sum(a,n-1)+a[n];
}
void dao(int *a,int L,int R)
{
	if(L<R) {swap(a[L],a[R]);dao(a,L+1,R-1);}
}
void chen(int *a,int n)
{
	if(n<=1 || a[n-1]<=a[n]) return;
	swap(a[n-1],a[n]);
	chen(a,n-1); 
}
void sx(int *a,int n)  //thuat toan sx chen bang de quy
{
	if(n<=1) return;
	sx(a,n-1);
	chen(a,n);
}
int main()
{
	int a[1000],n;
	cout<<"Nhap n = "; cin>>n;
	nhap(a,n);
	cout<<"\nDay so : "; xuat(a,n);
	cout<<"\nTong : "<<sum(a,n);
	dao(a,1,n);	cout<<"\nDay sau dao : "; xuat(a,n);
	sx(a,n); 	cout<<"\nDay sau sx : "; xuat(a,n);
	
}


