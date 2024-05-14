# CompanyEmployeeRoster

**Description:**

This C++ project simulates a company employee roster. It allows you to create a company object, add employee information, and find the youngest employee.

**Classes:**

* **`Employee`:** 
   - Represents an individual employee with attributes: `name`, `surname`, `ID_number`, and `age`.
   - Includes constructors, getters, setters, and a `printEmployee` method to display employee details.
* **`Company`:**
   - Represents a company with a name (`company_name`), an array to store employee objects (`company_employees`), and an `employeeCount` to track the number of employees.
   - Includes constructors to initialize a company with or without initial employee data.
   - An `addEmployee` method to add an employee to the roster.
   - A `findYoungestEmployee` method to identify and return the youngest employee.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ *.cpp -o CompanyEmployeeRoster`).
2. **Run:** Execute the compiled program (`./CompanyEmployeeRoster`).
3. **Input:** Follow the prompts to enter the names, surnames, ID numbers, and ages of 8 employees.
4. **Output:** The program will display the details of the youngest employee in the company.

**Example Output:**

Enter name of the employee 1:
John
Enter surname of the employee 1:
Doe
Enter ID number of the employee 1:
12345
Enter age number of the employee 1:
35
ID number: 12345
Name, surname: John Doe
Age: 35
// (Input for employees 2-8)

 Youngest Employee
ID number: 54321
Name, surname: Jane Smith
Age: 28