//kiem tra dau ngoac hop le
#include <bits/stdc++.h>

using namespace std;

int main() {
    //4+5+(2+3)*4+[1+2-(3+5+4)*{1-2}]
	//()[(){}]
	int ok=1;
	string x;
	cin >> x;
	stack<char> s;
	for(char c:x)
	{
		if(c=='(' or c=='[' or c=='{') s.push(c);
		else
		{
			if(c==')')
			{
				if(s.size() &&s.top()=='(') s.pop();
			}else
			{
				ok=0;
				break;
			}
			if(c==']')
			{
				if(s.size() &&s.top()=='[') s.pop();
			}else
			{
				ok=0;
				break;
			}
			if(c=='}') 
			{
				if(s.size() &&s.top()=='{') s.pop();
			}else
			{
				ok=0;
				break;
			}
		}
	}
	if(s.size()) ok=0;
	cout <<(ok?"Hop le":"Khong hop le");
    return 0;
}

