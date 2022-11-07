#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ngay,thang,nam, du, ok=0;
    scanf("%d/", &ngay); 
    scanf("%d/", &thang);
    scanf("%d", &nam);
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		if(ngay <= 31) ok=1;
	}else if(thang == 2){
		if(ngay <= 28) ok=1;
		else if(ngay == 29){
			if((nam % 4 == 0 && nam % 100 != 0) || (nam%400==0)) ok=1;
		}
	}else{
		if(ngay <= 30) ok=1;
	}
	
	if(thang >= 12 && thang <= 1){
		ok=1;	
	}
	if(ok) cout << "Ngay hop le";
	else cout << "Ngay khong hop le";
}
