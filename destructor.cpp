#include <iostream>
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

    

    void getinfo(){
        cout << "Name: " << name << ", CGPA: " << *cgptr << endl;
    }

    // Destructor to free dynamically allocated memory (even this is optional but good practice to avoid memory leaks)
    ~Student() {
        delete cgptr; // free the dynamically allocated memory
    }

};    

int main(){
    return 0;

}