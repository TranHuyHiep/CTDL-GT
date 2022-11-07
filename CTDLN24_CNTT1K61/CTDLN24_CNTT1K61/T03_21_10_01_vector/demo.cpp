#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{
	Vector<int> V(10,1);
	int k=0;
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	V.resize(17,3);
	cout<<"\nVector : "; for(Vector<int>::iterator it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	for(int &x:V) x=++k;
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	auto it=V.begin();
	it=it+5;
	*it=13;
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	V.insert(it,2);
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	it=it+5; //
	*it=0;
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	V.erase(it);
	cout<<"\nVector : "; for(auto x: V) cout<<x<<" ";
	cout<<"\nDao vector : ";
	{
		Vector<int> Z=V;
		for(Vector<int>::reverse_iterator rt=Z.rbegin();rt!=Z.rend();rt++) cout<<*rt<<" ";
	}
	for(auto x:V) cout<<x<<" ";
}


