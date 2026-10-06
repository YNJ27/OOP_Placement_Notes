#include <bits/stdc++.h>
using namespace std;

class Base{
    public:
    virtual void show(){
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
    //1) Virtual function ensures that "function overriding" is carried out everytime
    //2) Virtual functions enable function overriding by calling the correct function (or method)
    //   based on the actual type of the object, irrespective of the type of pointer used to call the function.
}