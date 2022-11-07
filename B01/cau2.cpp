#include <bits/stdc++.h>

using namespace std;
typedef struct{
	int m, n;
	double **gt;
}Matran;
void nhap(Matran &A, char tentep[20]){
	ifstream fi;
	fi.open(tentep);
	fi >> A.m >> A.n;
	A.gt = new double*[A.m*A.n+1];
	for(int i=1; i<=A.m; i++){
		A.gt[i] = new double[A.n+1];
		for(int j=1; j<=A.n; j++){
			fi >> A.gt[i][j];
		}
	}
	fi.close();
}
void in(Matran A){
	cout << "Ma tran la: " << endl;
	for(int i=1; i<=A.m; i++){
		for(int j=1; j<=A.n; j++){
			cout << A.gt[i][j] << " ";
		}
		cout << endl;
	}
}
void tbc(Matran A, char tentep[20]){
	ofstream fo;
	fo.open(tentep);
	double tbc[A.m+1]={};
	for(int i=1; i<=A.m; i++){
		for(int j=1; j<=A.n; j++){
			tbc[i]+=A.gt[i][j];
		}
		tbc[i]/=A.n;
		fo << "\nTrung binh cong hang "<< i << " la: " << tbc[i];
	}
	fo.close();
}
void am(Matran A){
	int hang=0, cot=0, max=-999999;
	for(int i=1; i<=A.m; i++){
		for(int j=1; j<=A.n; j++){
			if(A.gt[i][j] < 0){
				if(A.gt[i][j] > max){
					max = A.gt[i][j];
				}
			}
		}
	}
	if(max == -999999) cout << "\nKhong co gia tri am nao";
	else {
		cout << "\nGia tri am lon nhat la: " << max;
	}
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	Matran A;
	char tentep[20];
	cout << "Moi nhap ten tep:" <<endl;
	cin >> tentep;
	nhap(A, tentep);
	in(A);
	tbc(A,"hang.txt");
	am(A);
    return 0;
}

