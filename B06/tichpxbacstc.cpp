#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
LL M=1e3;

LL powmod(LL a, LL n)
{
	if(n==0) return 1;
	if(n%2==0) return powmod((a*a)%M, n/2)%M;
	else return a*powmod((a*a)%M,n/2)%M;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	LL a, n;
	cin >> a >> n; a%=M;
	printf("%.3ld", powmod(a,n));
    return 0;
}

