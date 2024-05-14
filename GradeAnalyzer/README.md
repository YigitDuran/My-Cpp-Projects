# GradeAnalyzer

**Description:**

This C++ program simplifies grade management for multiple classes, students, and courses. It allows you to:

1. **Input Grades:**  Collect grades from the user for each student in each course.
2. **Calculate Course Averages:** Determine the average grade for each course across all classes.
3. **Assign Letter Grades:** Convert numerical grades into letter grades (A, B, C, D, F) based on a standard grading scale.

**How to Use:**

1. **Compile:** Compile the code using a C++ compiler (e.g., `g++ GradeAnalyzer.cpp -o GradeAnalyzer`).
2. **Run:** Execute the compiled program (`./GradeAnalyzer`).
3. **Input Grades:**  Follow the prompts to enter grades for each student in each class and course.
4. **Output:** The program will display:
   * The average grade for each course.
   * A table of letter grades for each student in each class and course.

**Example Output:**

78.3333
85.6667
92.3333
65.6667
77.3333

 B A A D C B C A F D
A B C C D F A B C D
B C D F C A B C F A

**Code Structure:**

* **`readGrades`:** Function to input grades from the user.
* **`course_avg`:** Function to calculate the average grade for each course.
* **`assignGrade`:** Function to assign letter grades based on numerical grades.
* **`main`:** The main function coordinates the program's execution.

**Data Structures:**

* **`grades`:** A 3D array to store grades (3 classes x 10 students x 5 courses).
* **`courseAverages`:** An array to store the average grade for each course.
* **`lettersGrades`:** A 3D array to store letter grades.

**Assumptions:**

* All grades are between 0 and 100.
* The grading scale is:
   * 90-100: A
   * 80-89: B
   * 70-79: C
   * 60-69: D
   * 0-59: F