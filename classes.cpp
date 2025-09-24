#include <iostream>
#include <string>
using namespace std;

class Teacher{

    //properties (atributes)

private:
    double sal; //lets say you dont want to change the salary of the teacher directly from main

public:

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
    t1.name="John";
    t1.sub="Maths";
    t1.dept="Science";
    t1.getsal(5000);
    cout<<t1.setsal()<<endl;

    cout<<t1.name<<endl;
    return 0;
}