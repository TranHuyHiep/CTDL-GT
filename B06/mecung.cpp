#include <bits/stdc++.h>

using namespace std;
int a[100][100],n,m, buoc=0, ans=99999;

bool dfs(int sx, int sy, int fx, int fy)
{
	if(sx==fx && sy == fy){
		ans=min(ans, buoc);
		return 1;
	} 
	a[sx][sy]=1;
	buoc++;
	if(a[sx+1][sy]==0 && dfs(sx+1,sy,fx,fy)) return 1; 
	if(a[sx-1][sy]==0 && dfs(sx-1,sy,fx,fy)) return 1; 
	if(a[sx][sy+1]==0 && dfs(sx,sy+1,fx,fy)) return 1; 
	if(a[sx][sy-1]==0 && dfs(sx,sy-1,fx,fy)) return 1; 
	return 0;
	
}

int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	for(int j=1; j<=m; j++) cin >> a[i][j];
	for(int i=0; i<n+1; i++) a[i][0] = a[i][m+1]=1; // bao thanh
	for(int j=0; j<m+1; j++) a[0][j] = a[n+1][j]=1; // bao thanh
	int sx,sy,fx,fy;
	cin>>sx>>sy>>fx>>fy;
	if(dfs(sx,sy,fx,fy)) cout <<ans;
	else cout << -1;
    return 0;
}

