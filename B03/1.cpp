#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	pii A[n+5];
	for(int i=1; i<=n; i++){
		cin >> A[i].first;
		A[i].second = i;
	}
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			if(A[i].first > A[j].first)
				swap(A[i],A[j]);
		}
	}
	for(int i=1; i<=n; i++){
		cout << A[i].second << " ";
	}
    return 0;
}

