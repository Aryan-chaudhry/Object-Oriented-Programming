/*
Retains the value of a variable between function calls.
Scope: Local to the block (if declared inside a function), or file scope (if declared globally).
Lifetime: Entire program execution.
Linkage: Internal (if global).

*/

#include <iostream>
using namespace std;

void demoStatic() {
    static int count = 0; // Initialized only once
    count++;
    cout << "static count = " << count << endl;
}

int main() {
    demoStatic();
    demoStatic();
    demoStatic();
    return 0;
}