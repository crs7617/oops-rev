// this is an example of hierarchical inheritance in cpp

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

class parent1: public grandparent{ // parent1 is inheriting from grandparent
    public:
    string pname1;

    void getp1info(){
        cout<<"Parent1 Name: "<<pname1<<endl;
    }
};

class parent2: public grandparent{ // parent2 is inheriting from grandparent
    public:
    string pname2;

    void getp2info(){
        cout<<"Parent2 Name: "<<pname2<<endl;
    }
};

int main(){
    parent1 p1;
    p1.gpname="Robert"; // grandparent's name
    p1.pname1="Michael"; // parent1's name

    p1.getgpinfo();
    p1.getp1info();

    parent2 p2;
    p2.gpname="Robert"; // grandparent's name
    p2.pname2="Jennifer"; // parent2's name

    p2.getgpinfo();
    p2.getp2info();

    return 0;
}
// in this example , parent1 and parent2 classes are inheriting from grandparent class
// so both parent1 and parent2 classes have access to the members of grandparent class
// this is an example of hierarchical inheritance