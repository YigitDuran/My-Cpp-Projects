# NavalBattleSimulator

**Description:**

This C++ project simulates a naval battle between two fleets of ships: submarines and cruisers. It showcases object-oriented programming (OOP) principles, dynamic memory allocation, and basic combat mechanics.

**Classes:**

* **`naval_ship` (Base Class):**
    * Represents a generic naval vessel with attributes: 
        * `name`
        * `coordX`, `coordY` (coordinates)
        * `armor_rating`
        * `hit_points`
        * `is_sunk` (status)
    * Methods:
        * `sail_to`: Changes the ship's location.
        * `is_operational`: Prints whether the ship is operational or sunk.
        * `calculate_distance`: Calculates the distance between two ships.
        * `fired_upon`: Updates the ship's hit points after being attacked.
        * `attack`: (Virtual) Defines the attack behavior, overridden in derived classes.
* **`submarine` (Derived from `naval_ship`):**
    * Represents a submarine with additional attributes:
        * `firepower`
        * `weapon_range`
        * `ammo`
    * Overrides the `attack` method to simulate torpedo attacks.
* **`cruiser` (Derived from `naval_ship`):**
    * Represents a cruiser with additional attributes:
        * `firepower`
        * `weapon_range`
        * `ammo`
        * `hit_chance` (percentage chance of hitting a target)
    * Overrides the `attack` method to simulate cannon attacks.

**How to Use:**

1. **Compile:** `g++ *.cpp -o NavalBattleSimulator`
2. **Run:** `./NavalBattleSimulator`

The program will:

1. **Create Fleets:**  Initialize a fleet of one submarine and one cruiser.
2. **Create Pirate Ship:** Initialize a pirate ship.
3. **Simulate Attacks:** Each ship in the fleet attacks the pirate ship.
4. **Output:** Prints the results of each attack to the console, including hit/miss messages, damage dealt, and the ship's status.

**Example Output:**

Submarine1: Target is in range, firing torpedo!
Submarine1: Target hit!
Pirate1 sustained damage of 40. Remaining hit points = 70

 Cruiser1: Target is in range, attacking...
attack roll: 70
Cruiser1: Target hit!
Pirate1 sustained damage of 40. Remaining hit points = 30

 Submarine1: Target is in range, firing torpedo!
Submarine1: Target hit!
Pirate1 sustained critical damage and sunk...