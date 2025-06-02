#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char level;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // creating object
    Hero ramesh;

    ramesh.setHealth(70);
    cout << "Ramesh health is " << ramesh.getHealth() << endl;

    ramesh.setLevel('a');
    cout << "Ramesh level is  : " << ramesh.getLevel() << endl; 

    // cout << "Size : " << sizeof(h1) << endl;




}