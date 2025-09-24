#include<bits/stdc++.h>
using namespace std;

class Print{
public:

    void show(int x){
        cout << "int : " << x << endl; 
    }

    void show(char ch){
        cout << "char : " << ch << endl;
    }
};

int main(){
    Print p;
    p.show(5);
    p.show('5');
}