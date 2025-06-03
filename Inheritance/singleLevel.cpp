#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:

    void Info(){
        cout << "Hi i am vehicle class" << endl;
    }
};

class Car : public Vehicle{
    public:

    void Car_Name(){
        cout << "Hi i am Swift Desire" << endl;
    }
};

int main(){
    Car obj;
    obj.Info();
    obj.Car_Name();

}