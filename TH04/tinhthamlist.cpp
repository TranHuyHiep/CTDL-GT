#include<bits/stdc++.h>
using namespace std;
int main(){
	list<pair<int,int>> L;
	int n, k, x;
	cin>>n>>k;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		while(L.size() && L.back().second <=x) L.pop_back();
		L.push_back({i,x});
		while(i-L.front().first >=k) L.pop_front();
		if(i>=k) cout<<L.front().second<<" ";
	}
	return 0;
}
