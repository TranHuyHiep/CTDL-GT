#include<bits/stdc++.h>
using namespace std;
int main(){
	set<int> S;
	for(int x:{4,5,2,5,3,7,4,8,3,2}) S.insert(x);
	cout<<"\nset: ";for(auto s:S) cout<<s<<" ";
	S.erase(4);
	cout<<"\nset: ";for(auto s:S) cout<<s<<" ";
}
