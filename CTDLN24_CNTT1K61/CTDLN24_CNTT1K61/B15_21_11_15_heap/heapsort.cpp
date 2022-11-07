#include<bits/stdc++.h>
using namespace std;

void heapy(int *a,int n,int k) //log n
{
	if(2*k+1>=n) return;
	int p=2*k+1;
	if(p+1<n && a[p]<a[p+1]) p++;
	if(a[k]<a[p]) {swap(a[k],a[p]); heapy(a,n,p);}
}
void heap_sort(int *a,int n)
{
	for(int i=n-1;i>=0;i--) heapy(a,n,i);    //nlogn
	for(int i=n-1;i>0;i--)					 //nlogn
	{
		swap(a[0],a[i]);
		heapy(a,i,0);
	}
}


template<class T,class Cmp>
void Heapy(T *L,T *R,T *k,Cmp ss)
{
	T*p=k+(k-L)+1;
	if(p<R)
	{
		if(p+1<R && ss(*p,*(p+1))) p++;
		if(ss(*k,*p)) {swap(*k,*p); Heapy(L,R,p,ss);}
	}
}
template<class T,class Cmp=less<T> >
void heapsort(T *L,T *R,Cmp ss=less<T>())
{
	for(T* i=R-1;i>=L;i--) Heapy(L,R,i,ss);
	for(T* i=R-1;i>L;i--)
	{
		swap(*L,*i);
		Heapy(L,i,L,ss);
	}
}
int main()
{
	int a[]={34,7,25,46,17,42,11,23,9,38,52};
	int n=sizeof(a)/sizeof(int);
	heapsort(a,a+n,greater<int>());  
	for(int x:a) cout<<x<<" ";
}


