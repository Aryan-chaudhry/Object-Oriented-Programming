#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout << "parent constructor" << endl;
    }

    Person(string name, int age){
        this -> name = name;
        this -> age = age;
    }

    ~Person(){
        cout << "Parent destructor" << endl;
    }
    // Person(string name, int age) : name(name), age(age){}  known as initializer list

};

class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        this -> rollno = rollno;
        cout << "Student constructor" << endl;
    }

    ~Student(){
        cout << "Student destructor" << endl;
    }

    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "roll no : " << rollno << endl;
    }
};

int main(){
    Student s1("Aryan", 21, 16750);
    s1.getInfo();

}