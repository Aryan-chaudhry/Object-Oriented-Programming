# Class

Class is a bluepint of real word entities
class is a userdefined datatype that group  data member and member function into a single unit

example: Animal

# Object

Object is an instance of class

example: Dog

# Access Modifiers

It control the visibility of class member(data and function)

### 1. private 

data and method are accessible inside a class

### 2. public

data and methods accessible to every one

### 3. protected 

data and method accessible inside class and to its derived class

Note: by default access modifier in c++ is private

# This Pointer

This is a special pointer in c++ that points the current object

``` this->prop ``` is same as ``` *(this).prop ```

# Constructor

Constructor is a special method which invoke automatically at time of object creation. is is used to initialization

#### properties 

#### 1. it have same name as class

#### 2. constructor doesn;t have a return type

#### 3. only called once (automatically), at object creation

#### 4. Memmory allocation happen when constructor is called

Constructor are of three type

### 1. Non parameterized constructor

This Constructor doesn't contain any parameter

### 2. Parameterized Constructor

This Constructor contain parameters

### 3. Copy constructor

it is a special type of constructor (default) used to copy properties of one object into another

this is always shallow copy

# Shallow copy

A shallow copy of an object copies all member values from one object to another

it have same memmory reference

# Deep copy

A deep copy not only copies the member values bit also make copies of any dynamic allocated memory that the member point to.

it have new memmory allocated

# Destructor

Destructor is a special member function of a class that is executed automatically when an object go out of scope or deleted. it main purpose is to release resource that object require during its life time 

destructor can only deallocated statically allocated memory data member or  memebr function

### Then how to delete the object which use heap memmory

use delete 

### what if we dont delete

it cause memmory leak

#### --> Memmory leak happen when program allocate memmory using heap but forget or fail to deallocate it

#### --> as a result

#### --> That memmory stay reserverd and cannnot reused by the program 

#### --> Overtime, this caise the program to consume more and more memmory, which can slow down or crash the system```

``` ~ClassName(){} ```


# OOPS Has 4 major pillars

### 1. Encapsulation

### 2. inheritance

### 3. Polymorphism

### 4. Abstraction

# Encapsulation

Encapsulation is wrapping of data and memebr function in a single unit called class

it help us in data hiding by using private access modifier

# Inheritance

When a properties & member function of base class are passed on to the derived class it is known as inheritance

it is used for code reusability

### Modes of inheritance
![Mode of inheritance](image.png)

### Type of inheritance

#### 1. Single Inheritance

Single Inheritance means one base class and one derived class(derived class mean when that class inherit the properties and function of it base class)

#### 2. Multilevel Inheritance

Multilevel inheritance is a type of inheritance in c++ where class derived class inherit the properties of base class who also act like a base class for another class and like forming a chain of inheritance

#### 3. Multiple Inheritance

When a class is derived from more than one parent class it is called multiple inheritance

in Multiple inheritance Ambiguity occurs

##### Ambiguity is a state where compiler get confuse to choose which method who is present in more than one base class

##### How to handle 

it can me handled by scope resolution operator ```::```

```object.parentclassname::method```


#### 4. Hierarchial Inheritance

When more than one class inherit the property of same base class it is known as Hierarchial Inheritance

#### 5. Hybrid Inheritance

Hybrid inheritance is the combination of different type of inheritance