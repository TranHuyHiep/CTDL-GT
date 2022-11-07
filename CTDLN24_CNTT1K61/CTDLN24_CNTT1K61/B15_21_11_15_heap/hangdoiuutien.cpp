#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={34,7,25,46,17,42,11,23,9,38,52};
	priority_queue<int> Q;
	for(int x:a) Q.push(x);
	while(Q.size()) 
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}


}


