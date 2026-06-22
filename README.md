# LeetCode Solutions

This repository contains my C++ solutions to various LeetCode problems. Each solution follows the standard LeetCode `Solution` class format and focuses on clean implementation, optimal approaches, and interview-oriented problem-solving techniques.

## Repository Structure

```text
LEETS/
├── 11_container_with_most_water.cpp
├── 20_valid_parentheses.cpp
├── 26_remove_duplicates_from_sorted_array.cpp
├── 27_remove_element.cpp
├── 71_simply_path.cpp
├── 80_remove_duplicates_from_sorted_array_2.cpp
├── 88_merge_sorted_array.cpp
├── 100_same_tree.cpp
├── 101_symmetric_tree.cpp
├── 104_maximum_depth.cpp
├── 125_valid_palindrome.cpp
├── 146_lru.cpp
├── 150_evaluate_reverse_polish_notation.cpp
├── 155_min_stack.cpp
├── 169_majority_element.cpp
├── 189_rotate_array.cpp
├── 226_invert_binary_tree.cpp
├── 402_remove_k_digits.cpp
├── 496_next_greater_element_I.cpp
├── 503_next_greater_element_II.cpp
├── 735_Asteroid_Collision.cpp
├── 907_sum_of_subarray_minimums.cpp
└── README.md
```

---

# Solved Problems

## Arrays & Strings

### 11. Container With Most Water

- File: `11_container_with_most_water.cpp`

**Approach:**

1. Place two pointers at opposite ends.
2. Calculate current container area.
3. Move pointer with smaller height.
4. Track maximum area found.

---

### 20. Valid Parentheses

- File: `20_valid_parentheses.cpp`

**Approach:**

1. Use a stack for opening brackets.
2. Match closing brackets with stack top.
3. Return false on mismatch.
4. Stack must be empty at the end.

---

### 26. Remove Duplicates from Sorted Array

- File: `26_remove_duplicates_from_sorted_array.cpp`

**Approach:**

1. Use two pointers.
2. Keep unique elements at the beginning.
3. Overwrite duplicates.
4. Return count of unique elements.

---

### 27. Remove Element

- File: `27_remove_element.cpp`

**Approach:**

1. Traverse the array.
2. Copy non-target values forward.
3. Maintain a write pointer.
4. Return resulting length.

---

### 71. Simplify Path

- File: `71_simply_path.cpp`

**Approach:**

1. Split path using '/'.
2. Ignore '.' and empty strings.
3. Use stack for navigation.
4. Reconstruct canonical path.

---

### 80. Remove Duplicates from Sorted Array II

- File: `80_remove_duplicates_from_sorted_array_2.cpp`

**Approach:**

1. Allow at most two occurrences.
2. Maintain write index.
3. Skip extra duplicates.
4. Return final length.

---

### 88. Merge Sorted Array

- File: `88_merge_sorted_array.cpp`

**Approach:**

1. Start from end of arrays.
2. Compare largest elements.
3. Place larger value at final position.
4. Continue until merged.

---

### 125. Valid Palindrome

- File: `125_valid_palindrome.cpp`

**Approach:**

1. Ignore non-alphanumeric characters.
2. Convert to lowercase.
3. Use two pointers.
4. Compare characters from both ends.

---

### 169. Majority Element

- File: `169_majority_element.cpp`

**Approach:**

1. Apply Boyer-Moore Voting Algorithm.
2. Maintain candidate and count.
3. Reset candidate when count becomes zero.
4. Return majority element.

---

### 189. Rotate Array

- File: `189_rotate_array.cpp`

**Approach:**

1. Reverse complete array.
2. Reverse first k elements.
3. Reverse remaining elements.
4. Array becomes rotated.

---

## Stack

### 150. Evaluate Reverse Polish Notation

- File: `150_evaluate_reverse_polish_notation.cpp`

**Approach:**

1. Push operands onto stack.
2. Pop two values for operators.
3. Evaluate expression.
4. Push result back.

---

### 155. Min Stack

- File: `155_min_stack.cpp`

**Approach:**

1. Maintain normal stack.
2. Maintain minimum stack.
3. Update minimum during push/pop.
4. Get minimum in O(1).

---

### 402. Remove K Digits

- File: `402_remove_k_digits.cpp`

**Approach:**

1. Use monotonic increasing stack.
2. Remove larger previous digits.
3. Remove remaining digits if needed.
4. Trim leading zeros.

---

## Monotonic Stack

### 496. Next Greater Element I

- File: `496_next_greater_element_I.cpp`

**Approach:**

1. Traverse nums2 from right to left.
2. Maintain decreasing stack.
3. Store next greater values.
4. Answer queries using hashmap.

---

### 503. Next Greater Element II

- File: `503_next_greater_element_II.cpp`

**Approach:**

1. Treat array as circular.
2. Traverse from 2*n−1 to 0.
3. Maintain decreasing stack.
4. Store next greater element.

---

### 735. Asteroid Collision

- File: `735_Asteroid_Collision.cpp`

**Approach:**

1. Use stack to simulate moving asteroids.
2. Positive asteroid moves right.
3. Resolve collisions with incoming negative asteroid.
4. Keep surviving asteroids.

**Topics:** Stack, Simulation

---

### 907. Sum of Subarray Minimums

- File: `907_sum_of_subarray_minimums.cpp`

**Approach:**

1. Find Previous Smaller Element.
2. Find Next Smaller Element.
3. Calculate contribution of each element.
4. Sum all contributions modulo \(10^9+7\).

**Topics:** Monotonic Stack, Contribution Technique

---

## Linked List

### 146. LRU Cache

- File: `146_lru.cpp`

**Approach:**

1. Use Doubly Linked List for ordering.
2. Use HashMap for O(1) lookup.
3. Move recently accessed nodes to front.
4. Remove least recently used node when capacity exceeds.

**Topics:** Linked List, HashMap, Design

---

## Binary Trees

### 100. Same Tree

- File: `100_same_tree.cpp`

**Approach:**

1. Compare current nodes.
2. Recursively compare left subtrees.
3. Recursively compare right subtrees.
4. Return true if identical.

---

### 101. Symmetric Tree

- File: `101_symmetric_tree.cpp`

**Approach:**

1. Compare left and right subtrees.
2. Check mirror symmetry.
3. Compare node values.
4. Return true if symmetric.

---

### 104. Maximum Depth of Binary Tree

- File: `104_maximum_depth.cpp`

**Approach:**

1. Compute left depth.
2. Compute right depth.
3. Take maximum.
4. Add one for current node.

---

### 226. Invert Binary Tree

- File: `226_invert_binary_tree.cpp`

**Approach:**

1. Swap left and right children.
2. Recursively invert left subtree.
3. Recursively invert right subtree.
4. Return root.

---





