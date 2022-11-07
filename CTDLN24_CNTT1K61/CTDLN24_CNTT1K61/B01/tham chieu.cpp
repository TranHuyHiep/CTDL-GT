//bi danh trong C++
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=31,y=73; 
	cout<<"\nDia chi cua x :"<<&x;   //Vi tri o nho x
	cout<<"\nGia tri cua x : "<<x;
	cout<<"\nDia chi cua y :"<<&y;   //Vi tri o nho y 
	cout<<"\nGia tri cua y : "<<y;
	int &z=x;    //z la bi danh cua x tuc la o nho x,z la 1
	cout<<"\nDia chi cua z :"<<&z;
	z=45;
	cout<<"\nGia tri cua x : "<<x;
}


