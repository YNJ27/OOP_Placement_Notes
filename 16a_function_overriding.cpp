#include <bits/stdc++.h>
using namespace std;

//Inheritance is cumpolsory for "Function overriding" to happen

class Animal{
    public:
    void speak(){
        cout<<"I am speaking\n";
    }
};

class Dog: public Animal{
    public:
    void speak(){                    //check once with an argument in this child class member fn
        cout<<"I am barking\n";
    }
};

int main(){
    Dog moti;
    moti.speak();
}