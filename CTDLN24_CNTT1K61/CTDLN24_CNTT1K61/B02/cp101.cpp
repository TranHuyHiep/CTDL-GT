#include<bits/stdc++.h>
using namespace std;
int *cp(int n,int &i)  //Cho n sinh ra mot mang dong chua cac so chinh phuong nho <=n
{
	int *a=new int[n];
	for(i=0;i*i<=n;i++) a[i]=i*i;
	return a;
}
int main()
{
	int k,*x=cp(1001,k);
	for(int i=0;i<k;i++) cout<<x[i]<<" ";
	delete []x;
}


