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

    // i want that health is set by ramesh father suresh only
    void setHealth(int h, string name){ 
        if(name == "suresh"){
            health = h;
            cout << "Done" << endl;
        }
        else{
            cout << "Please contact ramesh father to set health!" << endl;;
        }
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    // creating object
    Hero ramesh;

    ramesh.setHealth(70, "suresh");
    cout << "Ramesh health is " << ramesh.getHealth() << endl;

    ramesh.setLevel('a');
    cout << "Ramesh level is  : " << ramesh.getLevel() << endl; 

    // cout << "Size : " << sizeof(h1) << endl;




}