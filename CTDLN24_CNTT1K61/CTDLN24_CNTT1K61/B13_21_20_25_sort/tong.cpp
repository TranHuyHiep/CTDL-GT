#include<bits/stdc++.h>
using namespace std;

int tong(int *F,int *L)  //tinh tong tu con tro F den truoc L
{
	if(F==L) return 0;
	if(F==L-1) return *F;
	int *M=F+(L-F)/2;
	return tong(F,M)+tong(M,L);
}
int main()
{
	int a[]={4,7,2,8,1,6,4,5,3,7,6,2};
	cout<<tong(a+1,a+6);
}


