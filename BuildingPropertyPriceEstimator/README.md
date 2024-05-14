# BuildingPropertyPriceEstimator

**Description:**

This C++ project models buildings, houses, and shops with a class hierarchy and calculates their sale prices based on various factors. It demonstrates object-oriented programming (OOP) principles like inheritance and polymorphism.

**Class Hierarchy:**

*   **`building` (Base Class):**
    *   Represents a generic building with a number of floors (`m_numberOfFloors`) and a sale price (`m_salePrice`).
    *   Calculates a random sale price using `calculatePrice()`.
*   **`shop` (Derived from `building`):**
    *   Represents a shop with a type (`m_typeOfShop`).
    *   Overrides the `calculatePrice()` method to calculate a sale price based on the shop type and a random value.
    *   Prints shop information using `printInfo()`.
*   **`house` (Derived from `building`):**
    *   Represents a house with a number of rooms (`m_numberOfRooms`) and an array of floor areas (`m_ptr_listOfAreas`).
    *   Overrides the `calculatePrice()` method to calculate a sale price based on the number of rooms and a random value.
    *   Includes a copy constructor and assignment operator overload to properly handle dynamically allocated memory.
    *   Prints house information using `printInfo()`.

**How to Use:**

1.  **Compile:** Compile the code using a C++ compiler (e.g., `g++ *.cpp -o BuildingPropertyPriceEstimator`).
2.  **Run:** Execute the compiled program (`./BuildingPropertyPriceEstimator`).
3.  **Output:** The program will create instances of `building`, `shop`, and `house` objects and print their information, including calculated sale prices.

**Example Output:**

b1:
Number of floors: 0
Sale price:      0
...
s1:
Number of floors: 0
Sale price:      130194
Type of the shop:
...
h1:
Number of floors: 0
Sale price:      0
Number of rooms: 0
...
h2:
Number of floors: 5
Sale price:      50913
Number of rooms: 3
Area 1: 15
Area 2: 20
Area 3: 30
Area 4: 52
Area 5: 45

**Key Concepts Demonstrated:**

*   **Inheritance:** `shop` and `house` inherit from `building`.
*   **Polymorphism:** Overriding of the `calculatePrice()` method.
*   **Dynamic Memory Allocation:**  The `house` class manages an array of floor areas using `new` and `delete`.
*   **Copy Constructor and Assignment Operator:** Proper implementation to avoid double-deletion and memory leaks in `house`.

Let me know if you have any other questions!