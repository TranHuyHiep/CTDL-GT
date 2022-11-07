#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={4,7,2,8};
	vector<int> V(a,a+4);
	list<int> L(V.begin(), V.end());
	for(auto x:L) cout<<x<<" ";
	return 0;
}
