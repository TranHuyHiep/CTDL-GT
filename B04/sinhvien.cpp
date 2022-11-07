#include <bits/stdc++.h>

using namespace std;

class sv
{
	private:
		string ten;	//this->ten
		int diem;
	public:
		sv(string ten="", int diem=0)
		{
			this->ten = ten;
			this->diem = diem;
		}
		void nhap()
		{
			//cin.ignore(0); //fflush(stdin)
			cin >> this->ten >> this->diem;
			if(ten=="chipheo") return nhap();
		}
		void xuat(){
			cout << setw(10) << fixed << this->ten << " | " << this->diem;
		}
};
int main() {
//	sv a("Nguyen Van A",5);
//	sv *b=new sv("Nguyen Van B", 7);
//	sv c("Nguyen Van Thuong");
//	sv d;
	sv a;
	a.nhap();
	a.xuat();
    return 0;
}

