// this example of compile time polymorphism is also known as static polymorphism covers function overloading and constructor overloading 

#include <iostream>
using namespace std;
class MathOperation{
    public:
    // Function to add two integers
    int add(int a, int b){
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c){
        return a + b + c;
    }

    // Function to add two double values
    double add(double a, double b){
        return a + b;
    }
};

int main(){
    MathOperation mo;
    cout << "Sum of 2 and 3: " << mo.add(2, 3) << endl; // Calls the first add function
    cout << "Sum of 2, 3 and 4: " << mo.add(2, 3, 4) << endl; // Calls the second add function
    cout << "Sum of 2.5 and 3.5: " << mo.add(2.5, 3.5) << endl; // Calls the third add function
    return 0;
}
// here the function add is overloaded with different number of parameters and different types of parameters
// the function to be called is determined at compile time based on the arguments passed to the function
// this is known as compile time polymorphism or static polymorphism
// similarly , constructor overloading is also an example of compile time polymorphism
#include <iostream>
using namespace std;
class Box{
    public:
    double length;
    double breadth;
    double height;

    // Default constructor
    Box(){
        length = 1.0;
        breadth = 1.0;
        height = 1.0;
    }

    // Parameterized constructor
    Box(double l, double b, double h){
        length = l;
        breadth = b;
        height = h;
    }

    // Function to calculate volume
    double volume(){
        return length * breadth * height;
    }
};

int main(){
    Box box1; // Calls default constructor
    Box box2(2.0, 3.0, 4.0); // Calls parameterized constructor

    cout << "Volume of box1: " << box1.volume() << endl; // Outputs 1.0
    cout << "Volume of box2: " << box2.volume() << endl; // Outputs 24.0

    return 0;
}