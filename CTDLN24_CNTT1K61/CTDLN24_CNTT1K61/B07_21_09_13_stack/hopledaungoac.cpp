//kiem tra dau ngoac hop le
#include<bits/stdc++.h>
using namespace std;
int main()
{
	//4+5+(2+3)*4+[1+2-(3+5+4)*{1-2}]
	//()[(){}]
	string x;
	cin>>x;
	stack<char> S;
	bool ok=1;
	for(char c:x)
	if(c=='(' or c== '[' or c=='{') S.push(c);
	else 
	{
		if(c==')') {if(S.size() && S.top()=='(') S.pop(); else {ok=0; break;}}
		if(c==']') {if(S.size() && S.top()=='[') S.pop(); else {ok=0; break;}}
		if(c=='}') {if(S.size() && S.top()=='{') S.pop(); else {ok=0; break;}}
	}
	if(S.size()) ok=0;
	cout<<(ok?"hop le":"khong hop le");
}


