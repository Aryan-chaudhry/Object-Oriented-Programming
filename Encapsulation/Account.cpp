#include<bits/stdc++.h>
using namespace std;

class Account{
private:
    double balance;
    string password; // data hiding

public:
    
    int accountId;
    string username;

    void setBalance(double b){
        this -> balance = b;
    }

    void setPassword(string p){
        this -> password = p;
    } 
    
    void getBalance(){
        cout << balance << endl;
    }

    void getPassword(){
        cout << password << endl;
    }

};

int main(){
    Account ac;
    ac.accountId = 1345;
    ac.username = "Aryan";

    ac.setBalance(1200000);
    ac.setPassword("Aryan@hgd_idsff");

    cout << ac.accountId << endl;
    cout << ac.username << endl;
    ac.getBalance();
    ac.getPassword();

    return 0;

}