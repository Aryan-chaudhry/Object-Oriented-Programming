#include<bits/stdc++.h>
using namespace std;

class Teacher{
    private:

    double salary;

    public:
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
    Teacher t1;
    t1.name = "Aryan";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(120000);

    cout << t1.name << endl;
    t1.getSalary();
 }