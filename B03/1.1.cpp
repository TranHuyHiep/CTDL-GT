#include <bits/stdc++.h>

using namespace std;

class diem{
	private: 
		double x;
		double y;
	public:
		friend istream &operator >>(istream &in, diem &d)
		{
			in >> d.x >> d.y;
			return in;
		}
		friend ostream &operator <<(ostream &out, diem d){
			out << " (" << d.x << ";" << d.y << ")";
			return out;
		}
};

int main() {
	int n;
	cout << "Moi nhap so diem: ";
	cin >> n;
	diem *d;
	d=new diem[n+5];
	for(int i=0; i<n ;i++){
		cout << "\na" << i+1 << ": ";
		cin >> d[i];
	}
	cout << "\nCac diem vua nhap la: ";
	for(int i=0; i<n; i++){
		cout << d[i];
	}
    return 0;
}

