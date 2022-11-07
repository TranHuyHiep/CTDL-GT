#include<bits/stdc++.h>
using namespace std;

class abc
{
	int x,y;
	public:
		istream &operator>>(istream &is)
		{
			is>>x>>y;
			return is;
		}
};
int main()
{
	abc A;
	A.>>();

}


