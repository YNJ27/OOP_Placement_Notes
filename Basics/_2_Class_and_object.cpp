#include <iostream>
// #include "Pokemon.cpp"  ....thus you can also write the class in some other file and then include it
using namespace std;

class Pokemon{
    int health;
    char type[50]; //In class definition we can't directly use string dtype, it requires some header
                    //files to be included
    char name[50];
};


int main(){
    
    Pokemon pikachu;
    cout<<sizeof(pikachu)<<"\n";

    return 0;
}