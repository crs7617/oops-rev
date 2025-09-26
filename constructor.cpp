#include <iostream>
#include <string>
using namespace std;

class Teacher{

    //properties (atributes)

private:
    double sal; //lets say you dont want to change the salary of the teacher directly from main

public:

    //non parameterized constructor

    Teacher(){
        cout << "Default constructor called" << endl;
        dept="Science"; // this makes sure that every teacher created will have the default department as science
    } //this is a constructor , if I dont call this ,c++ automotically creates a default constructor

    //parameterized constructor

    //within a class there can be multiple constructors with different parameters

    Teacher(string n, string d, string s, double sal){ //constructor with parameters
        name=n;
        dept=d;
        sub=s;
        this->sal=sal; //this pointer is used to refer to the current object of the class (when sal and sal are there , it gets a bit confusing for the compiler)
    } 


    //copy constructor
    Teacher(Teacher &t){ //reference variable is used to avoid infinite loop
        this->name=t.name; //this is custom copy constructor , it copies all the values of t to the current object
        this->dept=t.dept;
        this->sub=t.sub;
        this->sal=t.sal;
    }

    string name;
    string dept;
    string sub;
    //methods (functions)

    void changedept(string newdept){
         dept=newdept;
    }

    //getter for getting the private variable within the class
    void getsal(double s){
        sal=s;
    }

    //setter for setting the private variable within the class and returning it
    double setsal(){
        return sal;
    }

};

int main(){
    Teacher t1; //object for first teacher in the teacher system

    //Teacher t2("sairam", "Arts", "History", 6000); //now if I run the code , "default constructor called" will be printed twice
    t1.name="John";
    t1.sub="Maths";
    t1.getsal(5000);
    cout<<t1.setsal()<<endl;

    Teacher t2(t1); //copy constructor , it copies all the values of t1 to t2

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl; //this will print science as the default constructor has set the department to science
    return 0;
}