#include <iostream>
using namespace std;

class Hero{

  int health;
  char level;

  public:
  Hero(){
    cout<<"The default constructor is called\n";
  }

  Hero(int h, char l){
    health = h;
    level = l;
  }

  void print(){
    cout<<"[ health = "<<health<<" , Level = "<<level<<" ]\n";
  }
};

int main(){
    Hero h1(80,'B'); 
    h1.print();

    Hero h2(h1);
    h2.print();
}