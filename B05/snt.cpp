#include <bits/stdc++.h>

using namespace std;
bool ktnt(long long n)
{
	if(n==2) return 1;
	if(n<2 || n%2==0) return 0;
	for(int i=3; i*i<=n; i=i+2) if(n%i==0) return 0;
	return 1;
}
// n=2 -> T(n) = 2
// n=3
// n = 100 -> 1 + 4 + 1;
// n =101 -> 1 + 4 + [1 + 6*(sqrt(n)/2-1) +1] + 1		->T(n) = O*sqrt(n)
int main() {
	
    return 0;
}

