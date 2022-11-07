#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]= {4,6,45,52,36,523,3,257,63,252,52,37,645},n=sizeof(a)/sizeof(int);
	sort(a+3,a+10);  //sap tu a3 den a9
	cout<<"\nMang   : ";
	for(int x:a) cout<<x<<" ";
	vector<int> V(a,a+n);
	sort(V.begin(),V.end(),greater<int>());
	cout<<"\nVector : "; for(auto x:V) cout<<x<<" ";
}


