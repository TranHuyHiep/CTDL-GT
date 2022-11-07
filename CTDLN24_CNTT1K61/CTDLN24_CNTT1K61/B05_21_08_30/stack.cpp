#include<bits/stdc++.h>
#include<stack>   
//ngan xep
using namespace std;
int main()
{
	stack<int> S;
	for(int x:{3,7,2,1}) S.push(x);
	while(not S.empty())
	{
		cout<<S.top()<<" ";
		S.pop();
	}

}


