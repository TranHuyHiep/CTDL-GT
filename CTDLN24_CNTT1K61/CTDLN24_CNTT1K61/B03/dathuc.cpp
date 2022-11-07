//ham huy can phai viet khi co cap phat bo nho dong
#include<bits/stdc++.h>
using namespace std;

class dt
{
	int n;
	double *a;
	public:
		dt() {n=0; a=NULL;  cout<<"\nGoi ham tao khong doi";}
		dt(int c) {n=0; a=new double [c+5]; cout<<"\nGoi ham tao co doi";}
		~dt()
		{
			if(a!=NULL) delete []a;
			cout<<"\nGoi ham huy";
		}
};

int main()
{
	dt P; //n=0,a=NULL
	dt Q(30); //n=0 a=new double [35]
	dt *R=new dt(1000);
	delete R;
}


