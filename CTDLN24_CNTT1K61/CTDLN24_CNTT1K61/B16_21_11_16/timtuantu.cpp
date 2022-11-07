#include<bits/stdc++.h>
using namespace std;
template<class T>
T *find(T *L,T *R,T x)
{
	for(T *p=L;p<R;p++) if(*p==x) return p;
	return NULL;
}
int main()
{
	double a[]={4.7,2.8,1.6,9.3,3.5,1.8,4,6.2};
	int n=sizeof(a)/sizeof(a[0]);
	vector<double> b(a,a+n);
	double *p=find(a,a+n,1.6);
	if(p==NULL) cout<<"Khong tim thay ";
	else *p=8.2345;
	for(auto x:a) cout<<x<<"  ";
	auto q=find(b.begin(),b.end(),3.5);
	if(q!=b.end()) cout<<"\nco ";
	else cout<<"\nkhong co ";
}


