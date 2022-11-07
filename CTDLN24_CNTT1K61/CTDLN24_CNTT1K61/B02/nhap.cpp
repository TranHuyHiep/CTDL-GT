#include<bits/stdc++.h>
using namespace std;
int *nhap(int &n)
{
	cout<<"Nhap so pt : "; cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++) 
	{
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	return A;
}
double *Nhap(int &n)
{
	cout<<"Nhap so pt : "; cin>>n;
	double *A=new double[n];
	for(int i=0;i<n;i++) 
	{
		cout<<"A["<<i<<"] = ";
		cin>>A[i];
	}
	return A;
}
void xuat(int n,int *A)
{
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
void xuat(int n,double *A)
{
	for(int i=0;i<n;i++) cout<<A[i]<<" ";
}
int main()
{
	int n,m,*A;
	A=nhap(n);
	double *B=Nhap(m);
	cout<<"\nDay a : "; xuat(n,A);
	cout<<"\nDay b : "; xuat(m,B);
	delete []A; delete[]B;
}


