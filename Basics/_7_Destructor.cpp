#include <iostream>
using namespace std;
 
class Hero{

  int health;
  char level;

  public:
  Hero(){
    cout<<"The default constructor is called\n";
  }

  ~Hero(){
    cout<<"The destructor is called\n";
  }
};

int main(){
    Hero h1; 
    //Note: Don't use the syntax - 'Hero h1();'
    //It doesn't creates an object 
    //Instead it creates a fn 'h1' with return type 'Hero'

    Hero* h2 = new Hero;

    //Manual calling of desctructor for dynamically created object
    delete h2;  //If you comment this out, no destructor will be called for h2
}