#include<bits/stdc++.h>
using namespace std;
//Do phuc tap thuat toan O(n^2)
template <class T>
void Swap(T &a,T &b) {T c=a;a=b;b=c;}

void bubble(int *a,int n)  //a[1] -> a[n]
{
	for(int i=1;i<n;i++)
	for(int j=n;j>i;j--)
	if(a[j]<a[j-1]) Swap(a[j],a[j-1]);
}

void bubb(int *F,int *L) //sap tu cho con tro F toi con tro L-1
{
	for(int *p=F;p<L;p++)
	for(int *q=L-1;p<q;q--) 
	if(*q<*(q-1)) Swap(*q,*(q-1));
}
template <class T>
void bub(T *F,T *L) //sap tu cho con tro F toi con tro L-1
{
	for(;F<L;F++)
	for(T *q=L-1;F<q;q--) 
	if(*q<*(q-1)) Swap(*q,*(q-1));
}
template <class T,class Cmp>
void bs(T *F,T *L,Cmp ss=less<T>()) //sap tu cho con tro F toi con tro L-1
{
	for(;F<L;F++)
	for(T *q=L-1;F<q;q--) 
	if(ss(*q,*(q-1))) Swap(*q,*(q-1));
}
template <class T>
void bs(T *F,T *L) {return bs(F,L,less<T>());}

int main()
{
	int a[]= {12,6,45,52,36,523,3,257,63,252,52,37,645},n=sizeof(a)/sizeof(int);
	double b[]={24,23,52,63,46,37.5,4,7,47,3,8,2,7,23.6,36,37,2,7,27,27,56,36,57,34};
	int m=sizeof(b)/sizeof(b[0]);
	//bubble(a,n);  //sap tu a3 den a9
	bub<int>(a+3,a+10);
	cout<<"\nMang a  : "; for(int x:a) cout<<x<<" ";
	
	bs<int>(a,a+n,greater<int>());
	cout<<"\nMang a  : "; for(int x:a) cout<<x<<" ";
	
	cout<<"\nMang b  : "; for(auto x:b) cout<<x<<" ";
	bs<double>(b,b+m);
	cout<<"\nMang b  : "; for(auto x:b) cout<<x<<" ";
}


