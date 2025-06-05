#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator+(A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "Output : " << value2 - value1 << endl;
    }

    void operator()(){
        cout << "i am Bracket : " << this -> a << endl;
    }
    void operator-(A &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout << "value 1 : " << value1 << endl;
        cout << "value 2 : " << value2 << endl;

        cout << value1 * value2 << endl;
    }
    void operator++(){
        cout << "i dont want to do work" << endl;
    }
    void operator++(int){
        cout << a*a << endl;
    }
    void operator/(A&obj){
        int value1 = this->a;
        int value2 = obj.b;
        cout << value1*value2;
    }
};

int main(){
    A obj1, obj2;
    obj1.a = 4;
    obj2.b = 7;

    obj1 + obj2;
    obj1();
    obj1 - obj2;
    ++obj1;
    obj2++;
    obj1/obj2;
}