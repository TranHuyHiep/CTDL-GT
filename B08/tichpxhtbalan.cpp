#include <bits/stdc++.h>

using namespace std;

map<char, int> UT={{'*',2},{'/',2},{'+',1},{'-',1},{'(',0}};

int tinh(int a, int b, char p)
{
	if(p=='+') return a+b;
	if(p=='-') return a-b;
	if(p=='*') return a*b;
	if(p=='/') return a/b;
}

int main() {
	stack<char> s;
	string in, out;
	cin >> in;
	for(char c:in)
	if(c=='(') s.push(c);
	else if('0'<=c && c<='9') out.push_back(c);
	else if(UT.find(c) != UT.end())		//phep + - * /
	{
		while(s.size() && UT[s.top()] >= UT[c])
		{
			out.push_back(s.top());
			s.pop();
		}
		s.push(c);
	}
	else	//con lai la dau )
	{
		while(s.top() != '(')
		{
			out.push_back(s.top());
			s.pop();
		}
		s.pop(); // lay dau ( ra
	}
	while(s.size())
	{
		out.push_back(s.top());
		s.pop();
	}
	cout << out;
	
	stack<int> stack;
	for(char c:out)
	if('0' <= c && c<='9') stack.push(c-'0');
	else
	{
		int a=stack.top(); stack.pop(); 
		stack.top() = tinh(stack.top(), a,c);
	}
	cout << "\n" <<stack.top();
    return 0;
}

