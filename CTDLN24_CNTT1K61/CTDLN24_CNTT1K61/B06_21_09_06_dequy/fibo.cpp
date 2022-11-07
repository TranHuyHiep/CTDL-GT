//Fibo  Fn=F[n-1]+F[n-2]
#include<bits/stdc++.h>
using namespace std;

long long Fib(int n)
{
	if(n<=1) return 1;
	return Fib(n-1)+Fib(n-2);
}
int main()
{
	for(int i=0;i<=10;i++) cout<<Fib(i)<<" ";
}


