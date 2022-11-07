#include<bits/stdc++.h>
#include"Vector.cpp"
using namespace std;
int main(){
	Vector<int> V(5,1);
	int k=0;
	cout << "\nVector: ";
	for(auto x:V) cout << x << " ";
	V.resize(17,3);
	for(int &x:V) x=++k;
	cout << "\nVector: ";
	for(Vector<int>::iterator it=V.begin(); it!=V.end();it++) cout<<*it<<" ";
	auto it=V.begin();
	it=it+5;
	*it=13;
	cout << "\nVector: ";
	for(auto x:V) cout << x << " ";
	V.insert(it, 2);
	cout << "\nVector: ";
	for(auto x:V) cout << x << " ";
	it=it+5;
	*it=0;
	cout << "\nVector: ";
	for(auto x:V) cout << x << " ";
	V.erase(it);
	cout << "\nVector: ";
	for(auto x:V) cout << x << " ";
	cout << "\nDao vecvtor: ";
	//for(auto rt=Vector<int>::reverse_iterator rt=V.rbegin(); rt!=V.end();rt++)
	//	cout << rt << " ";
	Vector<int> Z;Z=V;
	for(auto x:Z) cout << x << " ";
}
