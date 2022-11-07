#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={4,7,2,8,4,8,3,2};
	vector<int> V(a,a+4);
	list<int> L(V.begin(),V.end());
	list<int> L1(a+3,a+8);
	for(auto x: L1) cout<<x<<" ";


}


