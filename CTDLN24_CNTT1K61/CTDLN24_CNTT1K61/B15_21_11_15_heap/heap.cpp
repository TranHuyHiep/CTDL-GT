#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={34,7,25,46,17,42,11,23,9,38,52};
	int n=sizeof(a)/sizeof(int);
	make_heap(a,a+n);  
	for(int x:a) cout<<x<<" ";

}


