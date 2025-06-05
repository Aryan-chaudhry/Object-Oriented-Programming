#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void Name(){
        cout << "I am Dharamendar" << endl;
    }
};

class Child: public Parent{
    public:
    void Name(){
        cout << "I am Sunny Deal" << endl;
    }
};

int main(){
    Child ch;
    ch.Name();

    Parent p;
    p.Name();
}