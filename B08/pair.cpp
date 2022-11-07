#include <bits/stdc++.h>

using namespace std;
typedef pair<double,double> diem;

typedef pair<string,pair<int,int>> sv;
#define ten first
#define tuoi second.first
#define diem second.second
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	sv s, v={"thi no", {19,4}};
	s.ten = "chipheo";
	s.tuoi = 15;
	s.diem=3;
	cout << v.ten << endl << v.tuoi << endl << v.diem;
    return 0;
}

