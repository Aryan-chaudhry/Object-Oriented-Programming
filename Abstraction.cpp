#include<bits/stdc++.h>
using namespace std;

class Atm{
    private:
    int pin;
    float Amount = 0;

    public:

    void setMoney(int amt){
        this -> Amount += amt;
    }

    void setPin(int pin){
        this -> pin = pin;
    }

    void getMoney(int pin){
        if(this -> pin == pin){
            cout << "Money : " << Amount << endl;
        }
        else{
            cout << "Incorrect pin" << endl;
        }
    }
};

int main(){
    Atm card;
    card.setPin(123456);
    card.setMoney(12);
    card.getMoney(123456);
}