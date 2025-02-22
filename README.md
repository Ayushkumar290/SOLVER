# Solver

This C++ program demonstrates the application of **Object-Oriented Programming (OOP)** concepts in various ways.

## 1. Class Definition
A class named **`Utility`** is defined. This class serves as a **blueprint** for creating objects that encapsulate functionalities for:
- **Calculations** (Addition, Subtraction, Multiplication, Division)
- **Area Finding** (Rectangle, Circle)
- **Unit Conversion** (Celsius to Fahrenheit & vice versa)
- **Modulo Operations**

## 2. Encapsulation
The **Utility** class encapsulates data (**member functions**) and behavior, ensuring:
✔ **Data Protection** – Restricting direct access to internal details.  
✔ **Modularity** – Promoting better organization and maintainability.

## 3. Member Functions
The class contains various **utility functions**, each representing a specific task:
- **Arithmetic Operations** → `add()`, `subtract()`, `multiply()`, `divide()`
- **Area Calculations** → `rectangleArea()`, `circleArea()`
- **Unit Conversion** → `convertCelsiusToFahrenheit()`, `convertFahrenheitToCelsius()`
- **Modulo Operation** → `expMod()` (Exponential Modulo Calculation)

## 4. Public and Private Members
- **Public Functions** – Accessible from outside the class (e.g., `add()`, `subtract()`, etc.).  
- **Private Functions** – Restricted within the class, ensuring better **code organization** and **data protection**.

## 5. Object Creation & Usage
In the `main()` function, an object of the **Utility** class named `util` is created. This object is then used to call various member functions and perform computations.

## OOP Principles in Action
✔ **Encapsulation:**  
- `add()`, `subtract()`, `multiply()`, `divide()` – Encapsulate logic for arithmetic operations.  
- `rectangleArea()`, `circleArea()` – Encapsulate shape-specific area calculations.  
- `convertCelsiusToFahrenheit()`, `convertFahrenheitToCelsius()` – Encapsulate temperature conversion logic.  
- `expMod()` – Encapsulates complex logic for **exponential modulo calculation**.

By following **OOP principles**, this program becomes:  
✅ **Organized** – Code is structured logically.  
✅ **Maintainable** – Easy to update and modify.  
✅ **Reusable** – Functions can be used in different scenarios without rewriting code.

This project serves as an **excellent example of OOP in C++**, making code more efficient and **modular**! 🚀

