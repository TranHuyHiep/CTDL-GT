#include <bits/stdc++.h>

using namespace std;
long long gt(int n)
{
//	if(n==0) return 1;
//	return n*gt(n-1);
	return n?n*gt(n-1):1LL;
}

int main() {
	int n, s=1;
	cin >> n;
//	while(n) s*=n--;
	s=gt(n);
	cout << s;
    return 0;
}

