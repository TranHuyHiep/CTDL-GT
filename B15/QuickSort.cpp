// thuật toán Quicksort

/*
- xấu nhất O(N^2)
- nhanh nhất O(NlogN) 
Thuật toán chia để trị (Divide and Conquer -DAC)
Tổng quát bài toán sắp xếp:

sắp xếp a[L] ... a[R-1] tăng dần thực hiện theo chia để chị gồm 3 bước
1. Chia: 
- Chọn một phần tử bất kì trong dãy làm phần tử chốt
- Phân hoạch các phần tử bé hơn phần tử chốt sang bên trái và lớn hơn phần tử chốt sang bên phải
2. Trị:
- Gọi đệ quy sắp xếp nửa bên trái
- Gọi đệ quy sắp xếp nửa bên phải	
3. Liên kết: do nothing
*/
#include<bits/stdc++.h>
using namespace std;

void quicksort(int *a, int L, int R)		// sawp xep a[L].....a[R-1]
{
	if(L>=R-1) return;
	int x=a[(L+R-1)/2];
	int i=L, j=R-1;
	while(i<=j)
	{
		while(i<=j && a[i]<x) i++;
		while(i<=j && x<a[j]) j--;
		if(i<j) swap(a[i],a[j]);
		i++;
		j--;
	}
	quicksort(a,L,j+1);
	quicksort(a,i,R);
//	if(L >= R-1) return;
//	swap(a[L], a[(L+R-1)/2]);
//	int i=L;
//	for(int j=L+1; j<R; j++)
//	if(a[j]<a[L]) {
//		i++;
//		swap(a[i], a[j]);
//	}
//	swap(a[L], a[i]);
//	quicksort(a,L,i-1);
//	quicksort(a,i+1,R);
}
void QuickSort1(int *L, int *R)
{
	if(L>=R-1) return;
	int x=*(L+(R-1-L)/2);
	int *i=L, *j=R-1;
	while(i<=j)
	{
		while(i<=j && *i<x) i++;
		while(i<=j && x<*j) j--;
		if(i<j) swap(*i,*j);
		i++;
		j--;
	}
	QuickSort1(L,j+1);
	QuickSort1(i,R);
}
template<class T>
void QuickSort2(T *L, T *R)
{
	if(L>=R-1) return;
	T x=*(L+(R-1-L)/2);
	T *i=L, *j=R-1;
	while(i<=j)
	{
		while(i<=j && *i<x) i++;
		while(i<=j && x<*j) j--;
		if(i<j) swap(*i,*j);
		i++;
		j--;
	}
	QuickSort2(L,j+1);
	QuickSort2(i,R);
}
template<class T, class Cmp = less<T>>
void QuickSort3(T *L, T *R, Cmp ss=less<T>())
{
	if(L>=R-1) return;
	T x=*(L+(R-1-L)/2);
	T *i=L, *j=R-1;
	while(i<=j)
	{
		while(i<=j && ss(*i,x)) i++;
		while(i<=j && ss(x,*j)) j--;
		if(i<j) swap(*i,*j);
		i++;
		j--;
	}
	QuickSort3(L,j+1,ss);
	QuickSort3(i,R,ss);
}
int main(){
	int a[]={2,5,6,3,8,8,5,2,5,4};
	int n=sizeof(a)/sizeof(a[0]);
	QuickSort3(a,a+n,greater<double>());
	for(auto x:a) cout<<x<<" ";
	return 0;
}
