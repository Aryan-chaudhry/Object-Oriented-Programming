#include<bits/stdc++.h>
using namespace std;

class A{
    public:

    void sayHello(){
        cout << "Hello Aryan Chaudhary" << endl;
    }

    void sayHello(string Name){
        cout << "Hello " << Name << " " << endl;
    }
};

int main(){
    A obj;
    obj.sayHello("Ayush");
}