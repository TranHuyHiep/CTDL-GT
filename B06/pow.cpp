//luy thua
#include <bits/stdc++.h>

using namespace std;
double POW(double x, int n)
{
	if(n==0) return 1;
	return x*POW(x,n-1);
}
double mypow(double x, int n)
{
	if(n==0) return 1;
	if(n%2==1) return x*mypow(x*x,n/2);
	else return mypow(x*x,n/2);
}
int main() 
{
	for(int i=1; i<=10; i++) cout << POW(2,i) << " ";
	cout << "\n";
	for(int i=1; i<=10; i++) cout << mypow(2,i) << " ";
	cout << "\n";
	for(int i=1; i<=10; i++) cout << (1<<i) << " ";
    return 0;
}

