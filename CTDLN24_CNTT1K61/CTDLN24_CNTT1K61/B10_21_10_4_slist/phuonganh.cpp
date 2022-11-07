#include<bits/stdc++.h>
using namespace std;

string fun(int n)
{
	n--;
	if(n<3) return string(1,n+'2');
	return fun(n/3)+string(1,n%3+'2');
}

int main()
{
	int n;
	cin>>n;
	string res=fun(n);
	cout<<res;
	reverse(res.begin(),res.end()); //dao
	cout<<res;
}


