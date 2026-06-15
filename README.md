# LeetCode Solutions

This repository contains my C++ solutions to various LeetCode problems. Each solution follows the standard LeetCode `Solution` class format and is designed to be efficient and easy to understand.

## Solved Problems

### Arrays & Strings

#### 11. Container With Most Water

* File: `11_container_with_most_water.cpp`
* Approach:

  1. Use two pointers at both ends of the array.
  2. Calculate the area formed by the pointers.
  3. Move the pointer with the smaller height to maximize area.

#### 20. Valid Parentheses

* File: `20_valid_parentheses.cpp`
* Approach:

  1. Use a stack to track opening brackets.
  2. Match each closing bracket with the stack top.
  3. Return true if all brackets are matched correctly.

#### 26. Remove Duplicates from Sorted Array

* File: `26_remove_duplicates_from_sorted_array.cpp`
* Approach:

  1. Use two pointers.
  2. Keep unique elements at the beginning of the array.
  3. Return the count of unique elements.

#### 27. Remove Element

* File: `27_remove_element.cpp`
* Approach:

  1. Traverse the array.
  2. Copy elements not equal to the target value.
  3. Return the new length.

#### 71. Simplify Path

* File: `71_simply_path.cpp`
* Approach:

  1. Split the path by '/'.
  2. Use a stack to process directory names.
  3. Reconstruct the canonical path.

#### 80. Remove Duplicates from Sorted Array II

* File: `80_remove_duplicates_from_sorted_array_2.cpp`
* Approach:

  1. Allow at most two occurrences of each value.
  2. Use a write pointer to update the array.
  3. Return the resulting length.

#### 88. Merge Sorted Array

* File: `88_merge_sorted_array.cpp`
* Approach:

  1. Start from the end of both arrays.
  2. Place the larger element at the last free position.
  3. Continue until all elements are merged.

#### 125. Valid Palindrome

* File: `125_valid_palindrome.cpp`
* Approach:

  1. Ignore non-alphanumeric characters.
  2. Compare characters using two pointers.
  3. Return true if the string is a palindrome.

#### 169. Majority Element

* File: `169_majority_element.cpp`
* Approach:

  1. Apply Boyer-Moore Voting Algorithm.
  2. Maintain a candidate and count.
  3. Return the majority element.

#### 189. Rotate Array

* File: `189_rotate_array.cpp`
* Approach:

  1. Reverse the entire array.
  2. Reverse the first k elements.
  3. Reverse the remaining elements.

---

### Stack

#### 150. Evaluate Reverse Polish Notation

* File: `150_evaluate_reverse_polish_notation.cpp`
* Approach:

  1. Use a stack for operands.
  2. Apply operators on the top elements.
  3. Push results back onto the stack.

#### 155. Min Stack

* File: `155_min_stack.cpp`
* Approach:

  1. Maintain a normal stack and a minimum stack.
  2. Update minimum values during push/pop operations.
  3. Retrieve the minimum element in O(1).

---

### Binary Trees

#### 100. Same Tree

* File: `100_same_tree.cpp`
* Approach:

  1. Recursively compare corresponding nodes.
  2. Check values and subtree structures.
  3. Return true if both trees are identical.

#### 101. Symmetric Tree

* File: `101_symmetric_tree.cpp`
* Approach:

  1. Compare left and right subtrees recursively.
  2. Verify mirror symmetry at each level.
  3. Return true if symmetric.

#### 104. Maximum Depth of Binary Tree

* File: `104_maximum_depth.cpp`
* Approach:

  1. Recursively compute depths of left and right subtrees.
  2. Take the maximum depth.
  3. Add one for the current node.

#### 226. Invert Binary Tree

* File: `226_invert_binary_tree.cpp`
* Approach:

  1. Swap left and right children.
  2. Recursively invert both subtrees.
  3. Return the root.

---

## How to Use

Compile any solution using:

```bash
g++ filename.cpp -o output
./output
```

Example:

```bash
g++ 20_valid_parentheses.cpp -o valid
./valid
```

## Notes

* Language: C++17
* Platform: LeetCode
* Each file contains a standalone LeetCode-style `Solution` class.
* Solutions focus on clarity, efficiency, and commonly accepted interview approaches.
