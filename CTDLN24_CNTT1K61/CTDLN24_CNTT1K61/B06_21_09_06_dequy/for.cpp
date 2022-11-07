#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={4,7,2,8,1},n=5;
	int x=3,y=4;
	int i=0,j=n-1;						//2+3
	for(;i<j;i++,j--) {int t=a[i];a[i]=a[j];a[j]=t;}  // 11*n/2+1
	//
	
	cout<<"\nDay sau dao : ";
	for(int x:a) cout<<x<<" ";
}


