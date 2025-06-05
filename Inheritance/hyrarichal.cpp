#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:

    void Info(){
        cout << "We are parent" << endl;
    }
};

class child1: public Parent{
    public:

    void Info1(){
        cout << "Hi i am Sohan" << endl;
    }
};

class child2: public Parent{
    public:

    void Info2(){
        cout << "Hi i am Rohan" << endl;
    }
};

int main(){
    child1 ch1;
    ch1.Info();
    

    child2 ch2;
    ch2.Info();
}