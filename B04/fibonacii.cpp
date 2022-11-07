//Nhap so n in ra cac so fibonacci tu thu 0->n
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long F[n+1]={0,1};
	for(int i=1; i<=n; i++)
    {
    	cout << F[i] << " ";
		F[i+1] = F[i]+F[i-1]; 
	}
}

