#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void func(){
        cout<<"I am in A\n";
    }
};

class B{
    public:
    void func(){
        cout<<"I am in B\n";
    }
};

class C:public A, public B{
};

int main(){
    C c;
    // c.func();

    c.A::func();
    c.B::func();
}