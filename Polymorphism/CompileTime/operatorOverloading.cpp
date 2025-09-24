#include<bits/stdc++.h>
using namespace std;

class Number{
public:
    int value;

    Number(int value){
        this -> value = value;
    }

    // overload + so that it do multiply
    Number operator + (const Number &n){
        return Number(value * n.value);
    }
};

int main(){
    Number n1(5), n2(3);
    Number n3 = n1 + n2;  // calls overloaded + (actually multiplies)
    cout << "Result: " << n3.value << endl;  // Output: 15
    return 0;
}