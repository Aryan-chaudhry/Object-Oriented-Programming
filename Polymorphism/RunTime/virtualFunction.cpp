#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent class\n";
    }

    virtual void Hello(){
        cout << "Hello from parent\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child class\n";
    }

    void Hello(){
        cout << "Hello from child\n";
    }
};

int main(){

    Parent *p;
    Child c1;
    p = &c1; // p point to child object

    p->getInfo();
    p->Hello();



}