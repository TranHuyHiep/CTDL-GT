#include<bits/stdc++.h>
using namespace std;

int *diachi(int a[],int i)
{
	return &a[i];
}

int main()
{
	int a[]={5,4,2,0,3,7,2,1};
	int *p=diachi(a,3);  //
	*p=9;
	for(int x:a) cout<<x<<" ";

}


