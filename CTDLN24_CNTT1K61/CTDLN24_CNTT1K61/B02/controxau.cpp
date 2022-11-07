#include<bits/stdc++.h>
using namespace std;

int find(char s[],char c)
{
	char *p=s;
	while(*p && *p!=c) p++;
	return p-s;	
}
int main()
{
	char x[]="mot hom dep troi toi di ra duong bi phat 2 trieu";
	cout<<find(x,'p')<<"\n";
	cout<<find(x,'z')<<"\n";
	cout<<find(x,'r')<<"\n";
}


