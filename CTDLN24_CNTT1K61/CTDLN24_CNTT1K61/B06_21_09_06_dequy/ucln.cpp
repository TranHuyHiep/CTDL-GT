#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(!b) return a;
	return gcd(b,a%b);
}

int main()
{
	cout<<gcd(-27,72);

}


