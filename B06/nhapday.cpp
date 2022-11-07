#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[7], n=7;
    for(int i=0; i<n; i++) printf("a[%d] = ", i), scanf("%d",a+i);
    for(auto x:a) cout << x << " ";
    return 0;
}

