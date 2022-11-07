#include <bits/stdc++.h>

using namespace std;
class diem{
	private:
		double xa, ya;
		double xb, yb;
	public:
		friend istream &operator >>(istream &in, diem &d)
		{
			in >> d.xa >> d.ya >> d.xb >> d.yb;
			return in;	
		}
		friend ostream &operator <<(ostream &out, diem d)
		{
			out << " (" << d.xa << "," << d.ya << ") (" << d.xb << "," << d.yb <<") ";
			return out;	
		}	
		void dodai(){
			cout << "Do dai cua doan thang la: " << sqrt(pow(xa-xb,2) + pow(ya-yb,2));
		}
};
int main() {
	diem d;
	cout << "Moi nhap 2 diem A B:\n";
	cin >> d;
	d.dodai();
	cout << d;
    return 0;
}

