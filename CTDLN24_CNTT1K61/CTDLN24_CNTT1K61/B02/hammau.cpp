#include<bits/stdc++.h>
using namespace std;
template <class Z>
Z *nhap(int &n)
{
	cout<<"Nhap so pt : "; cin>>n;
	Z *A=new Z[n];
	for(int i=0;i<n;i++) 
	{
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	return A;
}
template <typename T>
void xuat(int n,T *A)
{
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
int main()
{
	int n,m,*A;
	A=nhap<int>(n);
	double *B=<double>nhap(m);
	cout<<"\nDay a : "; xuat(n,A);
	cout<<"\nDay b : "; xuat(m,B);
	delete []A; delete[]B;
}


