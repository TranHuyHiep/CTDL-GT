#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{
	Vector<int> V(5,7);
	cout<<"\nVector: ";for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.push_back(8);
	V[3]=4;
	V.front()=2;
	cout<<"\nVector: ";for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.push_back(3);
	cout<<"\nVector: ";
	//for(Vector<int>::iterator it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	for(auto v:V) cout<<v<<" ";
	cout<<"\nVector dao : ";
	for(Vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++) cout<<*it<<" ";
	Vector<int> Z,T;
	Z=V;
	cout<<"\nVector Z : "; for(auto x:Z) cout<<x<<" ";
}


