#include<bits/stdc++.h>
using namespace std;
int main(){
	list<int> L;
	int n, k;
	cin>>n>>k;
	int a[n+5]={};
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		while(L.size() && L.back() <=a[i]) L.pop_back();
		L.push_back(i);
		while(i-L.front() >=k) L.pop_front();
		if(i>=k) cout<<a[L.front()]<<" ";
	}
	return 0;
}
