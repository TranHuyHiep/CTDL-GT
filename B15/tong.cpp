#include<bits/stdc++.h>
using namespace std;

int tong(int *F, int *L)	// tinh tong tu con tro F den truoc L
{n
	if(F==L) return 0;
	if(F==L-1) return *F;
	int *M=F+(L-F)/2;
	return tong(F,M)+tong(M,L);
}

int main(){
	int a[]={2,5,6,3,8,8,5,2,5,4};
	cout<<tong(a+2,a+6);
	return 0;
}
