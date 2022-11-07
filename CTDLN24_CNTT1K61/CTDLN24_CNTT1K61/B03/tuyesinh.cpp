#include<bits/stdc++.h>
using namespace std;
class thisinh
{
	string ten;
	double toan,ly,hoa;
	public:
		friend istream &operator>>(istream &is,thisinh &t)
		{
			is.ignore(1); //tuong duong fflush(stdin)
			getline(is,t.ten);
			is>>t.toan>>t.ly>>t.hoa;
			return is;
		}
		friend ostream &operator<<(ostream &os,thisinh t)
		{
			os<<setw(25)<<left<<t.ten<<" | ";
			os<<setw(5)<<t.toan<<" | "<<setw(5)<<t.ly<<" | "<<setw(5)<<t.hoa<<endl;
			return os;
		}
};

class tuyensinh
{
	int num;
	thisinh *ts;
	public:
		tuyensinh(string fname)
		{
			//fstream fin; fin.open(fname,ios::in);  //mo file de doc du lieu C++98 tro di;
			isftream fin(fname);  //mofile C++11;
			fin>>num;
			ts=new thisinh[num];
			for(int i=0;i<num;i++)
			{
				fin>>ts[i];	
			}
			fin.close();		
		}
		void xuat()
		{
			cout<<"danh sach sv\n";
			for(int i=0;i<num;i++) cout<<ts[i];
		}
		~tuyensinh() {if(ts) delete []ts;}
};
int main()
{
	tuyensinh T("ts.txt");
	T.xuat();
}


