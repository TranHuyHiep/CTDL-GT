#include<bits/stdc++.h>
using namespace std;
void quicksort(int *a,int L,int R)//sap xep a[L]...a[R-1]
{
	if(L>=R-1) return;
	int x=a[(L+R-1)/2];
	int i=L,j=R-1;
	while(i<=j)
	{
		while(i<=j && a[i]<x) i++;
		while(i<=j && x<a[j]) j--;
		if(i<=j) {swap(a[i],a[j]);i++;j--;}
	}
	quicksort(a,L,j+1);
	quicksort(a,i,R);
//	if(L>=R-1) return;
//	swap(a[L],a[(L+R-1)/2]);
//	int i=L;
//	for(int j=L+1;j<R;j++)
//	if(a[j]<a[L])  swap(a[++i],a[j]);
//	swap(a[L],a[i]);
//	quicksort(a,L,i);
//	quicksort(a,i+1,R);
}
//Viet tiep cac version buoi sau chua

void QuickSort(int *L,int *R)
{
	if(L>=R-1) return;
	int x=*(L+(R-1-L)/2);
	int *i=L,*j=R-1;
	while(i<=j)
	{
		while(i<=j && *i<x) i++;
		while(i<=j && x<*j) j--;
		if(i<=j) {swap(*i,*j);i++;j--;}
	}
	QuickSort(L,j+1);
	QuickSort(i,R);
}
template<class T,class Cmp=less<T> >
void qs(T *L,T *R,Cmp ss=less<T>())
{
	if(L>=R-1) return;
	T x=*(L+(R-1-L)/2);
	T *i=L,*j=R-1;
	while(i<=j)
	{
		while(i<=j && ss(*i,x)) i++;
		while(i<=j && ss(x,*j)) j--;
		if(i<=j) {swap(*i,*j);i++;j--;}
	}
	qs(L,j+1,ss);
	qs(i,R,ss);
}
int main()
{
	double a[]={23,54,35,46,53,4,753,77,54,43,52,236,456,25,52,52};
	int n=sizeof(a)/sizeof(a[0]);
	qs(a,a+n,greater<double>());
	for(auto x:a) cout<<x<<" ";
}


