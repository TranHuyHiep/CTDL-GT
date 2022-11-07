#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct ps{
	ll t, m;
};

ps rutgon(ps p){
	int d = __gcd(p.t, p.m);
	p.t/=d;
	p.m/=d;
	return p;
}

ps operator+(ps p, ps q){
	ps r;
	r.t = p.t*q.m + q.t*p.m;
	r.m = p.m*q.m;
	return rutgon(r);
}

ps gan(int a, int b){
	ps p;
	p.t = a;
	p.m = b;
	return p;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, k;
	cin >> n;
	for(ll i=1; i<=n; i++){
		cin >> k;
		ps q,p;
		q=gan(1,1);
		for(int j=2; j<=k; j++){
			q=q+gan(1,j);
		}
		cout << q.t << "/" << q.m << endl;
	}
    return 0;
}

