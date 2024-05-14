# CompanyEmployeeManager

**Description:**

This C++ project models a basic company structure with employees. It provides functionality to create a company, add employees, and find the youngest employee based on their age.

**Classes:**

* **`employee`:** Represents an individual employee with attributes like name, surname, ID, and age.
  * Provides a constructor to initialize employee details.
  * Includes a `printEmployee` method to display employee information.
  * Maintains a static counter (`count`) to track the total number of employee objects created.
* **`company`:** Represents a company with a name and a dynamic array to store employee objects.
  * Constructor to initialize company name and an empty employee list.
  * Destructor to deallocate memory used for the employee array.
  * `addEmployee` method to add a new employee to the company (**NOTE:** Currently, this method has a bug and needs to be corrected).
  * `findYoungestEmployee` method to identify and return the youngest employee within the company.
  * `print` method to display company details along with the information of all employees.

**How to Use (Illustrative):**

1. **Compilation:** Compile the project using a C++ compiler (e.g., `g++ *.cpp -o CompanyEmployeeManager`) 
2. **Execution:** Run the compiled executable (`./CompanyEmployeeManager`).
3. **Expected Output:** The program will currently print the company name and employee details (if added correctly).