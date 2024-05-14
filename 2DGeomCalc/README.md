# 2DGeomCalc - A 2D Geometry Calculator

**Description:**

This C++ program provides a simple menu-driven interface to perform calculations involving 2D geometric shapes:

* Calculate the distance between two points in a 2D plane.
* Calculate the circumference of a circle.
* Calculate the area of a circle.

The program utilizes three classes:

* **`point2D`:** Represents a point with x and y coordinates.
* **`line2D`:** Represents a line segment defined by two points.
* **`circle2D`:** Represents a circle with a center point and a radius.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ *.cpp -o 2DGeomCalc`).
2. **Run:** Execute the compiled program (`./2DGeomCalc`).
3. **Main Menu:**
   * Choose option `1` to enter the line2D/circle2D calculator.
   * Choose option `0` to exit the program.
4. **Calculator Menu:**
   * Choose option `1` to calculate distance between two points.
   * Choose option `2` to calculate the circumference of a circle.
   * Choose option `3` to calculate the area of a circle.
   * Choose option `0` to return to the main menu.
5. **Input:** Follow the prompts to enter the required information (coordinates of points, center, and radius).
6. **Output:** The program will display the calculated result.

**Example Usage:**


Enter '1' for line2D/circle2D calculator.
Enter '0' for terminating the program.
Enter '*' to go back to the selection menu.

 1

 Enter '1' and press enter to calculate the distance between two points.
Enter '2' and press enter to calculate the circumference of a circle2D.
Enter '3' and press enter to calculate the area of a circle2D.
Enter '0' and press enter to terminate the program.

 1

 Enter x coordinate of the starting point2D and press enter.

 1
Enter y coordinate of the starting point2D and press enter.
4
Enter x coordinate of the ending point2D and press enter.
5
Enter y coordinate of the ending point2D and press enter.

 9

 The distance between points A(1,4) and B(5,9)
= 6.40312

**Code Structure:**

* **`main.cpp`:**  Contains the `main` function, which handles the user interface and calls the appropriate functions from the classes.
* **`point2D.h`:**  Defines the `point2D` class.
* **`line2D.h`:** Defines the `line2D` class.
* **`circle2D.h`:** Defines the `circle2D` class.