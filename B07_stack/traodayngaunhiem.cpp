#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[] = {4,7,2,8,1,6}, n=sizeof(a)/sizeof(int);
    srand(time(0));
	for(int i=0; i<n; i++)
    {
    	int j=rand()%n;		//RAN_MAX
    	swap(a[i],a[j]);
	}
	for(auto x:a) cout << x <<" ";
    return 0;
}

