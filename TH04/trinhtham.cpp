#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n+5]={};
	priority_queue<int> q1,q2;
	for(int i=1; i<=n; i++){
		cin>>a[i];
		q1.push(a[i]);
		if(i>=k){
			q2.push(a[i-k+1]);
			cout<<q1.top() << " ";
			while(q1.size() && q1.top() == q2.top())
			{
				q1.pop(); q2.pop();
			}
		}
	}
	return 0;
}
