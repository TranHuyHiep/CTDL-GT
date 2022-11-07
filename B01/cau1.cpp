#include <bits/stdc++.h>

using namespace std;
typedef struct{
	int size;
	char ben;
}Giay;
void nhap(Giay *&giay, int &n, char tentep[20]){
	ifstream fi;
	fi.open(tentep);
	fi >> n;
	giay = (Giay*)calloc(1000, sizeof(Giay));
	for(int i=1; i<=n; i++){
		fi >> giay[i].size >> giay[i].ben;
	}
	fi.close();
}

void in(int n, Giay *giay){
	cout << "So giay vua nhap la: " << n << endl;
	for(int i=1; i<=n; i++){
		cout << giay[i].size << " " << giay[i].ben << endl;
	}
}

void doi(int n, Giay *giay){
	int dem = 0;
	int trai[1000]={}, phai[1000]={};
	for(int i=1; i<=n; i++){
		if(giay[i].ben == 'T') trai[giay[i].size]++;
		else phai[giay[i].size]++;
	}
	for(int i=1; i<=1000; i++){
		if(trai[i] >= phai[i]) dem+=phai[i];
		else dem+=trai[i];
	}
	cout << "\nSo doi giay ghep duoc la: "<< dem;
}

void lonnhat(int n, Giay *giay){
	int max = 0;
	for(int i=1; i<=n; i++){
		if(giay[i].ben == 'T'){
			if(max < giay[i].size) max = giay[i].size;
		}
	}
	if(max == 0) cout <<"\nKhong co giay chan trai";
	else{
		cout << "\nGiay chan trai co kich thuoc lon nhat la: " << max;
	}
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	Giay *giay;
	int n;
	nhap(giay, n, "giay.txt");
	in(n, giay);
	doi(n, giay);
	lonnhat(n, giay);
    return 0;
}

