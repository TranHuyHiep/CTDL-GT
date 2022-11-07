//doi co so 2
#include <bits/stdc++.h>
#include "STACK.cpp"
#include "STACK.cpp"
using namespace std;

int main() {
    int n;
    cin >> n;
    Stack<int> s;
    while(n)
    {
    	s.push(n%2);
    	n/=2;
	}
	while(s.size())
	{
		cout << s.top();
		s.pop();
	}
    return 0;
}

