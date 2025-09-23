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

it have same name as class

constructor doesn;t have a return type

only called once (automatically), at object creation

Memmory allocation happen when constructor is called

Constructor are of three type

### 1. Non parameterized constructor

This Constructor doesn't contain any parameter

### 2. Parameterized Constructor

This Constructor contain parameters

### 3. Copy constructor

it is a special type of constructor (default) used to copy properties of one object into another

# S hallow copy & Deep Copy

# OOPS Has 4 major pillars

### 1. Encapsulation

### 2. inheritance

### 3. Polymorphism

### 4. Abstraction

# Encapsulation

Encapsulation is wrapping of data and memebr function in a single unit called class

it help us in data hiding by using private access modifier