// this is an exampe of multiple inheritance
#include <iostream>
#include <string>
using namespace std;

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

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Roll No: "<<rollno<<endl;
    }
};

class employee{
    public:
    int empid;
    double salary;

    void show(){
        cout<<"Employee ID: "<<empid<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class workingstudent: public student, public employee{ // workingstudent is inheriting from student and employee class
    public:
    string companyname;

    void getinfo(){
        display(); // calling display function of student class
        show();    // calling show function of employee class
        cout<<"Company Name: "<<companyname<<endl;
    }
};

int main(){
    workingstudent ws1;
    ws1.name="John"; // name is inherited from person class
    ws1.age=20;     // age is inherited from person class
    ws1.rollno=101; // rollno is inherited from student class
    ws1.empid=1001; // empid is inherited from employee class
    ws1.salary=50000; // salary is inherited from employee class
    ws1.companyname="ABC Corp"; // companyname is member of workingstudent class

    ws1.getinfo();

    return 0;
}
// in this example , workingstudent class is inheriting from student class and employee class
// student class is inheriting from person class
// so workingstudent class has access to all the members of student class , employee class and person class
// this is an example of multiple inheritance