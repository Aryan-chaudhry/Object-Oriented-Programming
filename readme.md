# Object-Oriented Programming (OOP)

---

## Object

An **object** is a real-world entity or an instance of a class that contains both data (attributes) and functions (methods) that operate on the data. Objects represent things like a car, student, or bank account in code, encapsulating their properties and behaviors.

**Example:**
```cpp
class Car {
public:
    string color;
    void drive() { cout << "Driving..." << endl; }
};

int main() {
    Car myCar;
    myCar.color = "Red";
    myCar.drive();
}
```

---

## Class

A **class** is a user-defined data type that acts as a blueprint for creating objects. It defines the structure (data members) and behavior (member functions) that the objects created from the class will have. Classes enable modular, reusable, and organized code.

**Example:**
```cpp
class Student {
public:
    string name;
    int age;
    void introduce() { cout << "Hi, I'm " << name << endl; }
};
```

---

## Constructor

A **constructor** is a special member function that is automatically called when an object is created. Its main purpose is to initialize the object's data members. Constructors have the same name as the class and do not have a return type.

### Types of Constructors

1. **Default Constructor**: No parameters, initializes members with default values.
    ```cpp
    class A {
    public:
        A() { cout << "Default Constructor" << endl; }
    };
    ```

2. **Parameterized Constructor**: Takes arguments to initialize members with specific values.
    ```cpp
    class B {
    public:
        int x;
        B(int val) { x = val; }
    };
    ```

3. **Copy Constructor**: Initializes a new object as a copy of an existing object.
    ```cpp
    class C {
    public:
        int x;
        C(int val) { x = val; }
        C(const C& obj) { x = obj.x; }
    };
    ```

**Usage Example:**
```cpp
C obj1(10);
C obj2 = obj1; // Copy constructor called
```

---

## Destructor

A **destructor** is a special member function that is automatically called when an object goes out of scope or is deleted. Its main purpose is to release resources (like memory) acquired by the object. The destructor has the same name as the class, prefixed with `~`, and does not take parameters or return a value.

**Example:**
```cpp
class D {
public:
    ~D() { cout << "Destructor called" << endl; }
};
```

---

## Access Modifiers

Access modifiers control the visibility and accessibility of class members (data and functions):

- **public**: Members are accessible from anywhere in the program.
- **private**: Members are accessible only within the class itself.
- **protected**: Members are accessible within the class and by derived classes.

**Example:**
```cpp
class Example {
private:
    int secret;
public:
    int open;
protected:
    int semiSecret;
};
```

---

## Getter and Setter

Getters and setters are public member functions used to access and modify private data members, ensuring encapsulation and data protection.

**Example:**
```cpp
class Person {
private:
    int age;
public:
    void setAge(int a) { age = a; }
    int getAge() { return age; }
};
```

---

## Static Keyword

- **Static Data Members:** Shared by all objects of the class. Only one copy exists, regardless of how many objects are created.
- **Static Member Functions:** Can access only static data members and do not have a `this` pointer.

**Example:**
```cpp
class Counter {
public:
    static int count;
    Counter() { count++; }
    static int getCount() { return count; }
};
int Counter::count = 0;
```

---

## Const Keyword

- **const variable:** Its value cannot be changed after initialization.
- **const function:** Cannot modify any member variables of the class.

**Example:**
```cpp
class Demo {
public:
    int x;
    void show() const {
        // x++; // Error
        cout << x << endl;
    }
};
```

---

## Initialization List

Initialization lists are used in constructors to initialize data members before the constructor body executes, especially useful for `const` and reference members.

**Example:**
```cpp
class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {}
};
```

---

# Four Pillars of OOP

---

## 1. Encapsulation

**Encapsulation** is the concept of bundling data (variables) and methods (functions) that operate on the data into a single unit called a class. It restricts direct access to some of the object's components, which is known as data hiding. Encapsulation improves code modularity, maintainability, and security.

**Benefits:**
- Protects data from unauthorized access and modification.
- Makes code easier to maintain and modify.
- Enables implementation hiding.

**Example:**
```cpp
class Student {
private:
    string name;
    int age;
public:
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Student s;
    s.setName("Ramesh");
    s.setAge(20);
    cout << s.getName() << " " << s.getAge() << endl;
}
```

---

## 2. Inheritance

**Inheritance** is the mechanism by which one class (derived/child) acquires the properties and behaviors (data and functions) of another class (base/parent). It promotes code reusability and establishes a relationship between classes.

**Types of Inheritance:**
- **Single Level:** One base, one derived.
- **Multilevel:** Derived from a derived.
- **Multiple:** Multiple bases, one derived.
- **Hierarchical:** One base, multiple derived.
- **Hybrid:** Combination.

**Single Level Example:**
```cpp
class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking..." << endl; }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
}
```

**Multilevel Example:**
```cpp
class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking..." << endl; }
};

class Puppy : public Dog {
public:
    void weep() { cout << "Weeping..." << endl; }
};

int main() {
    Puppy p;
    p.eat();
    p.bark();
    p.weep();
}
```

**Multiple Inheritance Example:**
```cpp
class A {
public:
    void showA() { cout << "Class A" << endl; }
};
class B {
public:
    void showB() { cout << "Class B" << endl; }
};
class C : public A, public B {};

int main() {
    C obj;
    obj.showA();
    obj.showB();
}
```

**Hierarchical Example:**
```cpp
class Parent {
public:
    void show() { cout << "Parent" << endl; }
};
class Child1 : public Parent {};
class Child2 : public Parent {};

int main() {
    Child1 c1;
    Child2 c2;
    c1.show();
    c2.show();
}
```

**Hybrid Example:**
Hybrid inheritance is a combination of two or more types of inheritance.

**Ambiguity in Multiple Inheritance:**  
When two base classes have a function with the same name, the derived class must specify which function to use using the scope resolution operator `::`.

**Example:**
```cpp
class A { public: void show() { cout << "A" << endl; } };
class B { public: void show() { cout << "B" << endl; } };
class C : public A, public B {};

int main() {
    C obj;
    obj.A::show(); // Calls A's show
    obj.B::show(); // Calls B's show
}
```

---

## 3. Polymorphism

**Polymorphism** means "many forms." It allows functions or methods to behave differently based on the object or data type. Polymorphism enables flexibility and reusability in code.

### Types of Polymorphism

#### a. Compile-Time Polymorphism (Static/Early Binding)
- **Function Overloading:** Multiple functions with the same name but different parameters.
- **Operator Overloading:** Redefining operators for user-defined types.

**Function Overloading Example:**
```cpp
class Print {
public:
    void show(int i) { cout << "Integer: " << i << endl; }
    void show(double d) { cout << "Double: " << d << endl; }
};

int main() {
    Print p;
    p.show(5);
    p.show(5.5);
}
```

**Operator Overloading Example:**
```cpp
class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    void display() { cout << real << " + i" << imag << endl; }
};

int main() {
    Complex c1(2, 3), c2(1, 4);
    Complex c3 = c1 + c2;
    c3.display();
}
```

#### b. Run-Time Polymorphism (Dynamic/Late Binding)
- **Method Overriding:** Functions with the same name and parameters in parent and child classes, achieved through inheritance.
- **Virtual Functions:** Enable dynamic binding, allowing the correct function to be called based on the object type at runtime.

**Rules for Method Overriding:**
1. The method in the parent and child class must have the same name.
2. The method in the parent and child class must have the same parameters.
3. Possible only through inheritance.
4. The base class function should be marked as `virtual` for runtime polymorphism.

**Example:**
```cpp
class Animal {
public:
    virtual void speak() { cout << "Animal speaks" << endl; }
};

class Dog : public Animal {
public:
    void speak() override { cout << "Dog barks" << endl; }
};

int main() {
    Animal* a;
    Dog d;
    a = &d;
    a->speak(); // Output: Dog barks
    return 0;
}
```

---

## 4. Abstraction

**Abstraction** is the concept of hiding complex implementation details and showing only the essential features of an object. It helps reduce programming complexity and effort.

**How to Achieve Abstraction:**
- Using access modifiers to restrict access to certain details (e.g., making data members `private`).
- Using abstract classes and pure virtual functions.

**Abstract Class:** A class that has at least one pure virtual function. Cannot be instantiated directly.

**Pure Virtual Function:** A function declared with `= 0` in the base class.

**Example:**
```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle" << endl; }
};

int main() {
    // Shape s; // Error: cannot instantiate abstract class
    Circle c;
    c.draw(); // Output: Drawing Circle
    return 0;
}
```

**Benefits of Abstraction:**
- Reduces complexity by hiding unnecessary details.
- Only essential features are exposed to the user.
- Increases code reusability and maintainability.

---

# Storage Classes in C/C++

A **storage class** defines the scope (visibility), lifetime, and linkage of variables/functions. It tells the compiler where to store the variable, how long to keep it in memory, and who can access it.

## Types of Storage Classes

### 1. `auto`
- Default for local variables.
- Scope: Local to block.
- Lifetime: Created and destroyed with block.
- Linkage: None.

**Example:**
```cpp
int main() {
    auto int a = 10; // 'auto' is optional in modern C++
    cout << "auto variable a = " << a << endl;
    return 0;
}
```

---

### 2. `register`
- Suggests storing variable in CPU register.
- Scope: Local to block.
- Lifetime: Created and destroyed with block.
- Linkage: None.
- Cannot take address with `&`.

**Example:**
```cpp
int main() {
    register int b = 20;
    cout << "register variable b = " << b << endl;
    return 0;
}
```

---

### 3. `static`
- Retains value between function calls.
- Scope: Local to block or file.
- Lifetime: Entire program.
- Linkage: Internal (if global).

**Example:**
```cpp
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
```

---

### 4. `extern`
- Used to declare a global variable or function defined in another file.
- Scope: Global.
- Lifetime: Entire program.
- Linkage: External.

**Example:**  
Suppose you have two files.

**File 1: extern_var.cpp**
```cpp
int x = 100; // Definition
```

**File 2: main.cpp**
```cpp
#include <iostream>
using namespace std;

extern int x; // Declaration

int main() {
    cout << "extern variable x = " << x << endl;
    return 0;
}
```

---

### 5. `mutable` (C++ only)
- Allows a class member to be modified even if the object is `const`.
- Scope: Class member.
- Lifetime: As per object.

**Example:**
```cpp
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
```

---

## Storage Class Summary Table

| Storage Class | Scope         | Lifetime           | Linkage   | Usage Example                  |
|---------------|--------------|--------------------|-----------|-------------------------------|
| auto          | Local        | Block              | None      | `auto int x = 5;`             |
| register      | Local        | Block              | None      | `register int y = 10;`        |
| static        | Local/Global | Entire Program     | Internal  | `static int z = 0;`           |
| extern        | Global       | Entire Program     | External  | `extern int w;`               |
| mutable       | Class Member | As per object      | As object | `mutable int data;`           |

---

# Additional OOP Concepts

## Shallow vs Deep Copy

- **Shallow Copy:** Copies values, but pointers still point to the same memory.
- **Deep Copy:** Copies values and allocates new memory for pointers.

**Example:**
```cpp
class Sample {
public:
    int* ptr;
    Sample(int val) { ptr = new int(val); }
    // Deep copy constructor
    Sample(const Sample& obj) {
        ptr = new int(*obj.ptr);
    }
    ~Sample() { delete ptr; }
};
```

## Padding and Alignment

- **Padding:** Extra bytes added for alignment.
- **Greedy Alignment:** Arrange members from largest to smallest to minimize padding.

---

## Best Practices

- Use encapsulation to protect data.
- Prefer composition over inheritance when possible.
- Use virtual destructors in base classes when using polymorphism.
- Always initialize variables and pointers.
- Use `const` wherever possible to prevent accidental modification.
- Keep functions and classes small and focused on a single responsibility.
- Use meaningful names for classes, functions, and variables.

---

This document covers all major OOP concepts, C++ syntax, and storage classes with detailed explanations and code examples.