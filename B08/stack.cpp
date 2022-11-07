#include <bits/stdc++.h>

using namespace std;

int main() {
	stack<int> s;	//chi luu vi tri
	int n;
	cin >> n;
	int a[n+5]={INT_MAX};
//	for(int i=1; i<=n; i++){
//		cin >> a[i];
//	}
	s.push(0);
	for(int i=1; i<=n; i++){
		cin >> a[i];
		while(a[s.top()] <= a[i]) s.pop();
		cout << i-s.top() << " ";
		s.push(i);
	}
	
    return 0;
}

