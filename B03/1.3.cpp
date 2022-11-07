#include <bits/stdc++.h>
enum sex{NU,NAM};
using namespace std;
class sinhvien{
	private:
		string sbd, hoten;
		int namsinh;
		sex s;
		float toan, ly, hoa, tong;
	public:
		friend istream &operator >>(istream &in, sinhvien &sv)
		{
			int gioitinh;
			cout << "\nSBD: "; in >> sv.sbd;
			fflush(stdin);
			cout << "\nHo ten: "; getline(in, sv.hoten);
			cout << "\nGioi tinh (NU:0, NAM:1): "; in >> gioitinh;
			if(gioitinh == 0) sv.s = NU;
			else sv.s=NAM;
			cout << "\nDiem toan: "; in >> sv.toan;
			cout << "\nDiem ly: "; in >> sv.ly;
			cout << "\nDiem hoa: "; in >>sv.hoa;
			sv.tong = sv.toan+sv.ly+sv.hoa;
			return in;
		}
		friend ostream &operator <<(ostream &out, sinhvien sv)
		{
			out << "\n";
			out << fixed << setw(20) << sv.sbd << "|";
			out << fixed << setw(20) << sv.hoten << "|";
			out << fixed << setw(10)  << sv.s << "|";
			out << fixed << setw(5) << setprecision(2) << sv.toan << "|";
			out << fixed << setw(5) << setprecision(2) << sv.ly << "|";
			out << fixed << setw(5) << setprecision(2) << sv.hoa << "|";
			out << fixed << setw(5) << setprecision(2) << sv.tong << "|";
			return out;
		}
};
		
int main() {
	int n;
	cout << "Moi nhap so sinh vien: ";
	cin >> n;
	sinhvien *sv;
	sv = new sinhvien[n+5];
	for(int i=0; i<n; i++){
		cin >> sv[i];
	}
	cout << "\nDanh sach sinh vien: \n";
	for(int i=0; i<n; i++){
		cout << sv[i];
	}
    return 0;
}

