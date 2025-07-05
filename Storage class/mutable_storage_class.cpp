/*
Allows a class member to be modified even if it is part of an object declared as const.
Scope: Class member.
Lifetime: As per object.
Linkage: As per object.
*/

#include <iostream>
using namespace std;

class Demo {
public:
    int a;
    mutable int b;

    Demo() : a(1), b(2) {}
    void show() const {
        // a++; // Error: cannot modify a
        b++;    // OK: can modify b
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    const Demo d;
    d.show();
    return 0;
}