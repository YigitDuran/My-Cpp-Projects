# ProductExpiryChecker

**Description:**

This C++ program determines whether a product is fresh or expired based on today's date and the product's expiry date. It calculates the number of days the product has been expired or the remaining days until expiry.

**How it Works:**

1. **Input:**
   - Prompts the user to enter today's date (month and day separately).
   - Prompts the user to enter the product's expiry date (month and day separately).
   - Validates the input to ensure the entered dates are within acceptable ranges.
2. **Calculation:**
   - Converts the entered dates into total days elapsed since the beginning of the year (assuming 30 days per month).
   - Calculates the difference between the expiry date and today's date in days.
3. **Output:**
   - If the product is fresh, displays a message indicating the number of days remaining until expiry.
   - If the product is expired, displays a message indicating the number of days it has been expired.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ ProductExpiryChecker.cpp -o ProductExpiryChecker`).
2. **Run:** Execute the compiled program (`./ProductExpiryChecker`).
3. **Input:** Follow the on-screen prompts to enter today's date and the product's expiry date.

**Example:**

Enter the current month between 1 and 12, and press enter.
6
Enter the current day between 1 and 30, and press enter.
10
Enter the products expiry month between 1 and 12, and press enter.
7
Enter the products expiry day between 1 and 31, and press enter.
1

 Today's date(DD/MM): 10/06
Expiry date(DD/MM):  01/07

 The product is fresh, 21 days remaining until expiry.


**Key Features:**

* **User-friendly input:** Guides the user through the input process.
* **Input validation:** Ensures that the entered dates are valid.
* **Clear output:** Provides a concise message about the product's status.
* **Day calculation:** Accurately calculates the number of days expired or remaining, considering the simplified 30-day month assumption.