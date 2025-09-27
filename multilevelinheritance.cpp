// this is an example of multi level inheritance in cpp

#include <iostream>
#include <string>
using namespace std;


class grandparent{
    public:
    string gpname;

    void getgpinfo(){
        cout<<"Grandparent Name: "<<gpname<<endl;
    }
};

class parent: public grandparent{ // parent is inheriting from grandparent
    public:
    string pname;

    void getpinfo(){
        cout<<"Parent Name: "<<pname<<endl;
    }
};

class child: public parent{ // child is inheriting from parent
    public:
    string cname;

    void getinfo(){
        cout<<"Child Name: "<<cname<<endl;
    }
};
int main(){
    child c1;
    c1.gpname="Robert"; // grandparent's name
    c1.pname="Michael"; // parent's name
    c1.cname="John";    // child's name

    c1.getgpinfo();
    c1.getpinfo();
    c1.getinfo();

    return 0;
}
// in this example , child class is inheriting from parent class and parent class is inheriting from grandparent class
// so child class has access to all the members of parent class and grandparent class
// this is an example of multilevel inheritance
