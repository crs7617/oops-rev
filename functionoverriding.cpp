//this an exampe of function overriding under run time polymorphism

#include <iostream>
#include <string>
using namespace std;
class Base{
    public:
    void display(){
        cout<<"This is the display function of Base class"<<endl;
    }
};
class Derived: public Base{
    public:
    void display(){ // overriding the display function of Base class
        cout<<"This is the display function of Derived class"<<endl;
    }
};

int main(){
    Base b;
    Derived d;
    Base* bptr; // base class pointer
    bptr = &b;  // pointing to base class object
    bptr->display(); // calls the display function of Base class

    bptr = &d; // pointing to derived class object
    bptr->display(); // calls the display function of Base class , because the pointer is of base class type
    // to achieve run time polymorphism , we need to use virtual function
    return 0;
}
