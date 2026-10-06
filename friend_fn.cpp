#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class A; // Forward declaration so B can use A

class B {
private:
    int mtr;

public:
    B(){
        mtr = 2000;
    }

    void add(A obj);  // Declaration of member function
};

class A {
private:
    int km;

public:
    A() {
        km = 0;
    }

    void display() {
        cout << km << "\n";
    }

    friend void editKm(A &);
    friend void B::add(A);  // Now B is already fully declared, so this is valid
};

void B::add(A obj) {
    int km1 = obj.km + mtr * 0.001;
    cout << "km1 = " << km1 << "\n";
}

void editKm(A &obj) {
    obj.km += 5;
}

int main() {
    A a;
    a.display();
    editKm(a);
    a.display();

    B b;
    b.add(a);
}
