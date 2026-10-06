#include <bits/stdc++.h>
using namespace std;

class Mother{
    public:
    void talkative(){
        cout<<"I like to do Panchayti\n";
    }
};

class Father{
    public:
    void bhulakad(){
        cout<<"I forget almost everything\n";
    }
};

class Son:public Mother, public Father{  //Multiple inheritance

};

int main(){
    Son s1;
    s1.talkative();
    s1.bhulakad();
}