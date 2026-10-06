#include <bits/stdc++.h>
using namespace std;

class Animal{                  //Abstract class
    public:
    string name;

    virtual void speak() = 0;  //pure virtual function (do-nothing function)
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bhau Bhau, I am "<<name<<", Bhau Bhau\n";
    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meow Meow, I am "<<name<<", Meow Meow\n";
    }
};

class Cow:public Animal{
    // No implementation of the pure virtaul fn, so it will also become an abstract class  
};

int main(){

    // Animal a;

    Dog d;
    Cat c;
    // Cow cow;     //Because Cow became an abstract class too

    d.name = "Sheru";
    c.name = "Sweety";

    d.speak();
    c.speak();
}

//Concpets:
//1) Abstract classes are those classes which are purposefully made so that we can derive classes from them
//   They act as a blueprint or common interface for all the derived classes

//2) We cannot instantiate an abstract class directly. But we can create pointer of their type(which can point
//   to its derived classes)

//3) Pure virtual function is a fn which doesn't has its own implementation. Instead it forces the derived
//   classes to provide an implemenetation(i.e. override it)

//5) If a derived class doesn't provide an implementation of the pure virtual fn, 
//   it will become an abstarct class too

//4) An Abstract base class must have atleast one pure virtual fn.