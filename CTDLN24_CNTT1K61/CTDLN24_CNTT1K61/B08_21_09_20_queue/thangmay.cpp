#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,m,s,f;
	cin>>n>>k>>m>>s>>f;
	map<int,int> M;
	queue<int> Q;
	Q.push(s); M[s]=0;
	while(Q.size())
	{
		int u=Q.front(); Q.pop();
		if(u+k<=n && M.find(u+k)==M.end()) 	{Q.push(u+k); M[u+k]=M[u]+1;}
		if(u-m>0  && M.find(u-m)==M.end()) 	{Q.push(u-m); M[u-m]=M[u]+1;}
		if(M.find(f)!=M.end()) break;
	}
	if(M.find(f)!=M.end()) cout<<M[f]; else cout<<-1;
}


