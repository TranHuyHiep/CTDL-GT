// Merge Sort: Đệ quy chia để trị 

/*
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



void merge_sortv1(int *a, int L, int R, int *b, int *c)		// sắp xếp a[l] ... a[R-1]
{
	if(L >= R-1) return;
	int M = (L + R)/2;		
	merge_sortv1(a,L,M,b,c);
	merge_sortv1(a,M,R,b,c);
	// trộn 2 dãy tăng 
	for(int i=L; i<M; i++) b[i]=a[i];
	for(int j=M; j<R; j++) c[j]=a[j];
	int i=L, j=M;
	for(int k=L; k<R; k++)
	{
		if(i<M and j<R) a[k] = b[i]<c[j] ? b[i++] : c[j++];
		else a[k] = i<M ? b[i++] : c[j++];
	}	
}
void merge_sortv0(int *a, int L, int R)
{
	int *b = new int [R+5];
	int *c = new int [L+5];
	merge_sortv1(a,L,R,b,c);
	delete []b;
	delete []c;
}
template <class T, class Cmp = less<T>>
void merge_sortv2(int *L, T *R, T *b, T *c, Cmp ss)		// sắp xếp a[l] ... a[R-1]
{
	if(L >= R-1) return;
	T *M = L+(R-L)/2;		
	merge_sortv2(L,M,b,c,ss);
	merge_sortv2(M,R,b,c,ss);
	// trộn 2 dãy tăng 
	T *i=b, *j=c;
	for(T *p=M-1; p>=L; p--) *i++=*p;
	for(T *q=R-1; q>=M; q--) *j++=*q;
	i--; j--;
	for(T *k=L; k<R; k++)
	{
		if(i>=b and j>=c) *k = ss(*i,*j) ? *i-- : *j--;
		else *k = i>=M ? *i-- : *j--;
	}	
}
template<class T, class Cmp = less <T>>
void merge_sortv3(T *L, T *R, Cmp ss=less<T>())
{
	int *b = new int [R-L+5];
	int *c = new int [R-L+5];
	merge_sortv2(L,R,b,c,ss);
	delete []b;
	delete []c;
}
int main(){
	int a[]={2,5,6,3,8,8,5,2,5,4};
	int n=sizeof(a)/sizeof(a[0]);
	merge_sortv3(a,a+n);
	for(auto x:a) cout<<x<<" ";
}
