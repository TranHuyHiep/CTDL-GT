//mergersort
#include<bits/stdc++.h>
using namespace std;


void merge_sort(int *a,int L,int R,int *b,int *c) //sap a[L]...a[R-1]
{
	if(L>=R-1) return;
	int M=(L+R)/2;
	merge_sort(a,L,M,b,c);
	merge_sort(a,M,R,b,c);
	//tron 2 day tang
	for(int i=L;i<M;i++)   b[i]=a[i];
	for(int j=M;j<R;j++) c[j]=a[j];
	int i=L,j=M;
	for(int k=L;k<R;k++) 
	if(i<M&&j<R) a[k]= b[i]<c[j]?b[i++]:c[j++];
	else a[k]=i<M?b[i++]:c[j++];
}
void mergesort(int *a,int L,int R)
{
	int *b=new int [R+5];
	int *c=new int [R+5];
	merge_sort(a,L,R,b,c); 
	delete []b;delete []c;	
}
template <class T,class Cmp>
void Merge_Sort(T *L,T *R,T *b,T *c,Cmp ss) //sap a[L]...a[R-1]
{
	if(L>=R-1) return;
	T *M=L+(R-L)/2;
	Merge_Sort(L,M,b,c,ss);
	Merge_Sort(M,R,b,c,ss);
	//tron 2 day tang
	T*i=b,*j=c;
	for(T *p=M-1;p>=L;p--) *i++=*p;
	for(T *q=R-1;q>=M;q--) *j++=*q;
	i--;j--;
	for(T *k=L;k<R;k++) 
	if(i>=b && j>=c) *k= ss(*i,*j)?*i--:*j--;
	else *k=i>=b?*i--:*j--;
}
template <class T,class Cmp=less<T> >
void MergeSort(T*L,T*R,Cmp ss=less<T>())
{
	T *b=new int [(R-L)/2+5];
	T *c=new int [(R-L)/2+5];
	Merge_Sort(L,R,b,c,ss); 
	delete []b;delete []c;	
}
int main()
{
//	int a[]={5,4};
	int a[]={23,54,35,46,53,4,753,77,54,43,52,236,456,25,52,52};
	int n=sizeof(a)/sizeof(a[0]);
	MergeSort(a,a+n,greater<int>());
	for(auto x:a) cout<<x<<" ";

}


