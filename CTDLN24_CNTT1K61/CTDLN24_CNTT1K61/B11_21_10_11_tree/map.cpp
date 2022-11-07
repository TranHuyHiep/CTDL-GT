//map
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int> M;
	for(int x:{4,7,2,8,1,6,4,8,3,2}) M[x]++;
	for(auto m:M) cout<<m.first<<" "<<m.second<<"\n";
}


