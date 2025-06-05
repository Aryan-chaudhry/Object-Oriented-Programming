#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
    int age;
    int weight;
 
    void speak(){
        cout << "Speaking" << endl;
    }

};

class Dog: public Animal{
  
};

class GermanShepher: public Dog{

};

int main(){
    GermanShepher g;
    g.speak();
}