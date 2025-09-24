#include <iostream>
#include <string>
using namespace std;

class Teacher{

    //properties (atributes)
public:

    string name;
    string dept;
    string sub;
    double sal;
    //methods (functions)

    void changedept(string newdept){
         dept=newdept;
    }


};

int main(){
    Teacher t1; //object for first teacher in the teacher system
    t1.name="John";
    t1.sub="Maths";
    t1.dept="Science";
    t1.sal=25000.00;
    
    cout<<t1.name<<endl;
    return 0;
}