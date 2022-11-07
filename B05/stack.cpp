#include <bits/stdc++.h>
#include<stack>
using namespace std;

int main() {
    stack<int> S;
    for(int x:{3,7,2}) S.push(x);
    while(not S.empty())
    {
    	cout << S.top() << " ";
    	S.pop();
	}
    return 0;
}

