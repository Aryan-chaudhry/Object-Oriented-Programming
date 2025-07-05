# Object-Oriented Programming (OOP)

---

## Object

An **object** is an instance of a class. It has:
- **State** (data/properties/attributes)
- **Behavior** (methods/functions)

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

A **class** is a user-defined data type that acts as a blueprint for objects.

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

A **constructor** is a special function called automatically when an object is created. It has the same name as the class and no return type.

### Types of Constructors

1. **Default Constructor**
    ```cpp
    class A {
    public:
        A() { cout << "Default Constructor" << endl; }
    };
    ```

2. **Parameterized Constructor**
    ```cpp
    class B {
    public:
        int x;
        B(int val) { x = val; }
    };
    ```

3. **Copy Constructor**
    ```cpp
    class C {
    public:
        int x;
        C(int val) { x = val; }
        C(const C& obj) { x = obj.x; }
    };
    ```

**Example:**
```cpp
C obj1(10);
C obj2 = obj1; // Copy constructor called
```

---

## Destructor

A **destructor** is called automatically when an object goes out of scope or is deleted. It has the same name as the class, prefixed with `~`, and no return type or parameters.

**Example:**
```cpp
class D {
public:
    ~D() { cout << "Destructor called" << endl; }
};
```

---

## Access Modifiers

- **public**: Accessible from anywhere.
- **private**: Accessible only within the class.
- **protected**: Accessible within the class and its derived classes.

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

Used to access and modify private data members.

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

- **Static Data Members:** Shared by all objects of the class.
- **Static Member Functions:** Can access only static data members.

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

- **const variable:** Value cannot be changed after initialization.
- **const function:** Cannot modify any member variables.

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

Used to initialize data members before constructor body executes.

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

Encapsulation is the process of wrapping data and functions into a single unit (class), restricting direct access to some of the object's components.

**Benefits:**
- Data hiding
- Increased security
- Code modularity

**Example:**  
See [`Encapsulation.cpp`](Encapsulation.cpp)

---

## 2. Inheritance

Inheritance allows a class (derived/child) to acquire properties and behaviors of another class (base/parent).

**Types of Inheritance:**
- **Single Level:** One base, one derived
- **Multilevel:** Derived from a derived
- **Multiple:** Multiple bases, one derived
- **Hierarchical:** One base, multiple derived
- **Hybrid:** Combination

**Example Files:**
- Single Level: [`Inheritance/singleLevel.cpp`](Inheritance/singleLevel.cpp)
- Multilevel: [`Inheritance/Multilevel.cpp`](Inheritance/Multilevel.cpp)
- Multiple: [`Inheritance/Multiple.cpp`](Inheritance/Multiple.cpp)
- Hierarchical: [`Inheritance/hyrarichal.cpp`](Inheritance/hyrarichal.cpp)
- Hybrid: [`Inheritance/hybrid.cpp`](Inheritance/hybrid.cpp)

**Ambiguity Solution:** Use scope resolution operator `::`.

**Example:**
```cpp
childObject.ParentClassName::function_name();
```

---

## 3. Polymorphism

Polymorphism means "many forms". It allows functions or methods to behave differently based on the object or data type.

### Types:

#### a. Compile-Time Polymorphism (Static/Early Binding)
- **Function Overloading:** Same function name, different parameters.
- **Operator Overloading:** Redefining operators for user-defined types.

**Examples:**
- [`Polymorphism/CompileTime/FunctionOverloading.cpp`](Polymorphism/CompileTime/FunctionOverloading.cpp)
- [`Polymorphism/CompileTime/OperatorOverloading.cpp`](Polymorphism/CompileTime/OperatorOverloading.cpp)

#### b. Run-Time Polymorphism (Dynamic/Late Binding)
- **Function Overriding:** Same function name and parameters in base and derived class, achieved via inheritance and virtual functions.

**Rules:**
1. Same name in parent and child.
2. Same parameters.
3. Achieved through inheritance.

**Example:**
- [`Polymorphism/RunTime/FunctionOverRiding.cpp`](Polymorphism/RunTime/FunctionOverRiding.cpp)

---

## 4. Abstraction

Abstraction means hiding implementation details and showing only the essential features.

**How to Achieve:**
- Using access modifiers (private/protected)
- Using abstract classes and pure virtual functions

**Example:**  
See [`Abstraction.cpp`](Abstraction.cpp)

---

# Storage Classes in C/C++

A **storage class** defines the scope, lifetime, and linkage of variables/functions.

## Types of Storage Classes

### 1. `auto`
- Default for local variables.
- Scope: Local to block.
- Lifetime: Created and destroyed with block.
- Linkage: None.

**Example:**  
See [`Storage class/auto_storage_class.cpp`](Storage class/auto_storage_class.cpp)

---

### 2. `register`
- Suggests storing variable in CPU register.
- Scope: Local to block.
- Lifetime: Created and destroyed with block.
- Linkage: None.
- Cannot take address with `&`.

**Example:**  
See [`Storage class/register_storage_class.cpp`](Storage class/register_storage_class.cpp)

---

### 3. `static`
- Retains value between function calls.
- Scope: Local to block or file.
- Lifetime: Entire program.
- Linkage: Internal (if global).

**Example:**  
See [`Storage class/static_storage_class.cpp`](Storage class/static_storage_class.cpp)

---

### 4. `extern`
- Used to declare a global variable or function defined in another file.
- Scope: Global.
- Lifetime: Entire program.
- Linkage: External.

**Example:**  
See [`Storage class/extern_storage_class.cpp`](Storage class/extern_storage_class.cpp)

---

### 5. `mutable` (C++ only)
- Allows a class member to be modified even if the object is `const`.
- Scope: Class member.
- Lifetime: As per object.

**Example:**  
See [`Storage class/mutable_storage_class.cpp`](Storage class/mutable_storage_class.cpp)

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

## Padding and Alignment

- **Padding:** Extra bytes added for alignment.
- **Greedy Alignment:** Arrange members from largest to smallest to minimize padding.

## Best Practices

- Use encapsulation to protect data.
- Prefer composition over inheritance when possible.
- Use virtual destructors in base classes when using polymorphism.

---

This document covers all major OOP concepts, C++ syntax, and storage classes with examples and references to code files in this workspace.