# PopStarEliminator

**Description:**

This C++ program simulates a simplified "pop star" competition elimination process. It uses a 2D array to store candidate scores across various features, then iteratively eliminates the candidate with the lowest total score.

**Functionality:**

* **`eliminateCandidates` (Question 1):**
    * Takes a 2D array of candidate scores as input.
    * Calculates the total score for each candidate.
    * Identifies and returns the index (zero-based) of the candidate with the lowest score.
* **`eliminateCandidates_v2` (Question 2):**
    * Extends the functionality of `eliminateCandidates`.
    * Modifies the scores array to mark the eliminated candidate so that they are excluded in subsequent calls.
    * Enables repeated elimination calls to simulate multiple rounds.

**How to Use:**

1. **Compile:** Compile the code (e.g., `g++ PopStarEliminator.cpp -o PopStarEliminator`).
2. **Run:** Execute the compiled program (`./PopStarEliminator`).
3. **Input:** Enter the scores for each candidate (4 candidates, 5 features per candidate) when prompted.
4. **Output:** The program will print the indices of the eliminated candidates in the order of their elimination.

**Example:**

Input:
2 3 4 9 6
1 0 1 2 1
5 2 4 8 6
3 6 7 3 1

 Output:
2
4
1
3

**Implementation Notes:**

* **Version 1 (`eliminateCandidates`):**  
    * This function is stateless and does not modify the input array.
    * It's suitable for a single elimination round.
* **Version 2 (`eliminateCandidates_v2`):**
    * This function modifies the input array to track eliminated candidates.
    * The first score of the eliminated candidate is replaced with a large value, ensuring they are not selected again.
    * It allows for multiple elimination rounds.
* **Assumptions:**  
    * There are always 4 candidates.
    * There are always 5 features per candidate.
    * Input scores are non-negative integers.

**Limitations:**

* The current implementation uses a simple modification of the scores array to mark eliminated candidates. A more robust approach might involve a separate data structure to track elimination status.