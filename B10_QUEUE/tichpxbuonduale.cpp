#include <bits/stdc++.h>
#include"QUEUE.cpp"
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, k, m, x;
	ll res=0;
	cin >> n >> k >> m;
	QUEUE<int> Q;
	for(int i=1; i<=n+k; i++)
	{
		if(i<=n) {
			cin >> x;
			Q.push(x);			
		}else Q.push(0);
		while(Q.size()>k) Q.pop();
		ll t=0;
		while(t<m && Q.size())
		{
			if(Q.front() + t > m)
			{
				Q.front() -= m-t; 
				t=m;
			}else{
				t+=Q.front();
				Q.pop();
			}
		}
		res+=t;
	}
	cout << res;
    return 0;
}

