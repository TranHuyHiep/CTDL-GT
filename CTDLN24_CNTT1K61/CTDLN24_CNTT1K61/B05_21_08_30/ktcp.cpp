//cho n kiem tra xem no co la so chinh phuong ko (ton tai a de a*a=n)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,L,R,M,ok=0;
	cin>>n;
	L=0;R=n;
	while(L<=R)
	{
		M=(L+R)/2; 
		if(M*M==n) {ok=1; break;}
		M*M>n?R=M-1:L=M+1;
	}
	cout<<(ok?"chinh phuong":"khong chinh phuong");
}
//T(n) do phuc tap thoi gian T(n)=c0+ c*log(n) = O(logn)

