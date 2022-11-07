#include <bits/stdc++.h>

using namespace std;
void xuat(string x)
{
	cout << x << " ";
}

int main() {
	string a[]= {"ha noi","ha tay","ha bac","ha dong","ha nam","hoa binh"};
	vector<string> V(a+2,a+5);
	cout << "\nVector: ";for(auto v:V) cout << v << " ";
	V.resize(8,"ha");
	cout << "\nVector: ";for(auto v:V) cout << v << " ";
	vector<string> Z(V.begin(), V.end());	//Z=V
	cout << "\nVector: ";for(auto it=Z.begin(); it!=Z.end(); it++) cout << *it << " ";
    cout << "\nXuat: ";
	for_each(Z.begin(),Z.end(),xuat);
	return 0;
}

