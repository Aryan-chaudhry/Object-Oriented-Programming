#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:

    void Info(){
        cout << "Hi i am vehicle class" << endl;
    }
};

class Car : protected Vehicle{
    public:

    void Car_Name(){
        cout << "Hi i am Swift Desire" << endl;
    }

    void getInfo(){
        Info();
    }
};

int main(){
    Car obj;
    obj.getInfo();
    obj.Car_Name();

    

}