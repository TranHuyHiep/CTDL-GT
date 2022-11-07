#include <bits/stdc++.h>

using namespace std;

void dcs(int n)
{
	if(n<2) cout << n;
	else {
		dcs(n/2); 
		cout << (n&1);	
	}
}

int main() {
    dcs(123);

    return 0;
}

