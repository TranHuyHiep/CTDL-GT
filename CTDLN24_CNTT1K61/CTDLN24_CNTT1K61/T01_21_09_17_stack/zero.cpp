#include<bits/stdc++.h>
#include"stack.cpp"
using namespace std;
int main()
{
	int n=36;
	cin>>n;
	int d[n+5]={};  //mang danh dau nhung phan tu di duoc tu n;
	STACK<int> S;
	S.push(n); d[n]=1;
	while(S.size())
	{
		int u=S.top(); S.pop();
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int b=u/a;
			int v=(a-1)*(b+1);
			if(d[v]==0) {S.push(v); d[v]=1;}
		}
	}
	for(int i=0;i<=n;i++) if(d[i]) cout<<i<<" ";
}


