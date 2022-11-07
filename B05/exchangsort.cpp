#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, a[100], i, j, t;    // khong gian: (1+100+1+1+1)*sizeof(int)
								// 5 phep toan khai bao
	cin >> n;					// 1
	for(i=1; i<=n; i++) cin >> a[i];	// 1+(1+1+2)*n+1
	for(i=1; i<n; i++)			// 1+(1+1)*n+1   
	for(j=i+1; j<=n; j++)		// min: 5n*n/2+5n/2-3 
	if(a[i] > a[j])				// max: 6n*n-n-3
	{
		t = a[i];
		a[i]=a[j];
		a[j]=t;
	} 
	for(i=1; i<=n; i++) cout << a[i] << " "; // 1+(1+1+3)*n+1
    return 0;
}
// Goi T(n) la do phuc tap thoi gian cua chuong trinh
// 	5+2+4n+[5n*n/2+5n/2-3]+2+5n	<= T(n) <= 	5+2+4n+[6n*n-n-3]+2+5n
// T(n) = O(n^2)
