//HeapSort 

/*
1. Khái niệm Heap 
	Heap là 1 cây nhị phân được đệ quy như sau:
	- Cây rỗng (NULL) là heap
	- Giá trị ở gốc lớp hơn hoặc bằng mọi giá trị còn lại trên cây
	- Hai cây con cũng là cá heap
2. Biểu diễn heap bằng mảng
	Các phần tử lưu trên mảng a lần lượt từ a[0] đến a[n-1], 
	trong đó a[i] có 2 con liên tiếp là a[2i+1] và a[2i+2];
	và phần tử a[k] có cha là a[(k-1)/2]
3. Vun đống ghép gốc với 2 đống con tạo đống con to hơn
	a. chọn max của 2 con(hoặc 1 con nếu nó chỉ có 1 con)
	b. nếu max này lớn hơn gốc thì đổi chỗ với gốc 
		rồi vun lại tiếp đống con bằng đệ quy
4. Sắp xếp
	Bước 1: Tạo đống con bằng cách đi từ cuối dãy về đầu và vun đần
	từ những đống bé tạo đống to dần, cuối cùng chỉ có 1 đống.
	Bước 2: Sắp xếp 
*/
#include<bits/stdc++.h>
using namespace std;

void heapy(int *a,int n,int k)	//log n
{
	if(2*k+1>=n) return;
	int p=2*k+1;
	if(p+1<n && a[p]<a[p+1]) p++;
	if(a[k]<a[p]) {swap(a[k],a[p]); heapy(a,n,p);}
}
void heap_sort(int *a,int n)	
{
	for(int i=n-1;i>=0;i--) heapy(a,n,i);		//nlogn
	for(int i=n-1;i>0;i--)						//nlogn
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

