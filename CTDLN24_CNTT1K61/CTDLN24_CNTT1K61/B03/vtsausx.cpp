//vi tri sau khi sap xep
#include<bits/stdc++.h>
#include<complex>
using namespace std;
typedef pair<int,int> pii;
#define x first
#define y second
int main()
{
	int n;
	cin>>n;
	pii A[n+5];
	for(int i=1;i<=n;i++) 
	{
		cin>>A[i].x; A[i].y=i;
	}	
//	for(int i=1;i<=n;i++) 
//		for(int j=i+1;j<=n;j++) 
//		if(A[i].first>A[j].first) swap(A[i],A[j]);
	sort(A+1,A+n+1);
	for(int i=1;i<=n;i++) cout<<A[i].y<<" ";
}


