#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"I can speak\n";
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Bhau Bhau\n";
    }
};

class Cat:public Animal{
    public:
    void meow(){
        cout<<"Meow Meow\n";
    }
};

int main(){
    Animal a;
    a.speak();

    Dog Moti;
    Moti.speak();
    Moti.bark();

    Cat Sweety;
    Sweety.speak();
    Sweety.meow();
}