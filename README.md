# Library Management System

A C++ console application that simulates a library management system.
Built around core OOP principles using an abstract base class and three derived item types.

---

## System Design

```
LibraryItem (Abstract Base Class)
├── Book
├── Magazine
└── ResearchPaper
```

Each class overrides `displayInfo()` and `calculateLateFee()` with its own behavior.

---

## OOP Concepts Applied

| Concept | How It's Used |
|---|---|
| **Abstraction** | `LibraryItem` defines two pure virtual functions as a contract for all items |
| **Inheritance** | `Book`, `Magazine`, `ResearchPaper` all extend `LibraryItem` |
| **Polymorphism** | `LibraryItem*` array calls the correct method per object at runtime |
| **Encapsulation** | Private fields accessed only through getters/setters |

---

## Features

- Display full info for each library item
- Borrow an item (with or without a borrower name)
- Compare prices between any two items
- Calculate late fees (each type has its own rate logic)
- Track total items created via a static counter

---

## Late Fee Rates

| Type | Rate |
|---|---|
| Book | $1.50 / day |
| Magazine | $0.50 / day |
| ResearchPaper | $0.75/day (first 7), $1.00/day after |

---

## How to Run

```bash
g++ *.cpp -o library
./library
```

> Requires a C++11 or later compiler.

---

## File Structure

```
├── LibraryItem.h / .cpp   → Abstract base class
├── Book.h / .cpp          → Book implementation
├── Magazine.h / .cpp      → Magazine implementation
├── ResearchPaper.h / .cpp → ResearchPaper implementation
└── main.cpp               → Demo and testing
```
