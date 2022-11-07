// sắp xếp chọn - select sort 
// độ phức tạp: O(n^2)
// input: a1, a2,.., an; output: a1 <= a2 <=...<= an
/*
Ý tưởng:
Bước 1: tìm phần tử nhỏ nhất trong dãy a1 .... an và đổi chỗ với a1 để đưa phần tử nhỏ nhất về vị trí số 1
Bươc 2: tìm phần tử nhỏ nhất trong dãy a2......an và đổi chỗ với a2 để đưa phần tủ nhỏ thứ nhì về vị trí số 2
.....
Bước i: tìm phần tử nhỏ nhất trong dãy ai......an và đổi chỗ với ai để đưa phần tử nhỏ thứ i về vị trí thứ i
.....
Bước n-1: Tìm phần thử nhỏ nhất trong dãy 2 phần tử a(n-1).....an và đổi chỗ với a(n-1) để đưu phần tử nhỏ thứ n-1 về vị trí thứ n-1 và còn lại là phần tử lớn nhất
*/
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int *a, int n) 	//sap xep a[0] den a[n-1]{
{
	for(int i=0; i<n; i++)
	{
		int temp=i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j] < a[temp]) temp=j;	
		}	
		if(temp != i) swap(a[i], a[temp]);
	}	
}

void SelectSort(int *F, int *L) 	//sap xep tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F; i<L; i++)
	{
		int *temp=i;
		for(int *j=i+1; j<L; j++)
		{
			if(*j < *temp) temp=j;		
		}	
		if(temp != i) swap(*i, *temp);	
	}	
}

template<class T>
void Select_Sort(T *F, T *L) 	//sap xep tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F; i<L; i++)
	{
		int *temp=i;
		for(int *j=i+1; j<L; j++)
		{
			if(*j < *temp) temp=j;	
		}	
		if(temp != i) swap(*i, *temp);		
	}	
}

template<class T, class Cmp>
void ss(T *F, T *L, Cmp cmp) 	//sap xep tu vi tri con tro F toi truoc con tro L
{
	for(int *i=F; i<L; i++)
	{
		int *temp=i;
		for(int *j=i+1; j<L; j++)
		{
			if(*j < *temp) temp=j;	
		}	
		if(temp != i) swap(*i, *temp);		
	}	
}

template<class T>
void ss(T *F, T *L) {return ss(F, L, less<T>());}

int main(){
	int a[]={24,23,14,5,6,2,5,25,62,54,123,512}, n=sizeof(a)/sizeof(a[0]);
	//SelectionSort(a, n);
	ss(a,a+n, less<int>());
	for(auto i:a) cout<<i<<" ";
	return 0;
}
