//set
#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int> S;
	for(int x:{4,7,2,8,1,6,4,8,3,2}) S.insert(x);
	cout<<"\nset : ";for(auto s:S) cout<<s<<" ";
	S.erase(6);
	cout<<"\nset : ";for(auto s:S) cout<<s<<" ";
}


