# Codeforces Solutions

This repository contains my C++ solutions to various Codeforces problems. Each solution is written with competitive programming constraints in mind and follows an efficient approach.

## Problem List

### 1. 230A - Dragons
- File: `dragons.cpp`
- Difficulty: Easy
- Description:
  Kirito starts with a certain strength and must defeat all dragons. Each dragon requires a minimum strength to defeat and grants additional strength after being defeated.
- Approach:
  1. Store dragons as `(strength, bonus)` pairs.
  2. Sort dragons by required strength.
  3. Defeat dragons in order, increasing strength after each victory.
  4. If any dragon cannot be defeated, print `NO`; otherwise `YES`.

---

### 2. 1462A - Favorite Sequence
- File: `favorite_Sequence.cpp`
- Difficulty: Easy
- Description:
  Construct a new sequence by alternately taking elements from the beginning and end of the array.
- Approach:
  1. Use two pointers (`left` and `right`).
  2. Print the left element, then the right element.
  3. Move pointers inward until all elements are processed.

---

### 3. 2000B - Seating in Bus
- File: `seating_inBus.cpp`
- Difficulty: Easy
- Description:
  Determine whether passengers can be seated according to the given adjacency constraints.
- Approach:
  1. Track occupied seats.
  2. For every arriving passenger, verify at least one neighboring seat is occupied when required.
  3. Output `YES` if all conditions are satisfied; otherwise `NO`.

---

### 4. String Rotation Game
- File: `String_rotationGame.cpp`
- Difficulty: Easy
- Description:
  Analyze different rotations of a string and determine the best possible result according to the problem rules.
- Approach:
  1. Generate possible rotations.
  2. Evaluate each rotation.
  3. Return the optimal answer.

---

### 5. Your Name
- File: `your_Nmae.cpp`
- Difficulty: Easy
- Description:
  Process the given strings and determine whether the required condition holds.
- Approach:
  1. Read the input strings.
  2. Apply the required comparison logic.
  3. Print the corresponding result.

---

### 6. Notelock
- File: `notelock.cpp`
- Difficulty: Easy
- Description:
  Count the minimum number of protected positions while maintaining the required spacing constraint.
- Approach:
  1. Traverse the note sequence.
  2. Track the last protected position.
  3. Create a new protected position only when the gap condition is satisfied.
  4. Output the total count.

---

### 7. Discounts
- File: `discounts.cpp`
- Difficulty: Easy
- Description:
  Calculate the final cost after applying the discount rules specified in the problem.
- Approach:
  1. Read item prices and discount information.
  2. Apply the required discount strategy.
  3. Output the resulting value.

---

### 8. Journey
- File: `journey.cpp`
- Difficulty: Easy
- Description:
  Determine the optimal outcome for the journey based on the given constraints.
- Approach:
  1. Process the input parameters.
  2. Apply the mathematical/greedy logic required by the problem.
  3. Print the final answer.

---

### 9. Trippi Troppi
- File: `trippi_Troppi.cpp`
- Difficulty: Easy
- Description:
  Convert the ancient country name into its modern abbreviation.
- Approach:
  1. Read the three words forming the ancient name.
  2. Extract the first character from each word.
  3. Concatenate them and print the resulting abbreviation.

---

## How to Run

Compile any solution using:

```bash
g++ filename.cpp -o output
./output