#include<bits/stdc++.h>
using namespace std;

template <class T>
class hashtable
{
	vector< list<T> > HT;
	int n, cap;
	hash<T> HF;
	int Hash(T x) {return HF(x)%cap;}
	public:
	hashtable(int _cap=1000)
	{
		cap=_cap;
		n=0;
		HT.resize(cap);
	}
	void insert(T x)
	{
		int k=Hash(x);
		HT[k].push_back(x);
		n++;
	}
	void remove(T x)
	{
		int k=Hash(x);
		auto p = HT[k].begin();
		while(p!=HT[k].end() and *p!=x) p++;
		if(p!=HT[k].end()) {
			HT[k].erase(x);
			n--;
		}
	}
	bool find(T x)
	{
		int k=Hash(x);
		auto p=HT[k].begin();
		while(p!=HT[k].end() and *p!=x) p++;
		return p!=HT[k].end();
	}
	void travel()
	{
		for(int i=0; i<HT.size(); i++)
		{
			cout<<endl<<i<<": ";
			for(auto x:HT[i]) cout<<x<<" ";
		}
	}
};

int main(){
	double a[]={3,4,-2,5,1.7,4.8,5,6,7.2,6.3};
	int n=sizeof(a)/sizeof(a[0]);
	hashtable<double> H(2*n);
	for(auto x:a) H.insert(x);
	H.travel();
}
