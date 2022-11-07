#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
int main()
{	
	Queue<int> Q;
	for(int x:{3,7,2,1,5}) Q.push(x);
	Q.push(8);
	Q.front()=4;
	Q.back()=6;
	while(!Q.empty()) {cout<<Q.front()<<" "; Q.pop();}
}


