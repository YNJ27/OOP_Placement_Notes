#include <bits/stdc++.h>
using namespace std;

class Pokemon{
    int health;
    char type;

    public:

    //If no constructor is defined by us(custom), compiler still have a constructor
    //Which is invoked as soon as you create an object

    //But as soon as you define any custom constructor(default or parameterized), the default constructor
    //of compiler disappears or becomes inactive

    //constructer 1
    Pokemon(){                                  //Default type constructor
        cout<<"Constructer is called"<<"\n";
    }

    //Parameterized constructers
    //constructer 2   
    Pokemon(int health){
        // health = health;  .... will not work as intended, because of the rules of variable 
        //                        initialization you are actually trying to store the value of 
        //                        health(parameter) in the same health(parameter)

        //So in such cases,where parameter name and member name is the same,'this' pointer becomes useful
        this -> health = health; 
    }

    //constructer 3
    Pokemon(int health, char type){
        this -> health = health;
        this -> type = type;
    }

    void setHealth(int h){
        health = h;
    }    

    void setType(int t){
        type = t;
    }

    int getHealth(){
        return health;
    }

    char getType(){
        return type;
    }
};

int main(){
    //static allocation
    Pokemon pikachu;    //For 'pikachu' constructor 1 will be called

    cout<<pikachu.getHealth()<<" "<<pikachu.getType()<<"\n";

    Pokemon pikachu1(70);   //For 'pikachu1' constructor 2 will be called
    cout<<pikachu1.getHealth()<<" "<<pikachu1.getType()<<"\n";

    Pokemon pikachu2(80, 'E');  //For 'pikachu2' constructor 3 will be called
    cout<<pikachu2.getHealth()<<" "<<pikachu2.getType()<<"\n";

    //Dynamic instantiation of object
    Pokemon* pikachu3 = new Pokemon;  //For 'pikachu3' constructor 1 will be called
    cout<<(*pikachu3).getHealth()<<" "<<(*pikachu3).getType()<<"\n";
    cout<<pikachu3->getHealth()<<" "<<pikachu3->getType()<<"\n";


    Pokemon* pikachu4 = new Pokemon();  //For 'pikachu4' constructor 1 will be called
    //                      *********
    //Another way to instantiate an object dynamically

    cout<<pikachu4->getHealth()<<" "<<pikachu4->getType()<<"\n";


    Pokemon* pikachu5 = new Pokemon(90, 'E'); //For 'pikachu5' constructor 3 will be called
    cout<<pikachu5->getHealth()<<" "<<pikachu5->getType()<<"\n";

    
    Pokemon pikachu6; //If you now comment out the default(custom) constructor, you will get error.
}