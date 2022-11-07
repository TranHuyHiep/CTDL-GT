#include<bits/stdc++.h>
using namespace std;

class diem
{
	double x,y;
	public:
	friend istream &operator>>(istream &is,diem &P)
	{
		is>>P.x>>P.y;
		return is;
	}
	double kc(diem P)
	{
		return sqrt((P.x-x)*(P.x-x)+(P.y-y)*(P.y-y));
	}
	double dinhthuc(diem P)
	{
		return x*P.y-y*P.x;
	}
};
class tamgiac
{
	//private : 
		diem A,B,C;
	public: 
	friend istream &operator>>(istream &is,tamgiac &P)
	{
//			cout<<"Nhap toa do A: "; cin>>A;  //A.x>>A.y;
//		cout<<"Nhap toa do B: "; cin>>B;  //B.x>>B.y;
//		cout<<"Nhap toa do C: "; cin>>C;   //C.x>>C.y;
		is>>P.A>>P.B>>P.C; return is;
	}
	double cv();
	double dt()
	{
		return abs(A.dinhthuc(B)+B.dinhthuc(C)+C.dinhthuc(A))/2;
	}
};
double tamgiac::cv()
{
	return A.kc(B)+B.kc(C)+C.kc(A);	
}

int main()
{
//	diem A,M,N; A.x=A.y=0; M.x=3;M.y=4; N.x=2;N.y=6;
//	cout<<"Khoang cach AM "<<A.kc(M);
	tamgiac T;
//	T.nhap();
	cout<<"Nhap 3 dinh tam giac "; cin>>T;
	cout<<"Chu vi tam giac "<<T.cv();
	cout<<"\nDien tich "<<T.dt();
}


