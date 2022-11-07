#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, k=0;
	cin >> n;
	if(n%9!=0) k=1;
	cout << n/9+k;
    return 0;
}

