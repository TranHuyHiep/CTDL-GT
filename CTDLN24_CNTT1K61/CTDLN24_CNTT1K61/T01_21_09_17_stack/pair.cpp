#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> diem;

typedef pair<string,pair<int,int>> sv;
#define ten first
#define tuoi second.first
#define diem second.second

int main()
{
	sv s,v={"thi no",{19,4}};
	s.ten="chi pheo"; s.tuoi=15;s.diem=3;
	cout<<s.ten<<"\t"<<s.tuoi<<"\t"<<s.diem<<"\n";
	cout<<v.ten<<"\t"<<v.tuoi<<"\t"<<v.diem;
}


