# Problem 5 of Day 1: Sort an Array of 0's, 1's, and 2's

## Problem Statement

The "Sort an Array of 0's, 1's, and 2's" problem involves sorting an array consisting of only the elements 0, 1, and 2. The goal is to perform an in-place sort of the array without using built-in sorting functions. The expected solution is a single pass with O(N) time complexity and constant space complexity.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. Three pointers are used: `low`, `mid`, and `high`. These pointers represent the current positions of elements in the array as the algorithm progresses.

2. The algorithm begins by initializing `low` and `mid` to the first element (index 0) and `high` to the last element (index `n - 1`) of the array.

3. The code uses a while loop to iterate through the array. The `mid` pointer moves from the beginning to the end, and elements are compared to sort them into the correct categories.

4. When `nums[mid]` is equal to 0, it means that a 0 should be placed at the `low` position. So, the code swaps `nums[low]` and `nums[mid]`, incrementing both `low` and `mid`.

5. When `nums[mid]` is equal to 1, it means that a 1 is already in the correct position, so the `mid` pointer is simply incremented.

6. When `nums[mid]` is equal to 2, it means that a 2 should be placed at the `high` position. So, the code swaps `nums[mid]` and `nums[high]`, decrementing `high`.

7. The loop continues until `mid` is less than or equal to `high`, ensuring that all elements have been properly sorted into their respective categories.

8. As the loop progresses, 0s are moved to the left side of the array, 1s remain in the middle, and 2s are moved to the right side. This results in an array sorted in ascending order.

The main function demonstrates how to use the `sortArray` function by providing an example array `nums`. It then prints the sorted result, confirming that the Dutch National Flag algorithm effectively sorted the array in a single pass.
