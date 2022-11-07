#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n>1000){
		cout << "000000000";
		return 0;
	}
	vector<int> V(1,1);
	while(n>1)
	{
		int nho=0;
		for(int &x:V)
		{
			nho+=x*n;
			cout << x << " ";

			x=nho%10;
			nho/=10;
		}
		while(nho) 
		{
			V.push_back(nho%10);
			nho/=10;
		}
		n--;
	}
	V.resize(9,0);
	for(auto it=V.rbegin(); it!=V.rend(); it++) cout<<*it;
	return 0;
}
