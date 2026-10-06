#include <iostream>
using namespace std;

class Hero{

  int health;
  char level;
  
  int *temp;

  public:
  Hero(){
    cout<<"The default constructor is called\n";
  }

  Hero(int h, char l, int x){
    health = h;
    level = l;
    
    temp = new int;
    *temp = x;
  }

  void setTemp(int x){
    *temp = x;
  }

  void print(){
    cout<<"[ health = "<<health<<" , Level = "<<level<<" , temp = "<<*(temp)<<" ]\n";
  }
};

int main(){
  
  Hero h1(80, 'B', 25); 
  h1.print();

  Hero h2(h1);
  h2.print();

  cout<<"\nAfter changing the value at temp\n\n";
  h1.setTemp(27); //Even if you changed the value at temp for h1, it also got ghanged for h2
                  //This is called shallow copy

  h1.print();
  h2.print();

}