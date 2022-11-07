//insertsort
#include<bits/stdc++.h>
using namespace std;
//Do phuc tap O(n^2)
void insertionsort(int *a,int n) //sap xep day a0...a[n-1]
{
	for(int i=1;i<n;i++)
	{
		int x=a[i];
		int j;
		for(j=i-1;j>=0 && x<a[j];j--) a[j+1]=a[j];
		a[j+1]=x;
	}
}
//Ve nha viet tiep cac version con lai
int main()
{
	int a[]={23,54,35,46,53,4,753,77,54,4352,236,456,2552,52},n=sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);
	for(auto x:a) cout<<x<<" ";
}


