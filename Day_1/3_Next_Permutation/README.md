# Problem 3 of Day 1: Next Permutation"

## Problem Statement

The "Next Permutation" problem deals with finding the lexicographically next greater permutation of an array of integers. A permutation of an array is an arrangement of its elements into a sequence or linear order. The problem involves finding the next permutation while maintaining the original array's elements.

For example, for an array `arr = [1,2,3]`, the permutations are `[1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1]`. The next permutation of `arr = [1,2,3]` is `[1,3,2]`. Similarly, the next permutation of `arr = [2,3,1]` is `[3,1,2]`. If there's no lexicographically greater arrangement, the array must be rearranged in the lowest possible order (sorted in ascending order), e.g., `arr = [3,2,1]` results in `[1,2,3]`.

The problem can be solved in place, using only constant extra memory.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. It first identifies a specific index, `index`, in the array where a change is needed. This index is determined by searching for the first element from the right that is less than the element immediately to its right.

2. If `index` is not found (i.e., no next permutation is possible), the code reverses the entire array, effectively sorting it in ascending order, and the process is complete.

3. If `index` is found, the code searches from the end of the array to find the smallest element greater than the element at `index`. These two elements are swapped.

4. After the swap, the elements to the right of `index` are reversed to ensure the smallest lexicographically greater permutation is achieved.

5. The main function demonstrates how to use the `nextPermutation` function by providing an example array `nums`. It prints the result of the next permutation of `nums`.
