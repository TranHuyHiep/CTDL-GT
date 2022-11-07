//cau truc tu tro
#include <bits/stdc++.h>

using namespace std;
struct person
{
	string ten;
	int tuoi;
	person *bo;		//con tro kieu bat ki deu 8 byte
	person *me;		//con tro kieu bat ki deu 8 byte
	person(string t, int d, person *b=NULL, person *m=NULL)
	{
		ten = t;
		tuoi = d;
		bo = b;
		me = m;
	}
};
int main() {
	person A("chipheo", 15), B("Thino",19), C("chuoi", 2, &A, &B);
	cout <<C.ten << "\n" << C.tuoi << "\n" << "ten bo: " << C.bo->ten << " ten me "<< C.me->ten;
    person *D=new person("meo", 100, &C);
    person E("chuot ",12,0, D);
    cout << "\ncu ngoai cua E: " <<E.me->bo->bo->ten;
    return 0;
}

