# FieldTirednessMapper (FTM)

**Description:**

This C++ program calculates and tracks the "tiredness" of a rectangular field over time based on planting history. Tiredness represents how frequently a section of the field has been planted in previous years.

**How it Works:**

1. **Input:**
   - Reads the name of an input file containing planting information.
   - The file format includes:
     - Field dimensions (width and height)
     - For each year:
       - The year (e.g., 2016)
       - The number of plantings that year
       - For each planting:
         - Starting coordinates (x, y)
         - Ending coordinates (x, y)
2. **Initialization:**
   - Creates a 2D array (`tirednessMap`) representing the field, initializing all cells to 0 (no tiredness).
3. **Yearly Updates:**
   - Processes each year's planting data.
   - Creates a temporary copy of the tiredness map (`tirednessMap2`).
   - For each planting:
     - Increments tiredness by 1 in the planted area of `tirednessMap`.
   - After all plantings for the year:
     - Decrements tiredness by 1 in areas that were not planted that year (using `tirednessMap2` for comparison).
     - Ensures tiredness doesn't go below 0.
4. **Output:** 
   - Prints the final `tirednessMap` to the console, showing the accumulated tiredness for each cell in the field.

**How to Use:**

1. **Compile:** `g++ FieldTirednessMapper.cpp -o FieldTirednessMapper`
2. **Prepare Input:** Create a text file in the specified format (see examples in `fieldInfo*.txt`).
3. **Run:** `./FieldTirednessMapper <filename>` (Replace `<filename>` with your input file's name).

**Example:** (Using `fieldInfo1.txt`)

Output:
0 0 0 1 1
0 2 2 1 0
0 2 2 1 0
0 2 2 2 0
0 0 0 0 0