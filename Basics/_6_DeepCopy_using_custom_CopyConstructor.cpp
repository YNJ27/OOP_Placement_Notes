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

  Hero(Hero& h){
    int* temp1 = new int;
    *temp1 = *(h.temp);

    health = h.health;
    level = h.level;
    temp = temp1;
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
  h1.setTemp(27); //Now the value pointed by temp of h2 will remain unaltered

  h1.print();
  h2.print();
}