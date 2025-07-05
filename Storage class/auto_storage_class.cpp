/*
A storage class defines the scope (visibility), lifetime, and linkage of variables and/or functions within a C/C++ program. It tells the compiler:

Where to store the variable
How long to keep it in memory (lifetime)
Who can access it (scope)
Whether it can be shared across files (linkage)

1. auto Storage Class
Default for local variables inside functions.
Scope: Local to the block in which it is defined.
Lifetime: Created on entry, destroyed on exit from the block.
Linkage: None.

*/

#include <iostream>
using namespace std;

int main() {
    int a = 10; // 'auto' is optional in modern C++
    cout << "auto variable a = " << a << endl;
    return 0;
}