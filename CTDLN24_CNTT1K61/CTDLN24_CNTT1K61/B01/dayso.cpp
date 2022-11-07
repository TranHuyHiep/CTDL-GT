//Viet ham nhap 1 day so co cap phat bo nho dong
#include<bits/stdc++.h>
using namespace std;
void nhap(int **a,int *n)
{
	cin>>*n;
	//*a=(int *)calloc(*n+5,sizeof(int));
	*a=new int[*n+5];
	for(int i=1;i<=*n;i++) cin>>(*a)[i];
}
void input(int *&a,int &n)
{
	cout<<"\nSo pt : ";
	cin>>n;
	a=new int[n+5];
	for(int i=1;i<=n;i++) cin>>a[i];
}
int main()
{
	int *a,n,*b,m;
	input(a,n); //nhap(&a,&n);   
	cout<<"\nDay a : "; for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	input(b,m); //nhap(&a,&n);   
	cout<<"\nDay b : ";	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	delete []b; delete []a; //free(a);
}


