// Sắp xếp chèn - Insertion Sort
// độ phức tạp: O(n^2)
// input: a1, a2,.., an; output: a1 <= a2 <=...<= an
/*
Ý tưởng:
Bước 1: Chỉ xét một mình a[1] coi như đã sắp và không làm gì
Bước 2: Chèn a[2] vào trước hoặc sau a[1] để được dãy xắp a[1] <= a[2]
Bước 3: Chèn a[3] vào dãy đẵ sắp a[1] <= a[2] để được dãy sắp xếp a[1] <= a[2] <= a[3]
.....
Bước i: Chèn a[i] vào dãy đẵ sắp a[1] <= a[2] <= ... <= a[i-1] để được dãy sắp xếp a[1] <= a[2] <= ... <= a[i-1] <= a[i]
.....
Bước n: Chèn a[n] vào dãy đẵ sắp a[1] <= a[2] <= ... <= a[n-1] để được dãy sắp xếp a[1] <= a[2] <= ... <= a[n-1] <= a[n]
*/

#include<bits/stdc++.h>
using namespace std;

void insertsort(int *a, int n)		//sắp xếp dãy a[0].... a[n-1]
{
	for(int i=1; i<n; i++)
	{
		int x=a[i];
		int j;
		for(j=i-1; j >= 0 && a[j] > x; j--) a[j+1]=a[j];
		a[j+1]=x;
	}
}

// viet tiep cac version con lai
void insertsort1(int *F, int *L)
{
	for(int *i=F+1; i<L; i++)
	{
		int *x=i;
		int *j;
		for(j=i-1; j >= 0 && j > x; j--) *(j+1)=*j;
		*(j+1)=*x;
	}
}

template<class T>
void insertsort2(T *F, T *L)
{
	
}

template<class T, class Cmp>
void ss(T *F, T *L, Cmp cmp)
{
	
}

template<class T>
void ss(T *F, T *L)
{
	return ss(F, L, less<T>());
}


int main(){
	int a[]={24,23,14,5,6,2,5,25,62,54,123,512}, n=sizeof(a)/sizeof(a[0]);
	//insertsort(a,n);
	for(auto x:a) cout<<x<<" ";
	insertsort1(a+2,a+6);
	cout<<endl;
	for(auto x:a) cout<<x<<" ";
	return 0;
}
