# Object-Oriented Programming

## Object : 

Object is an entity which have two things its state/Property and its behaviour
and, object is an instance of class

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