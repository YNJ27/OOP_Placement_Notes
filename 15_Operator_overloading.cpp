#include <bits/stdc++.h>
using namespace std;

class Test{
    public:
    int a;

    //For binary operators we need single argument

    int operator +(Test obj){        //+ performing subtraction
        int result = a - obj.a;
        return result;
    }

    int operator +(int);        //here we performed function overloading along with operator overloading

    //For unary operators we don't need any argument
    void operator ++(){
        a++;
    }
};


int Test::operator +(int b){         //+ performing multiplication
        int result = this -> a * b;
//                   ****
//      using "this pointer" is just a good practice

        return result;
}

int main(){
    Test t1, t2;
    t1.a = 4;
    t2.a = 2;

    //For binary operator, always the current object will be to the left of the operator
    int diff = t1 + t2;
    cout<<"diff: "<<diff<<"\n";

    int mul = t1 + t2.a;
    cout<<"mul: "<<mul<<"\n";

    //For unary operator, always the current object will be to the right of the operator, and we don't need any 
    cout<<"\nIntial value of 'a' of object t1: "<<t1.a<<"\n";
    ++t1;
    cout<<"Updated value of 'a' of object t1: "<<t1.a<<"\n";
}