//hau to
#include<bits/stdc++.h>
using namespace std;

map<char,int> UT={{'*',2},{'/',2},{'+',1},{'-',1},{'(',0}};
int tinh(int a,int b,char p)
{
	if(p=='+') return a+b;
	if(p=='-') return a-b;
	if(p=='*') return a*b;
	return a/b;
}
int main()
{
	stack<char> S;
	string in,out;
	cin>>in;
	for(int c:in)
	if(c=='(') S.push(c);
	else if(c>='0' && c<='9') out.push_back(c);
	else if(UT.find(c)!=UT.end())  //phep +,-*,/
	{
		while(S.size() && UT[S.top()]>=UT[c]) {out.push_back(S.top()); S.pop();}
		S.push(c);
	}
	else //con lai la dau  )
	{
		while(S.top()!='(') {out.push_back(S.top()); S.pop();} 
		S.pop();  //lay dau ( ra
	}
	while(S.size()) {out.push_back(S.top()); S.pop();} 
	cout<<out<<"\n";
	stack<int> STACK;
	for(char c:out)
	if('0'<=c && c<='9') STACK.push(c-'0');
	else
	{
		int b=STACK.top(); STACK.pop();
		STACK.top()=tinh(STACK.top(),b,c);
	}
	cout<<STACK.top();	
}


