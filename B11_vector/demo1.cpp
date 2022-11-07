#include <bits/stdc++.h>
#include "Vector.cpp"
using namespace std;

int main() {
	Vector<int> V(5,7);
	cout << "\nvector: ";
	for(int i=0; i<V.size(); i++) cout << V[i];
	V.push_back(8);
	V.front()=2;
	cout << "\nvector: ";
	for(int i=0; i<V.size(); i++) cout << V[i];	
	V.push_back(3);
	cout << "\nVector: ";
	for(Vector<int>::iterator it=V.begin(); it!=V.end(); it++)
		cout << *it << " ";
	cout << "\nVector: ";
    for(auto v:V) cout << v << " ";
    cout << "\nVector dao: ";
    for(Vector<int>::reverse_iterator it=V.rbegin(); it!=V.rend(); it++) cout << *it <<" ";
	Vector<int> Z=V;
	cout << "\nVector: "; for(auto x:Z) cout<<x<<" ";
	return 0;
}

