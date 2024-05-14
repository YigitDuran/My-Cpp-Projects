# MyArrayTemplate

**Description:**

This C++ project provides a template class `myArray<T>` to create dynamic arrays of any data type (`T`). It demonstrates the use of templates, constructors, destructors, and basic array operations.

**Class: `myArray<T>`**

* **Members:**
    * `size`: Stores the size (number of elements) of the array.
    * `data`: A pointer to the dynamically allocated array of elements.

* **Constructors:**
    * Default Constructor: Initializes an empty array with size 0.
    * Parameterized Constructor: Takes the size of the array as input, checks if it's positive, and dynamically allocates the array.
    * Copy Constructor: Creates a deep copy of another `myArray<T>` object.

* **Destructor:** Deallocates the memory used for the `data` array.

* **Methods:**
    * `assign_value_at_index(int i, T value)`: Assigns a value to the element at index `i`.  Checks for valid index values.
    * `retrieve_value_at_index(int i)`: Retrieves the value at index `i`. Checks for valid index values.
    * `getSize()`: Returns the size of the array.
    * `printArray()`: Prints all the elements in the array.

**How to Use:**

1. **Include Headers:** Include the `myArray.h` header file.
2. **Instantiate:** Create `myArray` objects specifying the desired data type (e.g., `myArray<int>`, `myArray<double>`, `myArray<std::string>`).
3. **Use Methods:** Call the `assign_value_at_index`, `retrieve_value_at_index`, `getSize`, and `printArray` methods as needed.

**Example Usage:**

```c++
myArray<int> myArray1(2);
myArray1.assign_value_at_index(0, 2);
myArray1.assign_value_at_index(1, 3);
myArray1.printArray();

myArray<int> myArray2(myArray1); // Copy constructor
myArray2.printArray();
