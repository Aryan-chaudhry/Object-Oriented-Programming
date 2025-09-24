#include<bits/stdc++.h>
using namespace std;

class Parent{
public:
    string FatherName = "JoginderSingh";
    string MotherName = "Rajesh wari";
};

class child1 : public Parent{
public:
    string child1Name;

    void getChild1Info(){
        cout << FatherName << endl;
        cout << MotherName << endl;
        cout << child1Name << endl;
    }
};

class child2 : public Parent{
public:
    string child2Name;

    void getChild2Info(){
        cout << FatherName << endl;
        cout << MotherName << endl;
        cout << child2Name << endl;
    }
};

int main(){

    child1 ch1;
    ch1.child1Name = "Aryan";
    ch1.getChild1Info();

    child2 ch2;
    ch2.child2Name = "Ayush";
    ch2.getChild2Info();
}