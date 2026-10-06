#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    void show(){
        cout<<"Inside Base\n";
    }
};

class Derived: public Base{
    public:
    void show(){                 
        cout<<"Inside Derived\n";
    }
};

int main(){
    Base* bptr;
    Base b;
    bptr = &b;

    cout<<"Base pointer pointing to base class object\n";
    bptr -> show();

    Derived d;
    bptr = &d;
    cout<<"\nBase pointer pointing to derived class object\n";
    bptr -> show();

    //IMP takeaways
    //1) Base type pointer can point to both the base type objects as well as derived type objects
    //2) Even if the Base type pointer points to derived type object, it will execute the methods of base class itself
    //   Violating the function overriding (Due to early binding)
}