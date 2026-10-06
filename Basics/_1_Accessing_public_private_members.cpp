#include <iostream>
using namespace std;

class Pokemon{
    private:
    char type;

    public:
    int health;

    char getType(){             //Getter - used to fetch the value of private member
        return type;
    }

    void setType(char t){             //Setter - used to modify the data of private member

                                //practically it can be used with some password so that only specific
                                //people can modify the private members 
        type = t;
    }
};

int main(){
    Pokemon pikachu;
    
    //printing values of data members(Public)
    cout<<"health: "<<pikachu.health<<"\n"; //Currently both of these will be holding garbage

    //Modifying values of data members(Public)
    pikachu.health = 100;
    cout<<"new health: "<<pikachu.health<<"\n";

    //Accessing Private members using getter setter
    cout<<"Type: "<<pikachu.getType()<<"\n";

    pikachu.setType('E');
    cout<<"New Type: "<<pikachu.getType()<<"\n";
}