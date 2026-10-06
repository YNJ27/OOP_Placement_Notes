#include <iostream>
using namespace std;

class Hero{

  public:

  int health;
  char level;
  static int timeToComplete;

  static void random(){
    // cout<<health<<"\n"; //.............(It can only access static data members) 
    // cout<<this->level<<"\n"; //........(It can't use 'this' pointer)

    cout<<timeToComplete<<"\n";
  }

};

int Hero::timeToComplete = 10;  //Initialization of static data members is compulsory
 
int main(){
    cout<<Hero::timeToComplete<<"\n";

    Hero h1;
    Hero h2;
    h2.timeToComplete = 15;        //Though allowed, but it is 
                                   //not recommended to use objects to access static data members

    cout<<h1.timeToComplete<<"\n"; //Both the values will be 15, because static members are
    cout<<h2.timeToComplete<<"\n"; //shared between all the objects

    Hero::random();

    return 0;
}