/*
Suggests to the compiler to store the variable in a CPU register for faster access.
Scope: Local to the block.
Lifetime: Created on entry, destroyed on exit from the block.
Linkage: None.
Note: Cannot use & (address-of) operator on register variables.
*/

#include <iostream>
using namespace std;

int main() {
    register int b = 20;
    cout << "register variable b = " << b << endl;
    return 0;
}