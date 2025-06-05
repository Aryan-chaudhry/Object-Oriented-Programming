# Object-Oriented Programming

## Object : 

Object is an entity which have two things its state/Property and its behaviour
and, object is an instance of class
if we create object using static allocation, for access we use 
```.``` operator
if we create object using  dynamic allocation, for access we use 
1. (*) de refernce operator
2. (->) 

### Behind the scene when create an object

whenever we create an object, 1st of all one thing is called constructor means it will called like ```ramesh.Hero()``` 
So when ever you write a class then by default a constructor is created by class name (also known as default constructor)

### Constructor 

1. it invoke at a time of object creation
2. it have no return type
3. it have same name as of class

The constructor are of 3 type
1. defualt constructor

A default constructor is a type of constructor which does not contain any arguments

syntax
``` classname(){} ```

2. parametrised constructor

A parametrised constructor is a type of construtor where we pass arguments to constructor
syntax
``` classname(datatype p1, dataptype p2 , ..){}```

Brainstrome Example

```
1 int health;
2
3   classname(int health){
4        health = health;
5    } 
```
by seeing this example it is clearly visible that line 3 argument "health" reinitialize itself in line 4
but we want that variable in line 1 will assign value of health argument of line 3 in line 4

so when ever our variable and argument name is same and to avoid
problem like we see above we use a keyword known as ```this``` keyword

this keyword

this is a pointer which always point to current object 

correct example

```
1 int health;
2
3   classname(int health){
4        this -> health = health;
5    } 
```

3. copy constructor

 A copy constructor is a special constructor which is used to create a new object as a copy of an existing object.
A default copy constructor do shallow copy
 when you write a class an inbuild copy constructor generate automatically

  ```
  class Hero{ 
    public:

    Hero(Hero& temp){
        this -> health = temp.health;
        this -> level = temp.level;
    }
  }

    int main(){
        Hero R(ramesh);
    }

  ```

  why use & --> becuase if we dont add & than temp is a copy of ramesh and when we try to make copy , then you call copy constructor and this is a copy constructor again we come to temp than copy will formed here, so we trapped in infinite loop(making copy of copy constructor )

  so never pass by value
  temp  <----> R

  always pass by reference
  [temp, ramesh] it is same

### Shallow and deep copy

shallow copy : shalow copy copies the onject but shares the same memmory

### Behind the scene when clear an object

deep copy : deep copy copies the object and shares different memmory

when we clear an object its constructor also get deleted and never called until new object is created.

## Destructor

When class is created distructor also created automatically.
we can also create distructor 

same name as class
no parameter
no return type
but distructor write with ```~```

destructor called automatically for statically created object
but destructor did not called automatically for dynamically created object - so call manually

## class :

class is user defined data type 
We can access the property of class using ```.``` Operator

### Brainstrome concept of class

no of properties in a class == size of class
if class contain 2 member one it int and second is char than size of clas so object comes to be 5 but why come 8? (You can try it)
its simple logic it padding and greedy alignment

# 📘 Understanding Padding and Greedy Alignment in C++

## 🔍 What is Padding?

Padding refers to extra memory bytes added by the compiler between data members of a structure or class. These bytes are inserted to satisfy alignment constraints imposed by modern CPUs.

Most CPUs access data faster when it's stored at memory addresses that are multiples of the data type’s size. For instance, a 4-byte `int` is accessed efficiently only if it begins at an address divisible by 4. If this alignment is not maintained, the CPU may require extra cycles or, on some platforms, throw a hardware exception.

To ensure performance and correctness, the compiler automatically adds padding bytes between structure members where needed.

### ✅ Why is Padding Used?

- To align data members properly in memory.
- To ensure efficient and safe memory access by the CPU.
- To comply with platform-specific hardware requirements.

---

## 🧠 What is Greedy Alignment?

Greedy alignment is an optimization technique where structure or class members are arranged from largest to smallest data types. This ordering minimizes the number of padding bytes needed between members, leading to more memory-efficient data layouts.

While the compiler handles padding automatically, writing structs with greedy alignment can help reduce memory overhead in large data structures or performance-critical applications.

---

## 🧾 Summary Table

| Concept           | Description                                                       |
|------------------|-------------------------------------------------------------------|
| **Padding**       | Extra unused bytes added for alignment                          |
| **Purpose**       | To allow the CPU to access variables efficiently and safely      |
| **Greedy Alignment** | Reordering members from largest to smallest to minimize padding |
| **Why Needed**    | Improves memory usage and maintains optimal CPU performance      |

---

## ⚠️ Note on Manual Control

In special cases (e.g., network protocols, binary file formats), developers may manually control padding using compiler directives like `#pragma pack(1)`. While this disables padding, it also introduces potential performance penalties and should be used cautiously.

---

## 📌 Best Practices

- Let the compiler manage padding unless you're working in low-level programming.
- Use greedy alignment when designing data structures for performance-sensitive applications.
- Avoid using manual packing unless absolutely required.

---

##  Related Concepts

- **`sizeof` Operator** – Returns the size of a struct/class including padding.
- **`alignof` / `alignas`** (C++11+) – Tools for controlling alignment manually.
- **Memory Alignment** – Hardware-level requirement that underlies padding behavior.

---


Note : What is the size of class object? if there is no property in a class?

Ans: 1 byte memmory is allocated to object --> If there is no property present in a class than to keep track of class it will give 1 byte size 

Can we can create a class in different file  and access that in another file?
yes: Using ```#include"File_name";```


## Access Modifiers

Access modifier are used to assign the accessibility of the class member means where you can acces them within a class, outside of class, or in child class etc.

Theaere are 3 type of access modifier
1. public
2. private
3. protected

### Public

All the class members under the public specifier will be available to everyone

### Private

All the class members under private specifier will be available with in class only

### Protected


Note: if you dont mention any access modifier in the class by default it is private in nature.

## Getter/Setter

we can not access private member of a class, to acces them we use getter and setter function within a class because they access private member and we easliy access getter and setter function which is public in nature.


## copy Assignment Operator

this is copy assignment operator ``` = ```
copy assignmnet operator is used to assign the value of one object to another object.  


# Some important concept

## const keyword how it use in object creation

const keyword is used to declare constant and prevent modification of variable, function, return types, class method etc
const keyword always initialize at time of declaration

## const fucntion
## what is initialization list



## static Keyword

static keyword create data member,functions which belong to class and to access them we dont need to create object 
always initialize static datamemer outside the class 

Syntax
``` datatype classname :: feildname = value```

### static function

static function is also created with static keyword
it does not have this keyword, static function can access only static members

  why static function does not have this keyword

  becuase this keyword is pointer to currect object but static data member, function do not contain any object that's why static function or static data members does not have thus keyword



# 4 pillars of OOPS

## 1. Encapsulation


Rapping up data members and function in single unit is known as Encapsulation.
it is Information/data Hiding.

Fully Encapsulated Class :- 
Fully Encapsulated class is a class in which all data members are marked private

Why we are doing Encapsulation?

1. we can hide data, info of our class, so security level increase
2. if we want we can make class read only(use getter function)
3. Code reusability
4. Unit code is better for unit testing

## 2. Inheritance

When a class inherit the properties on another class this concept is known as inheritance

There are 5 types of inheritance

### 1. Single level:- 
When a child class inherit the property of parent class than it is known as Single level Inheritance.

### 2. multilevel

when a child class inherit the property of parent class, where child class also act as parent class for another child class.

### 3. multiple

When a child class inherit the property of more than 1 parent class than it is known as multilevel inheritance

###4. hyrarichal

When one class serve as parent class for more than 1 class.

### 5. hybrid

it is combination of more than 1 type of inheritance

  Inheritance Ambiguity

  when child class call the data mamber/function having same name present in more than one parent class than compiler get confuse to choose which class function, this is known as Inheritance Ambiguity.

  it occur in Multiple inheritance
  -- Reason is clear in Defination

  How to get rid of Ambiguity
  Using Scope Resolotion Operator ```::```
  Syntax 
  ```childclassName objectname.parentClassName::function_name(which is Ambigious)```
  eg
 ```child ch.Mother::Info()```

  How Scope resolution Operator help to get rid of Ambiguity

  Scope resolution Operator help to get rid from ambiguity by explicitly specify the scope of class from which we access the function.
  it explicitly specify which parent class you want to use.




Why we need 5 types of Inheritance? What is the Reason?



## Mode of Inheritance in C++

| Inheritance Type        | Syntax                                | Access Level in Derived Class                           | Description                                                                 |
|-------------------------|----------------------------------------|----------------------------------------------------------|-----------------------------------------------------------------------------|
| **Public Inheritance**  | `class Derived : public Base`          | Public → Public<br>Protected → Protected<br>Private → Not Inherited | Represents an "is-a" relationship. Most commonly used.                     |
| **Protected Inheritance** | `class Derived : protected Base`     | Public → Protected<br>Protected → Protected<br>Private → Not Inherited | Base members become less accessible; used for internal implementation.     |
| **Private Inheritance** | `class Derived : private Base`         | Public → Private<br>Protected → Private<br>Private → Not Inherited | Strong encapsulation. Inherited members are not accessible to outside classes. |

from table we see that private datamember of any class can not be inherited.



## 3. Polymorphism
when things exist in multiple form this concept is known as polymorphism
it is of 2 types
1. Compile time Polymorphism, Static Polymorphism
2. Run time Polymorphism, Dynamic Polymorphism

### 1. Compile time Polymorphism
it is also known as early Binding or static Polymorphism. In Compile time polymorphism we know that which things exist in which form during compile time, before the run time.

if have 2 type
#### Function Overloading
When a 2 or more Function having same Name but different Parameter, this is known as Function Overloading

#### Operator Overloading
the ability to provide the operators with a special meaning for particular data type, this ability is known as operator overloading.

Operator Overloading

Suntax ```return_type operator (operator_name) (input)```
in input we usually consider second operand.

Operator that cannot be overloaded

| Operator   | Name/Description                          | Reason Why It Can't Be Overloaded                    |
|------------|--------------------------------------------|------------------------------------------------------|
| `::`       | Scope resolution operator                  | Compiler-resolved at compile time                   |
| `.`        | Member access (dot operator)               | Used to directly access members, cannot be redefined|
| `.*`       | Pointer-to-member access                   | Similar to `.`, tightly bound to member access rules|
| `sizeof`   | Size-of operator                           | Evaluated at compile time                           |
| `typeid`   | Type identification operator               | Requires compile-time type info                     |
| `?:`       | Ternary conditional operator               | Built-in conditional syntax, not overloadable       |
| `alignof`  | Alignment requirement operator             | Evaluated at compile time                           |
| `noexcept` | Exception specification check              | Compiler-evaluated, not a runtime operator          |
| `co_await` | Coroutine operator (since C++20)           | Special coroutine keyword, not an operator per se   |

### 2. Run time Polymorphism
it is also known as Dynamic Polymorphism, Run-time polymorphism means the program decides which function to use while it’s running, based on the actual object.

it is of 1 type
#### 1. Method Overriding/ Function Overiding
When a function have a same name and same parameter present in more than class, this is known as Method Over riding

Rules
1. The method pf parent class and the method of the child class must have the same name
2. the method of the parent class and the method of the child class have the same parameters
3. it is possible through inheritance Only.


## 4. Abstraction
Hiding the implementation detail and showing only functionality to user is known as Abstraction.