//Nhap ban kinh a,b cua elip tinh dien tich
#include<bits/stdc++.h>
//using namespace std;
int main()
{
	double a,b;
	std::cout<<"Nhap ban kinh elip : ";
	std::cin>>a>>b;
	//printf("%8.3lf",a*b*M_PI);
	std::cout<<std::setw(18)<<std::setprecision(5)<<std::fixed;
	std::cout<<a*b*M_PI; //acos(-1);
	std::cout<<"\n"<<3.14159265389;

}


