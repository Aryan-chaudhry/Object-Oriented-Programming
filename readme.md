# Object-Oriented Programming (OOP)

## Object

An **object** is an entity that has both state (properties) and behavior (methods). An object is an instance of a class.

- If we create an object using **static allocation**, we use the `.` operator to access its members.
- If we create an object using **dynamic allocation**, we use:
  1. `*` (dereference operator)
  2. `->` (arrow operator)

### What Happens When We Create an Object?

Whenever we create an object, the **constructor** is called automatically, e.g., `ramesh.Hero()`. By default, a constructor with the same name as the class (default constructor) is created.

### Constructor

- Invoked at the time of object creation.
- Has no return type.
- Has the same name as the class.

#### Types of Constructors

1. **Default Constructor**  
   A constructor with no arguments.  
   **Syntax:**  
   ```cpp
   classname() {}
   ```

2. **Parameterized Constructor**  
   A constructor where we pass arguments.  
   **Syntax:**  
   ```cpp
   classname(datatype p1, datatype p2, ...) {}
   ```

   **Example:**
   ```cpp
   int health;

   classname(int health) {
       health = health; // Incorrect: assigns parameter to itself
   }
   ```
   To assign the parameter to the class member, use the `this` keyword:
   ```cpp
   int health;

   classname(int health) {
       this->health = health; // Correct
   }
   ```

3. **Copy Constructor**  
   Used to create a new object as a copy of an existing object.  
   By default, a shallow copy constructor is generated automatically.

   **Example:**
   ```cpp
   class Hero {
   public:
       Hero(Hero& temp) {
           this->health = temp.health;
           this->level = temp.level;
       }
   };

   int main() {
       Hero R(ramesh);
   }
   ```
   - Always pass by reference (`Hero& temp`) to avoid infinite recursion.

### Shallow vs. Deep Copy

- **Shallow Copy:** Copies the object but shares the same memory.
- **Deep Copy:** Copies the object and allocates separate memory.

### Destructor

- Automatically created when a class is defined.
- Same name as the class, prefixed with `~`.
- No parameters, no return type.
- Called automatically for statically created objects.
- For dynamically created objects, must be called manually.

---

## Class

A **class** is a user-defined data type.  
Properties of a class can be accessed using the `.` operator.

### Class Size

- The size of a class object is the sum of the sizes of its members, plus any padding added for alignment.
- If a class has no properties, it still occupies 1 byte in memory.

### Padding and Greedy Alignment

- **Padding:** Extra memory bytes added by the compiler between data members to satisfy alignment constraints.
- **Greedy Alignment:** Arranging members from largest to smallest data types to minimize padding.

**Best Practices:**
- Let the compiler manage padding unless working in low-level programming.
- Use greedy alignment for performance-sensitive structures.

---

## Access Modifiers

Access modifiers define the accessibility of class members:

1. **public**: Accessible from anywhere.
2. **private**: Accessible only within the class.
3. **protected**: Accessible within the class and its derived classes.

> **Note:** If no access modifier is specified, members are `private` by default.

### Getter/Setter

Private members can be accessed using public getter and setter functions.

---

## Copy Assignment Operator

The copy assignment operator (`=`) is used to assign the value of one object to another.

---

## Important Concepts

### `const` Keyword

- Used to declare constants and prevent modification.
- Must be initialized at the time of declaration.

### Const Function

A member function that does not modify any member variables.

### Initialization List

Used to initialize member variables before the constructor body executes.

---

## Static Keyword

- **Static Data Members:** Belong to the class, not to any object. Must be initialized outside the class.
  ```cpp
  datatype classname::fieldname = value;
  ```
- **Static Functions:** Can access only static members. Do not have a `this` pointer.

---

# Four Pillars of OOP

## 1. Encapsulation

Encapsulation is the process of wrapping data members and functions into a single unit (class).  
It is also known as information/data hiding.

**Fully Encapsulated Class:** All data members are marked private.

**Benefits:**
1. Increases security by hiding data.
2. Allows making classes read-only (using getters).
3. Promotes code reusability.
4. Facilitates unit testing.

---

## 2. Inheritance

Inheritance allows a class to acquire properties and behaviors of another class.

**Types of Inheritance:**
1. **Single Level:** Child class inherits from one parent class.
2. **Multilevel:** Child class inherits from a parent class, which itself is a child of another class.
3. **Multiple:** Child class inherits from more than one parent class.
4. **Hierarchical:** One class serves as a parent for multiple child classes.
5. **Hybrid:** Combination of more than one type of inheritance.

**Inheritance Ambiguity:**  
Occurs when a child class inherits members with the same name from multiple parent classes.  
**Solution:** Use the scope resolution operator `::` to specify which class's member to access.
```cpp
childObject.ParentClassName::function_name();
```

**Modes of Inheritance in C++:**

| Inheritance Type        | Syntax                                | Access Level in Derived Class                           | Description                                                                 |
|------------------------|---------------------------------------|---------------------------------------------------------|-----------------------------------------------------------------------------|
| Public Inheritance     | `class Derived : public Base`         | Public → Public<br>Protected → Protected<br>Private → Not Inherited | Represents an "is-a" relationship. Most common.                             |
| Protected Inheritance  | `class Derived : protected Base`      | Public → Protected<br>Protected → Protected<br>Private → Not Inherited | Used for internal implementation.                                           |
| Private Inheritance    | `class Derived : private Base`        | Public → Private<br>Protected → Private<br>Private → Not Inherited | Strong encapsulation. Inherited members not accessible outside.             |

> **Note:** Private data members of any class cannot be inherited.

---

## 3. Polymorphism

Polymorphism means "many forms."  
It is of two types:

1. **Compile-Time Polymorphism (Static/Early Binding)**
   - **Function Overloading:** Multiple functions with the same name but different parameters.
   - **Operator Overloading:** Giving special meaning to operators for user-defined types.
     - **Syntax:**  
       ```cpp
       return_type operator operator_symbol (input)
       ```
     - **Operators that cannot be overloaded:** `::`, `.`, `.*`, `sizeof`, `typeid`, `?:`, `alignof`, `noexcept`, `co_await`

2. **Run-Time Polymorphism (Dynamic/Late Binding)**
   - **Method Overriding:** Functions with the same name and parameters in parent and child classes, achieved through inheritance.

   **Rules for Method Overriding:**
   1. The method in the parent and child class must have the same name.
   2. The method in the parent and child class must have the same parameters.
   3. Possible only through inheritance.

---

## 4. Abstraction

Abstraction means hiding implementation details and showing only the functionality to the user.

**How to Achieve Abstraction:**
- Using access modifiers to restrict access to certain details.

---