#include<bits/stdc++.h>
using namespace std;
enum sex{NU,NAM};
istream &operator>>(istream &is,sex&s)
{
	string t;
	is>>t;
	s=t=="NU"?NU:NAM;
	return is; 
}
int main()
{
	sex a,b,c;
	cin>>a>>b;
	cout<<(a==NU?"nu":"nam");

}


