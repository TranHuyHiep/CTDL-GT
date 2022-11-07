//doi co so 16
#include<bits/stdc++.h>
#include"STACK.cpp"
using namespace std;
int main()
{
	int n;
	char hex[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin>>n;
//	printf("%X\n",n);
	
	Stack<char> S;
	while(n) {S.push(hex[n%16]); n/=16;}
	while(S.size()) {cout<<S.top();S.pop();}
}


