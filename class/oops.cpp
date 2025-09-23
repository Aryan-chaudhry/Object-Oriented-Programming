#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:
    double salary;

public:
    // non parameterized Constructor
    Teacher(){
        cout << "Hi i am Constructor" << endl;
        dept = "Computer science";
    }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this-> salary = salary;
    }

    // copy constructor
    Teacher(Teacher &orgObj){ // pass by refrence
        cout << "I am custom copy constructor" << endl;
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    }

    // properties/ attributes
    string name;
    string dept;
    string subject;
   

    // methods
    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        this->salary = s;
    }

    void getSalary(){
        cout << "Your salary is : " << salary << endl;
    }
};



int main(){
    Teacher t1; // constructor call

    // t1.name = "Aryan";
    // t1.subject = "C++";
    // t1.setSalary(120000);

    cout << t1.name << endl;
    cout << t1.dept << endl;

    t1.getSalary();

    Teacher t2(t1);
    t2.getSalary();
 }