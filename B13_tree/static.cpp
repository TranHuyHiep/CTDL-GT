#include<bits/stdc++.h>
using namespace std;
class Class{
public:
    static int Static;
    int NonStatic;
    void in() {
        cout<<"Static= "<<++Static<<", NonStatic= "<<NonStatic<<endl;
    }
};
int Class::Static=0;
int main() {
    Class a1, a2;
    a1.NonStatic=10;
    a2.NonStatic=20;
    a1.in();
    a1.in();
    a1.in();
   	a2.in();
   	a2.in();
   	a2.in();
}