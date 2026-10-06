#include <iostream>
using namespace std;

//Ambiguity in hybrid inheritance

class A{               //Super base class
    public:
        char val;
};

class B: virtual public A{  //Intermediate class 1
    public:
        B(){
            val = 'B';
        }   
};

class C: virtual public A{  //Intermediate class 2
    public:
        C(){
            val = 'C';
        }
};

class D: public B, public C{ // It will only take the value of the right most base class(here Intermediate class), 
                             //if carried out virtual inheritance from super-base class
};

int main(){
    D d1;
    cout<<"val: "<<d1.B::val;   //Even if you are trying to get the value of B, 
                                //it will take the value from 'C'(rightmost) only          
}

//Watch video of simple snippets for better understanding