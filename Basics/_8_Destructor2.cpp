#include <iostream>
using namespace std;

class Hero{

  public:
  int health;
  char level;
  
  int *temp;

  Hero(){
    cout<<"The default constructor is called\n";
  }

  Hero(int h, char l, int x){
    health = h;
    level = l;
    
    temp = new int;
    *temp = x;
  }

  ~Hero(){
    cout<<"Destructor is called\n";
    delete temp;  //If you comment this out then temp will still hold a valid address,
                  //And the value at temp will not be deleted even if the destructor for
                  //that object is called
  }
};

int main(){
  int *temp1;
  {
    Hero h1(50, 'A', 3); 

    temp1 = h1.temp;
  }

  cout<<*temp1<<"\n";
}