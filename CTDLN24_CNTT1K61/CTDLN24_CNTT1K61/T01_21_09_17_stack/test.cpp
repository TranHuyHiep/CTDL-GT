#include<bits/stdc++.h>
#include"stack.cpp"
using namespace std;
int main()
{
	STACK<int> S;
	for(int x:{4,7,3,1}) S.push(x);
	S.top()=100;
	while(S.size()) {cout<<S.top()<<" "; S.pop();}

}


