#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> M;
	for(int x:{4,5,2,5,3,7,4,8,3,2}) M[x]++;
	for(auto m:M) cout<<m.first<<" "<<m.second<<endl;
}
