#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int,greater<int> > S;
	for(int x:{43,2645,36,63,74,2,26,773,83,59,05,84,26,27,48,59,06,72,2738}) S.insert(x);
	for(auto s:S) cout<<s<<" ";
	S.erase(59);
	S.erase(60);
	cout<<"\nSau xoa: \n";
	for(auto s:S) cout<<s<<" ";
}


