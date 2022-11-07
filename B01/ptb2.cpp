#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	double a, b, c, denta;
	cin >> a >> b >> c;
	
	if(a == 0){
		if(b==0){
			if(c==0) cout << "vo so nghiem";
			else cout << "vo nghiem";
		}
		else{
			cout << fixed<<setprecision(3) << -c/b;
		}
	}
	else{
		denta = b*b - 4*a*c;
		if(denta < 0) cout << "vo nghiem";
		else if(denta==0){
			cout <<fixed<<setprecision(3)<< -b/2*a;
		}else{
			if((-b-sqrt(denta))/(2*a)<(-b+sqrt(denta))/(2*a)){
				cout <<fixed<<setprecision(3)<<(-b-sqrt(denta))/(2*a) << endl << (-b+sqrt(denta))/(2*a);
			}else{
				cout <<fixed<<setprecision(3)<<(-b+sqrt(denta))/(2*a)<< endl <<(-b-sqrt(denta))/(2*a);
			}
		}
	}
	
    return 0;
}

