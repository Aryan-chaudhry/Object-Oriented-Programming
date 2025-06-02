#include<bits/stdc++.h>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char *name;
    char level;

    // defualt constructor
    Hero(){
        cout << " Default Constructor called" << endl;
        name = new char[100];
    }

    // parametrised constructor
    Hero(int health){
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    // copy constructor
    // Hero(Hero& temp){
    //     this -> health = temp.health;
    //     this -> level = temp.level;
    // }


    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    // i want that health is set by ramesh father suresh only
    void setHealth(int h){ 
        
            health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this -> name, name);
    }
    void print(){
        cout << " [ Name: " << this -> name << ", ";
        cout << "health: " << this -> health << ", ";
        cout << "level: " << this -> level << " ]" << endl;
        cout << endl;
    }
};

int main(){

    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[6] = "Aryan";

    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[1] = 'y';
    hero1.print();

    hero2.print();


    // Hero ramesh(70, 'C');

    // // copy constructor
    // Hero R(ramesh);
    // cout << R.getHealth();


    // // object created statically
    // Hero ramesh(10);
    // cout << "Address of ramesh : " << &ramesh << endl;
    // ramesh.getHealth();

    // Hero temp(22, 'b');

    // // object created dynamically
    // Hero *h = new Hero(11);

    /*
    // creating object

    // static allocation
    // Hero ramesh;

    // dynamic allocation
    Hero *ramesh = new Hero();

    (*ramesh).setHealth(70, "suresh");
    cout << "Ramesh health is " << (*ramesh).getHealth() << endl;

    ramesh->setLevel('a');
    cout << "Ramesh level is  : " << ramesh->getLevel() << endl; 

    // cout << "Size : " << sizeof(h1) << endl;

    */


}