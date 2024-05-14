# BitMasker

**Description:**

This C++ program applies a bitmask to an integer input by the user. A bitmask is a binary pattern used to isolate specific bits within an integer. The program allows you to control the number of bits to mask, effectively extracting a portion of the binary representation.

**How it Works:**

1. **Input:** Prompts the user to enter an integer (`num`) and the number of bits to mask.
2. **Mask Generation:** Calculates a bitmask based on the specified number of bits. For example, a mask digit count of 3 would generate the mask 111 (binary) or 7 (decimal).
3. **Masking:** Performs a bitwise AND operation between the input integer and the generated mask. This operation effectively zeroes out all bits except those covered by the mask.
4. **Output:** Displays the original integer, the generated mask, and the resulting masked integer (both in decimal and binary representation for clarity).

**How to Use:**

1. Compile the code: `g++ BitMasker.cpp -o BitMasker`
2. Run the executable: `./BitMasker`
3. Follow the prompts to enter an integer and the desired number of bits to mask.

