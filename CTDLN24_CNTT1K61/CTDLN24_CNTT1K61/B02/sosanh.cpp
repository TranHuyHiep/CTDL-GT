#include<bits/stdc++.h>
using namespace std;


int ss(int a,int b,bool tang=1)
{
	return a>b==tang;
}
int main()
{
	int x=78,y=87;
	if(ss(x,y,0)) cout<<"x<=y";
	else cout<<"x>y";
}


