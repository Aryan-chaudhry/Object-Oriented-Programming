/*
Used to declare a global variable or function in another file.
Scope: Global.
Lifetime: Entire program execution.
Linkage: External.
*/
#include <iostream>
using namespace std;

extern int x; // Declaration

int main() {
    cout << "extern variable x = " << x << endl;
    return 0;
}