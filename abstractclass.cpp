// basic example of an abstract class using shape and circle

#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;
class shape{
    public:
    virtual double area()=0; // pure virtual function
    virtual double perimeter()=0; // pure virtual function
};

class circle: public shape{
    public:
    double radius;

    circle(double r){
        radius=r;
    }

    double area() override{ // overriding the pure virtual function
        return M_PI*radius*radius;
    }

    double perimeter() override{ // overriding the pure virtual function
        return 2*M_PI*radius;
    }
};

int main(){
    circle c1(5.0); // creating an object of circle class
    cout<<"Area of circle: "<<c1.area()<<endl;
    cout<<"Perimeter of circle: "<<c1.perimeter()<<endl;
    return 0;
}
// an abstract class is a class that has at least one pure virtual function
// a pure virtual function is a virtual function that is declared by assigning 0 in its declaration
// an abstract class cannot be instantiated , but it can be used as a base class