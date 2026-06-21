# LeetCode Solutions

This repository contains my C++ solutions to various LeetCode problems. Each solution follows the standard LeetCode `Solution` class format and is designed to be efficient, optimized, and easy to understand.

## Solved Problems

### Arrays & Strings

#### 11. Container With Most Water

* File: `11_container_with_most_water.cpp`
* Approach:

  1. Use two pointers at opposite ends.
  2. Calculate the area between them.
  3. Move the pointer with smaller height.
  4. Track the maximum area obtained.

#### 20. Valid Parentheses

* File: `20_valid_parentheses.cpp`
* Approach:

  1. Use a stack to store opening brackets.
  2. Match closing brackets with stack top.
  3. Return false on mismatch.
  4. Return true if stack becomes empty.

#### 26. Remove Duplicates from Sorted Array

* File: `26_remove_duplicates_from_sorted_array.cpp`
* Approach:

  1. Use two pointers.
  2. Keep unique elements at the beginning.
  3. Overwrite duplicates.
  4. Return count of unique elements.

#### 27. Remove Element

* File: `27_remove_element.cpp`
* Approach:

  1. Traverse the array.
  2. Copy non-target values forward.
  3. Maintain a write pointer.
  4. Return new length.

#### 71. Simplify Path

* File: `71_simplify_path.cpp`
* Approach:

  1. Split path using '/'.
  2. Ignore '.' and empty strings.
  3. Use stack for directory navigation.
  4. Reconstruct canonical path.

#### 80. Remove Duplicates from Sorted Array II

* File: `80_remove_duplicates_from_sorted_array_2.cpp`
* Approach:

  1. Allow at most two occurrences.
  2. Maintain a write index.
  3. Skip extra duplicates.
  4. Return resulting length.

#### 88. Merge Sorted Array

* File: `88_merge_sorted_array.cpp`
* Approach:

  1. Start from the end of both arrays.
  2. Compare largest elements.
  3. Place larger value at final position.
  4. Continue until merged.

#### 125. Valid Palindrome

* File: `125_valid_palindrome.cpp`
* Approach:

  1. Ignore non-alphanumeric characters.
  2. Convert characters to lowercase.
  3. Use two pointers.
  4. Compare characters from both ends.

#### 169. Majority Element

* File: `169_majority_element.cpp`
* Approach:

  1. Apply Boyer-Moore Voting Algorithm.
  2. Maintain candidate and count.
  3. Update candidate when count becomes zero.
  4. Return majority candidate.

#### 189. Rotate Array

* File: `189_rotate_array.cpp`
* Approach:

  1. Reverse entire array.
  2. Reverse first k elements.
  3. Reverse remaining elements.
  4. Obtain rotated array.

---

### Stack

#### 150. Evaluate Reverse Polish Notation

* File: `150_evaluate_reverse_polish_notation.cpp`
* Approach:

  1. Push operands onto stack.
  2. Pop top two values for operators.
  3. Compute result.
  4. Push result back.

#### 155. Min Stack

* File: `155_min_stack.cpp`
* Approach:

  1. Maintain main stack.
  2. Maintain auxiliary minimum stack.
  3. Update minimum during push/pop.
  4. Retrieve minimum in O(1).

#### 402. Remove K Digits

* File: `402_remove_k_digits.cpp`
* Approach:

  1. Use a monotonic increasing stack.
  2. Remove larger previous digits when possible.
  3. Remove remaining digits if k is left.
  4. Remove leading zeros and return answer.

---

### Monotonic Stack

#### 496. Next Greater Element I

* File: `496_next_greater_element_I.cpp`
* Approach:

  1. Traverse nums2 from right to left.
  2. Maintain a decreasing stack.
  3. Store next greater elements in a hash map.
  4. Build answer for nums1 using map lookups.

#### 503. Next Greater Element II

* File: `503_next_greater_element_II.cpp`
* Approach:

  1. Treat array as circular.
  2. Traverse from 2*n-1 to 0.
  3. Use monotonic decreasing stack.
  4. Store next greater value for each position.

---

### Binary Trees

#### 100. Same Tree

* File: `100_same_tree.cpp`
* Approach:

  1. Compare current nodes.
  2. Recursively compare left subtrees.
  3. Recursively compare right subtrees.
  4. Return true if identical.

#### 101. Symmetric Tree

* File: `101_symmetric_tree.cpp`
* Approach:

  1. Compare left and right subtrees.
  2. Check mirror symmetry recursively.
  3. Compare node values.
  4. Return true if symmetric.

#### 104. Maximum Depth of Binary Tree

* File: `104_maximum_depth.cpp`
* Approach:

  1. Recursively calculate left depth.
  2. Recursively calculate right depth.
  3. Take maximum depth.
  4. Add one for current node.

#### 226. Invert Binary Tree

* File: `226_invert_binary_tree.cpp`
* Approach:

  1. Swap left and right child.
  2. Recursively invert left subtree.
  3. Recursively invert right subtree.
  4. Return root node.

---

## How to Use

Compile any solution using:

```bash
g++ filename.cpp -o output
./output