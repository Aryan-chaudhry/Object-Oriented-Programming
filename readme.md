# Object-Oriented Programming

## Object : 

Object is an entity which have two things its state/Property and its behaviour
and, object is an instance of class

## class :

class is user defined data type 


We can access the property of class using ```.``` Operator



### Brainstrome concept of class

no of properties in a class == size of class 

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