//Nhap so n in ra cac so fibonacci tu thu 1->n
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;						//1
	cin>>n;						//1
	long long F[n+5]={0,1};     //1+1+2+2    //F[0]=0->2 , F[1]=1 -> 2
	int i=1;					//2
	for(;i<=n;i++) 				//n lan chay i moi chay co 2 phep gom (<=,++)
	{
		cout<<F[i];					//n*2
		F[i+1]=F[i]+F[i-1];			//n*(2+1+1+1+2)
	}
}
//10+ n(2+2+7) +1  -> 11n+11 la so phep toan ma thuat toan -> thoi gian ly thuyet


