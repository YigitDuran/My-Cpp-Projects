# MeasurementExperiment

**Description:**

This C++ project provides a class (`experiment`) for managing a series of measurements. The class dynamically allocates an array to store measurements, allows you to add measurements up to a predefined capacity, and provides functionality to print the measurements.

**Class: `experiment`**

- **Members:**
    - `measurementCount`: Stores the maximum number of measurements allowed.
    - `measurements`: A dynamically allocated array to hold the measurement values.
    - `measurementIndex`: Keeps track of the next available slot in the `measurements` array.
- **Constructors:**
    - Default constructor: Initializes an empty experiment with no measurements.
    - Parameterized constructor: Initializes an experiment with a specified capacity for measurements and sets all initial values to 0.0.
- **Destructor:** Deallocates the memory used for the `measurements` array.
- **Methods:**
    - `addMeasurement(double measurement)`: Adds a measurement to the array if there's space. Returns a reference to the `experiment` object for method chaining.
    - `printMeasurements()`: Prints all the added measurements to the console.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ *.cpp -o MeasurementExperiment`).
2. **Run:** Execute the compiled program (`./MeasurementExperiment`).
3. **Output:** The program will create an `experiment` object, add some measurements, and print them to the console. 

**Example Output:**

Measurement 1 = 2.1
Measurement 2 = 3.2
Measurement 3 = 4.3
Measurement list is full. You can't add more measurements.