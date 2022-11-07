#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> M;
	for(auto x:{4,7,2,8,4,8,3,2,4,9,3,6}) M[x]++;
	for(auto m:M) cout<<m.first<<" "<<m.second<<"\n";


}


