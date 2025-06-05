#include<bits/stdc++.h>
using namespace std;

class Mother{
    public:

    void Info(){
        cout << "I am Mother" << endl;
    }
};

class Father{
    public:

    void Info(){
        cout << "I am father" << endl;
    }
};

class Child: public Mother, public Father{
    public:

    void Name(){
        cout << "I am Rohan " << endl;
    }
};

int main(){
    Child ch;
    ch.Mother::Info();
    ch.Father::Info();

}