#include<bits/stdc++.h>
#include"vector.cpp"
#include<vector>
using namespace std;
int main()
{
	Vector<int> V(10,1);
	V[3]=7;
	V[5]=4;
	V[9]=2;
	for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.pop_back();   //bot di phan tu cuoi cung
	Vector<int>::iterator  it;   //khai bao bien it la kieu bo lap dang 1 con tro
	cout<<"\nVector: ";
	for(it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	V.back()=9;
	V.push_back(5);
	cout<<"\nVector: "; for(auto x:V) cout<<x<<" ";
	//V.resize(15,-1);
	cout<<"\nVector: "; for(auto x:V) cout<<x<<" ";
	cout<<"\nDao day : ";
	for(Vector<int>::reverse_iterator ri=V.rbegin();ri!=V.rend();ri++) cout<<*ri<<" ";
	cout<<"\nDung luong chua "<<V.capacity();
	cout<<"\nV[3] = "<<V[3];
	it=V.begin(); it++;it++;  //it = &V[2]
	V.insert(it,8);
	cout<<"\nVector sau khi chen: "; for(auto x:V) cout<<x<<" ";
	it++;						//it=&V[3]
	V.erase(it); //xoa 1 phan tu tai vi tri it tro toi
	cout<<"\nVector sau khi  xoa: "; for(auto x:V) cout<<x<<" ";
//	Vector<int> Z;
//	Z=V;  //toan tu gan
//	cout<<"\nVector Z : ";	for(int x: Z) cout<<x<<" ";
}


