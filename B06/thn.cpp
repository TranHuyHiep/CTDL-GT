//thap hn
#include <bits/stdc++.h>

using namespace std;
int b=1;
void thn(int n, char A, char B, char C) // di chuyen n dia tu A sang B lay C lam trung gian
{
	if(n==1) cout <<"\nBuoc"<<b++<< " Chuyen dia " << n << " tu " << A << " sang " << B;
	else
	{
		thn(n-1, A,C,B); // Chuyen ngon thap n-1 tu A sang C lay B la trung Gian;
		cout <<"\nBuoc"<<b++<< " Chuyen dia " << n << " tu " << A << " sang " << B;
		thn(n-1,C,B,A);
	}
}
int main() {
	int n;
	cin >> n;
	thn(n,'A','B','C');
    return 0;
}

