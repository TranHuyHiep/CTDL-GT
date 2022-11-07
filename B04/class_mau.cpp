#include <bits/stdc++.h>

using namespace std;

template <class Type> //Lop mau mot so thuoc tinh chua xac dinh kieu
class day{
	private:
		int n;
		Type *a;
	public:
		day()
		{
			n=0;
			a=nullptr;
		}
		~day()
		{
			if(!a) delete[]a;	
		}
		void nhap(string ten="")
		{
			cout << "So pt day "<<ten << " : " ; cin >> n;
			a = new Type[n];
			for(int i=0; i<n; i++){
				cout << ten << "["<<i<<"] = ";
				cin >> a[i];
			} 
		}
		void xuat(string ten="", char prompt= ' ')
		{
			cout << ten << "\n";
			for(int i=0; i<n; i++) cout << a[i] << prompt;
		}
};

typedef pair<int,int> ps;
istream &operator >>(istream &is, ps &p)
{
	char c;
	is >> p.first >> c >> p.second;
	return is;
}

ostream &operator <<(ostream &os, ps p)
{
	char c;
	os << p.first << "/" << p.second;
	return os;
}

int main() {
	day<int> A; //A chua cac so nguyen
	day<double> B; //B chua cac so thuc
	A.nhap("A");
	B.nhap("B");
	A.xuat("Day la day A", '\n');
	B.xuat("Day la day B", '\t');
	day<ps> *C = new day<ps>();
	cout << "\n";
	C->nhap("C"); 
	C->xuat("Day C");
	day<bool> D, *p;
	p=&D; p->nhap("D"); p->xuat("Day so nguyen D", '&');
	delete []C;
    return 0;
}

