#include <iostream>
#include <string>
using namespace std;

class Student{

public:
    string name;
    double* cgptr;

    Student(string n, double cg){
        name = n;
        cgptr = new double; //dynamically allocating memory
        *cgptr = cg;
    }

    // Copy constructor
    Student(const Student& s) { // here the & is used to avoid infinite loop , if we dont use it , it will keep calling the copy constructor again and again , the reason why it keeps calling infinitely is that when we pass by value , a copy of the object is made and to make that copy , the copy constructor is called again and again
        name = s.name;
        cgptr = new double; // allocate new memory dynamically
        *cgptr = *s.cgptr;  // dereference and copy the value to the deference of the new object , so that the heap memory clash doesnt occur
    }

    void getinfo(){
        cout << "Name: " << name << ", CGPA: " << *cgptr << endl;
    }

};    

int main(){
    Student s1("John", 9.5);
    s1.getinfo();
    Student s2(s1); // Copy constructor is called
    *(s2.cgptr)=8.5; //changing the value of cgptr of s2
    s2.getinfo();
    return 0;
}