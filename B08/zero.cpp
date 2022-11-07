#include <bits/stdc++.h>
#include "stackk.cpp"
using namespace std;

int main() {
    Stack<int> s;
    for(int i=1; i<5; i++) s.push(i);
    s.top()=100;
    while(s.size()){
    	cout << s.top() << " ";
    	s.pop();
	}

    return 0;
}

