#include<bits/stdc++.h>
using namespace std;

class Father{
public:
    string FatherName;

    void getInfo(){
        cout << FatherName << endl;
    }
};

class Mother{
public:
    string MotherName;

    void getInfo(){
        cout << MotherName << endl;
    }
};

class Son : public Father, public Mother{
public:
    string name;

    void getName(){
        cout << name << endl;
    }
};  

int main(){
    Son s;
    s.FatherName = "Joginder Singh";
    s.MotherName = "Rajesh Wari";
    s.name = "Aryan";

    s.Father::getInfo(); // removed ambiguity
}