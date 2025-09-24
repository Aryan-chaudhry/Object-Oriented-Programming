#include<bits/stdc++.h>
using namespace std;

class ABC{
public:
    ABC(){
        cout << "constructor" << endl;
    }

    ~ABC(){
        cout << "Destructor" << endl;
    }
};

int main(){

    if(true){
        static ABC obj; // if not static than it created and deleted once get out of scope( means get out from bracket)
    }

    cout << "end of main function" << endl;

}