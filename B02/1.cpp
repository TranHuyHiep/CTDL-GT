#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll csc(ll x, ll y, ll k=1){
	if(x%k==0) x=x;
	else{
		x = x+k-x%k;
	}
	y = y-y%k;
	return (x+y)*((y-x)/k+1)/2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll x, y;
	cin >> x >> y;
	if(x > y) swap(x,y);
	cout << csc(x,y,1) - csc(x,y,13);
    return 0;
}

