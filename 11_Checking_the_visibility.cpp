#include <bits/stdc++.h>
using namespace std;

class A{
    private:
    int salary;

    protected:
    int age;

    public:
    string name;
};

class B:public A{           //you can change the inheritance type/mode to understand all the cases
    void getSalary(){
        // cout<<salary;     //private data memebers aren't inherited
    }

    void getAge(){
        cout<<age<<"\n";    //protected
    }

    void getName(){
        cout<<name<<"\n";    //public
    }
};

//to illustrate that age became a protected data member in class B
class C:public B{
    void getAge2(){
        cout<<age<<"\n";  //age was protected ,thus is directly accessible in the derived class
    }
};

int main(){
    B b1;
    cout<<b1.name<<"\n";     //public

    // cout<<b1.age<<"\n";   //protected
    // cout<<b1.salary<<"\n";   //not inherited
}