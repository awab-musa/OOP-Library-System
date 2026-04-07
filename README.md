# Library Management System

This project implements a Library Management System originally designed for a university setting, but generalized for use in any library environment. It demonstrates core Object-Oriented Programming concepts such as Abstraction, Inheritance, Polymorphism, and Encapsulation.

---

## Team Work
- Developer 1 → Base Class + Main Logic  
- Developer 2 → Derived Classes (Book, Magazine, ResearchPaper)

---

## OOP Concepts Used
- Abstraction  
- Inheritance  
- Polymorphism  
- Encapsulation  

---

## System Design
- LibraryItem → Base Class  
- Book  
- Magazine  
- ResearchPaper  

Each type has its own behavior using polymorphism.

---

## Features
- Borrow items (with or without user name)
- Compare prices between items
- Different late fee calculation for each type
- Clean and modular OOP design

---

## How to Run
```bash
g++ *.cpp -o library
./library
