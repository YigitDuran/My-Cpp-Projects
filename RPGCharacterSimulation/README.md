# RPGCharacterSimulation

**Description:**

This C++ project simulates basic RPG (Role-Playing Game) characters using a hierarchy of classes. It includes three classes:

*   **`person`:** Base class representing a generic character with name, hunger level, location, and money.
*   **`sultan`:** Derived class from `person`, adding a `kingdom` attribute and a `tax` method.
*   **`merchant`:** Derived class from `person`, adding a `shop` attribute and a `trade` method.

**Functionality:**

*   Each class has constructors (default and parameterized) and a `print` method to display character details.
*   The `person` class includes `travel` and `eat` methods to modify location and hunger level.
*   The `sultan` class has a `tax` method to increase money.
*   The `merchant` class has a `trade` method to increase money.

**How to Use:**

1.  **Compile:** `g++ *.cpp -o RPGCharacterSimulation`
2.  **Run:** `./RPGCharacterSimulation`
3.  **Output:** The program will create and display example characters (person, sultan, and merchant) demonstrating their attributes and actions.

**Example Output:**

person default constructor
p1:
Name:

Hunger level: 100
Location:

Money:        0

 person 4 parameter constructor
p2:
Name:        bob
Hunger level: 70
Location:    england
Money:        400

 sultan default constructor
person default constructor
s1:
Name:

Hunger level: 100
Location:

Money:        0
Kingdom:

 sultan 5 parameter constructor
person 4 parameter constructor
s2:
Name:        henry
Hunger level: 70
Location:    greenland
Money:        500
Kingdom:      northland
...

**Potential Improvements:**

*   **Input Validation:** Add checks for valid input values to prevent errors.
*   **Error Handling:** Throw exceptions or provide more informative error messages.
*   **Enhanced Interactions:** Allow characters to interact with each other (e.g., trading, fighting).
*   **Game Logic:** Implement a basic RPG game loop with actions and events. 

Let me know if you have any other questions!