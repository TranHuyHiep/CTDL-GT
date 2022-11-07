#include <bits/stdc++.h>

using namespace std;
class sinhvien{
	private:
		string ten;
		int tuoi;
		double diem;
	public:
		friend istream &operator >>(istream &is, sinhvien &sv)
		{
			cout << "\nHo va ten: "; cin.ignore(); getline(is, sv.ten);
			cout << "Tuoi: "; is >> sv.tuoi;
			cout << "Diem: "; is >> sv.diem;
			return is;
		}
		friend ostream &operator <<(ostream &out, sinhvien sv)
		{
			out <<fixed<< setw(15)<< sv.ten << " | ";
			out <<fixed<< setw(5)<< sv.tuoi << " | ";
			out <<fixed<< setw(5) << setprecision(2) << sv.diem << endl;
			return out;
		}
		int getage();
		float getdiem();
		friend bool operator >(sinhvien a, sinhvien b);
		friend bool operator <(sinhvien a, sinhvien b);
};
int sinhvien::getage(){
	return tuoi;
}
float sinhvien::getdiem(){
	return diem;
} 
bool operator >(sinhvien a, sinhvien b){
	return a.diem>b.diem;
}
bool operator <(sinhvien a, sinhvien b){
	return a.tuoi<b.tuoi;
}
class Lop{
	private:
		int soluong;
		sinhvien *sv;
	public:
		void nhap()
		{
			cout << "Moi nhap so luong sinh vien: "; cin >> this->soluong;
			cout << "Nhap thong tin cac sinh vien:";
			sv = new sinhvien[this->soluong+5];
			for(int i=0; i<this->soluong; i++){
				cin >> this->sv[i];
			}
		}
		void xuat(char ten[]="")
		{
			cout << "\nThong tin cac sinh vien " << ten << " : \n";
			for(int i=0; i<this->soluong; i++){
				cout << this->sv[i];
			}
		}
		float diemtb(int age);
		void indiemtb();
		void diemtang();
		void tuoigiam();	
};

float Lop::diemtb(int age){
	float tb=0;
	int dem=0;
	for(int i=0; i<soluong; i++){
		if(sv[i].getage() == age){
			tb+=sv[i].getdiem();
			dem++;
		}
	}
	if(dem==0) return 0;
	return tb/dem;
}
void Lop::indiemtb(){
	cout << "\nDiem trung binh theo tung tuoi co trong danh sach: ";
	for(int i=1; i<=100; i++){
		if(diemtb(i) !=0) cout << "\nDiem trung binh cua "<< i << " tuoi la: " << diemtb(i);
	}
}
void Lop::diemtang(){
	for(int i=0; i<soluong; i++){
		for(int j=i+1; j<soluong; j++){
			if(sv[i] > sv[j]) swap(sv[i],sv[j]);
		}
	}
}
void Lop::tuoigiam(){
	for(int i=0; i<soluong; i++){
		for(int j=i+1; j<soluong; j++){
			if(sv[i] < sv[j]) swap(sv[i],sv[j]);
		}
	}
}
int main() {
	Lop cntt1;
	int age;
	cntt1.nhap();
	cntt1.xuat("vua nhap");
	cntt1.diemtb(age);
	cntt1.indiemtb();
	cntt1.diemtang();
	cntt1.xuat("diem tang");
	cntt1.tuoigiam();
	cntt1.xuat("tuoi giam");
    return 0;
}

