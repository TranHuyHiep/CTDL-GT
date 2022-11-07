//buon dua le
#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
int main()
{
	int n,k,m,x;
	long long res=0;
	cin>>n>>k>>m;
	QUEUE< pair<int,int> > Q;   //first: ngay bat dau thu hoach, second: san luong
	for(int i=1;i<=n+k;i++)
	{
		if(i<=n) {cin>>x; Q.push({i,x});}
		while(Q.size() && i-Q.front().first+1>k) Q.pop();
		long long t=0;
		while(t<m && Q.size()) 
		{ 
			if(Q.front().second+t>m) {Q.front().second-=m-t; t=m;} 
			else {t+=Q.front().second; Q.pop();}
		}
		res+=t;
	}
	cout<<res;
}


