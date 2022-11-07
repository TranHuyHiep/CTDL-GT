//select sort
#include<bits/stdc++.h>
using namespace std;
//Do phuc tap thuat toan O(n^2)
void selectionsort(int *a,int n) //sap xep a0 den an-1
{
	for(int i=0;i<n;i++)
	{
		int p=i;
		for(int j=i+1;j<n;j++) if(a[j]<a[p]) p=j;
		if(p!=i) swap(a[i],a[p]);
	}
}
void selectsort(int *F,int *L) //sap tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F;i<L;i++)
	{
		int *p=i;
		for(int *j=i+1;j<L;j++) if(*j<*p) p=j;
		if(p!=i) swap(*i,*p);
	}
}
template <class T>
void select_sort(T *F,T *L) //sap tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F;i<L;i++)
	{
		T *p=i;
		for(int *j=i+1;j<L;j++) if(*j<*p) p=j;
		if(p!=i) swap(*i,*p);
	}
}
template <class T,class Cmp>
void ss(T *F,T *L,Cmp cmp)  //sap tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F;i<L;i++)
	{
		T *p=i;
		for(int *j=i+1;j<L;j++) if(cmp(*j,*p)) p=j;
		if(p!=i) swap(*i,*p);
	}
}
template <class T>
void ss(T *F,T *L) {return ss(F,L,less<T>());}
int main()
{
	int a[]={23,54,35,46,53,4,753,77,54,4352,236,456,2552,52},n=sizeof(a)/sizeof(a[0]);
	//selectionsort(a,n);
	ss(a,a+n);
	for(auto x:a) cout<<x<<" ";
}



