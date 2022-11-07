#include <bits/stdc++.h>

using namespace std;

struct dt
{
	public:
	void nhap()
	{
		cin >> n;
		for(int i=0; i<=n; i++) cin >> a[i];
	}
	void xuat()
	{
		for(int i=0; i<=n; i++) cout << setprecision(2) << fixed <<a[i] << " ";
	}
	friend dt operator+(dt p, dt q)
	{
		dt r;
		r.n = max(p.n, q.n);
		for(int i=0; i<=r.n; i++) r.a[i]+=p.a[i]+q.a[i];
		while(r.n && r.a[r.n] == 0) r.n--;
		return r;
	}
	private:
	int n;
	double a[10005]={};
	
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	dt p,q,r,z;
	p.nhap(); q.nhap(); r.nhap();
	z=p+q+r;
	z.xuat();
    return 0;
}

