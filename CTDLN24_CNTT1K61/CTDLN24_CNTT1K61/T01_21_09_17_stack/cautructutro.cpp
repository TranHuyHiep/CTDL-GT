//cau truc tu tro
#include<bits/stdc++.h>
using namespace std;

struct person
{
	string ten;
	int tuoi;
	person *bo,*me;  //con tro kieu bat ky deu 8 byte
	person(string t,int d,person *b=0,person*m=0)
	{
		ten=t; tuoi=d;
		bo=b;me=m;
	}
};
int main()
{
	person A("chipheo",15),B("thino",19),C("chuoi",2,&A,&B);
	cout<<C.ten<<"\n"<<C.tuoi<<"\n"<<"ten bo: "<<C.bo->ten<<" ten me : "<<C.me->ten;
	person *D=new person("meo",100,&C);
	person E("Chuot",12,0,D);
	cout<<"\ncu ngoai cua E : "<<E.me->bo->bo->ten;
}


