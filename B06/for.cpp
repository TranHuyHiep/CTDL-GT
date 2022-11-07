#include <bits/stdc++.h>

using namespace std;

int main() {
	int a[]={4,7,2,8,1}, n=5;
	for(int i=0,j=4; i<j;i++,j--) swap(a[i],a[j]);
	cout <<"\Day sau dao: ";
	for(auto x:a) cout << x << " ";
    return 0;
}

