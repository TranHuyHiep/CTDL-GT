//doi co so 2
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char hex[]="0123456789ABCDEFGHIJKLMOPQRSTUVMXYZ";
    stack<char> s;
    printf("%X\n",n);
    while(n)
    {
    	s.push(hex[n%16]);
    	n/=16;
	}
	while(s.size())
	{
		cout << s.top();
		s.pop();
	}
    return 0;
}

