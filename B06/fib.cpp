//Fibo Fn=f[n-1]+F[n-2]
#include <bits/stdc++.h>

using namespace std;

long long Fib(int n)
{
	if(n==0) return 0;
	if(n==1) return 1;
	return Fib(n-1)+Fib(n-2);
}

int main() {
	
	int n; cin >> n;
	for(int i=0; i<n; i++) cout << Fib(i) << " ";
    return 0;
}

