#include<bits/stdc++.h>
#include "dlist.cpp"
using namespace std;
bool ss(int u,int v) {return u>v;}
int main()
{
	dlist<int> L(5,3);
	cout<<"\ndlist : "; for(dlist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	L.front()=2;
	L.back()=8;
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	L.pop_back(); L.push_back(7);
	L.pop_front(); L.push_front(1);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	//cout<<"\ndlist dao : "; for(dlist<int>::reverse_iterator it=L.rbegin();it!=L.rend();it++) cout<<*it<<" ";
	
	L.insert(L.begin(),6);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	dlist<int>::iterator it=L.find(3);
	if(it==L.end()) cout<<"\nKhong co so 3 danh dach";
	else L.insert(it,5);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	it=L.find(6);	L.erase(it);
	it=L.find(3);	L.erase(it);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	L.push_back(4);
	L.push_back(2);
	L.push_back(5);
	L.push_front(8);
	L.push_front(2);
	L.push_front(7);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
//	L.sort([](int x,int y){return x<y;});
	L.sort(ss);
	cout<<"\ndlist : "; for(auto x:L) cout<<x<<" ";
	
	//cout<<"\nxuat : "; while(L.size()) {cout<<L.front()<<" "; L.pop_front();}
	
}


