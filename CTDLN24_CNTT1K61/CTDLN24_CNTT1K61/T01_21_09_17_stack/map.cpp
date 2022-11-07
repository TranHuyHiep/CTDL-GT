#include<bits/stdc++.h>
using namespace std;
int main()
{
//	map<int,int> M;  //Anh xa  
//	M[5]=6;
//	M[-2]=3;
//	M[4]=1;
//	for(auto x:M) cout<<x.first<<" "<<x.second<<"\n";
	map<int,string> M={{61,"Brasilia"},{71,"Salvador"},{11,"Sao Paulo"}};
	int ma;
	cin>>ma;
	if(M.find(ma)==M.end()) cout<<"DDD not found";
	else cout<<M[ma];
}


