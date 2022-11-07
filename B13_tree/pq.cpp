#include<bits/stdc++.h>
using namespace std;
int main(){
	//priority_queue<int> Q;
	priority_queue<int, vector<int>, greater<int>> Q;
	for(int x:{4,5,2,5,3,7}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
	return 0;
}
