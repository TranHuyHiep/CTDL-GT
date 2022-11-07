#include<bits/stdc++.h>
using namespace std;

class sv
{
	string ten;
	int diem;
	public:
		sv(string ten="",int diem=0)
		{
			this->ten=ten; this->diem=diem;
		}
		void nhap()
		{
			cin.ignore(0);  //fflush(stdin);
			cout<<"\nNhap sv : ";
			cin>>this->ten>>this->diem;
			if(ten=="chipheo") return this->nhap();
		}
		void xuat(){cout<<setw(10)<<left<<this->ten<<" | "<<this->diem;}
};
int main()
{
	sv a("Le Thi Hoang Hoa",5);
	sv *b=new sv("Hoang Ha",7);
	sv c("Dang Quoc Bao");
	sv d;
	d.nhap();
	d.xuat();
}


