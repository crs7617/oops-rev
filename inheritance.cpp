#include <iostream>
#include <string>
using namespace std;

//this is also an example of single level inheritance
class person{
public:
    string name;
    int age;

    person() {} // Default constructor

    /* person(string name,int age){
        this->name=name;                  // now lets say we want to call the parameterized constructor of person class
        this->age=age;
    } */ 
};

class student: public person{ // student is inheriting from person class
    public:
    int rollno;


    /*student(string name, int age, int rollno): person(name, age) { // calling the parameterized constructor of person class
        this->rollno=rollno;
    } */                               //in this way , you can just use student s1("John", 20, 101); in main function
    
    void getinfo(){
        cout<<"Name: "<<name<<endl; // name is inherited from person class
        cout<<"Age: "<<age<<endl;   // age is inherited from person class
        cout<<"Roll No: "<<rollno<<endl;
    }

};
int main(){
    student s1; //this is because you are not calling the parameterized constructor of person class
    s1.name="John"; 
    s1.age=20;
    s1.rollno=101;
    s1.getinfo();
    return 0;
}


// this is an example of public mode inheritance 
// in public mode inheritance , the public members of the base class become public members of the derived class

// in private mode inheritance , the public members of the base class become private members of the derived class
// in protected mode inheritance , the public members of the base class become protected members of the derived
// class
// the private members of the base class are never inherited by the derived class , they are always private to the base class
// the protected members of the base class become protected members of the derived class in public and protected mode inheritance
// but in private mode inheritance , the protected members of the base class become private members of the derived class
// the private members of the base class can be accessed by the derived class using public or protected member functions of the base class
// if you dont specify the mode of inheritance , it is private by default for classes and public for structs

