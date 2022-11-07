#include<bits/stdc++.h>
using namespace std;

template<class T>
T *binarysearch(T *L, T *R, T x) 		/// day da sap xep tang dan
{
	T *p=L, *q=R-1;
	while(p<=q)
	{
		T *r = p+(q-p)/2;
		if(*r == x) return r;
		*r > x ? q=r-1 : p=r+1;
	}
	return NULL;
}

//cai dat bang de quy
template<class T>
T *bs(T *L, T *R, T x)		// bs = binary search
{
	if(L > R) return nullptr;		// nullptr = NULL = 0
	T *p = L+(R-L)/2;
	if(*p == x) return p;
	if(x < *p) return bs(L, p, x);
	return bs(p+1, R, x);
}

int main(){
	int a[] = {4,7,12,18,25,36,58,72,90};
	int n=sizeof(a)/sizeof(int);
	//auto p=binarysearch(a,a+n,36);
	auto p = bs(a, a+n, 36);
	if(!p) cout<<"\nKhong co";
	else *p=29;
	for(auto x:a) cout<<x<<" ";
}
