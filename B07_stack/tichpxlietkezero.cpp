#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int d[n+5]={};		//mang danh dau nhung phan tu di duoc tu n;
    stack<int> s;
    s.push(n); d[n]=1;
    while(s.size())
    {
    	int u=s.top();
    	s.pop();
    	for(int a=1; a*a<=u; a++)
		if(u%a==0)
		{
			int b=u/a;
			int v=(a-1)*(b+1);
			if(d[v]==0){
				s.push(v);
				d[v]=1;
			}
		}
	}
	for(int i=0; i<=n; i++) 
		if(d[i]) cout << i << " ";
    return 0;
}

