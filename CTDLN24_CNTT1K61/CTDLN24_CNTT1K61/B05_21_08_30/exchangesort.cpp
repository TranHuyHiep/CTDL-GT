//
#include<bits/stdc++.h>
using namespace std;
int main()
{									//khong gian (1+100+1+1+1)*sizoef(int)
	int n,a[100],i,j,t;           	//5 phep toan khai bao
	cin>>n;							//1 
	for(i=1;i<=n;i++) cin>>a[i];    //1 + (1+1+2)*n +   1
	
	for(i=1;i<n;i++) 				//it nhat 		5n*n/2+5n/2-3	
	for(j=i+1;j<=n;j++)				//nhieu nhat	6n*n-n-3	
	if(a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}	
	for(i=1;i<=n;i++) cout<<a[i]<<" "; //1 +  (1+1+3)*n   + 1
}
//Goi T(n) la do phuc tap thoi gian cua chuong trih
//     5+2+4n+[5n*n/2+5n/2-3]+2+5n <=T(n)<= 5+2+4n+[6n*n-n-3]+2+5n
// T(n) = O(n^2)
//


