#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void Info(){
        cout << "Hi i am class A" << endl;
    }
};

class B: public A{
    public:
};

class D{
    public:
    void Info(){
        cout << "Hi i am class D" << endl;
    }
};

class C: public A, public D{
    public:
};

int main(){
    B obj1;
    obj1.Info();
    C obj2;
    obj2.A::Info();
    obj2.D::Info();
}