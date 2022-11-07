#include <bits/stdc++.h>

using namespace std;
class SV{
	private: 
		string masv;
		string hoten;
		double diem;
	public:
		void xuat();
		void nhap();
		SV(string masv = "", string hoten = "", double diem = 0) :
		masv(masv), hoten(hoten), diem(diem){};
		string getmasv();
};
string SV::getmasv(){
	return masv;
}
void SV::nhap(){
	getline(cin, masv);
	fflush(stdin);
	getline(cin, hoten);
	fflush(stdin);
	cin >> diem;
	fflush(stdin);
}

void SV::xuat() {
	cout << masv << " " << hoten << " " << diem << endl;
}

class Lop{
	private: 
		const int spt; 
		SV *sv;
	public:
		Lop(int t) : spt(t){
			sv = new SV[spt];
		}
		void xuat() const; // ham thanh phan hang
		void nhap() const; // ham thanh phan hang
		void timkiemsv(string masv) const; // ham thanh phan hang
};
void Lop::nhap() const{
	for(int i=0; i<spt; i++){
		cout << "nhap sinh vien thu: " << i+1 << endl;
		sv[i].nhap();
	}
}
void Lop::xuat() const{
	for(int i=0; i<spt; i++){
		sv[i].xuat();
	}
}
void Lop::timkiemsv(string masv) const{
	SV res;
	for(int i=0; i<spt; i++){
		if(sv[i].getmasv() == masv){
			res = sv[i];
			break;
		}
	}
	res.xuat();
}
int main() {
	const Lop l(3); // hang doi tuong
	l.nhap();
	l.xuat();
	l.timkiemsv("002");
	return 0;
}

