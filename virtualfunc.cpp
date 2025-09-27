// this shows a basic ezample of virtual functions in C++

#include <iostream> 
#include <string>   
using namespace std;
class Base{
    public:
    virtual void display(){ // virtual function
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
    bptr->display(); // calls the display function of Derived class , because the pointer is of base class type but it is pointing to derived class object
    // this is known as run time polymorphism or dynamic polymorphism
    return 0;
}
// when a base class pointer points to a derived class object and the base class has a virtual function
// then the derived class function is called at run time
// if we dont use virtual function in the base class , then the base class function is called even if the pointer is pointing to derived class object