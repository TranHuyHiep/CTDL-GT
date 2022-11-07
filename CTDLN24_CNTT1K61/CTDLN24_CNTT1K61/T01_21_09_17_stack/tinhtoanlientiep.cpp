#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> S;  //chi luu vi tri
	int n;
	cin>>n;
	int a[n+5]={INT_MAX}; 
	for(int i=1;i<=n;i++) cin>>a[i]; 
	S.push(0);
	for(int i=1;i<=n;i++)
	{
		while(a[S.top()]<=a[i]) S.pop();    //mac du 2 vong long nhau nhung no O(n)
		cout<<i-S.top()<<" ";
		S.push(i);
	}
}


