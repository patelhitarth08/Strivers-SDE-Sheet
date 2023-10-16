# Problem 1 of Day 3: Search in a Sorted 2D Matrix

## Problem Statement

You are given an `m x n` integer matrix with the following properties:

1. Each row is sorted in non-decreasing order.
2. The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, your task is to determine whether `target` is present in the matrix. You must return `true` if `target` is in the matrix, and `false` otherwise. Importantly, your solution should have a time complexity of O(log(m \* n)).

## Time Complexity

O(log(m \* n))

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `searchMatrix` function accepts a 2D matrix `matrix` and a target integer `target` as input. The matrix is sorted such that each row is in non-decreasing order, and the first integer in each row is greater than the last integer in the previous row.

2. The code first determines the number of rows (`n`) and columns (`m`) in the matrix.

3. The function then uses two binary searches to find the target element in the matrix.

   - In the first binary search, it identifies the row that potentially contains the target element. It iteratively narrows down the range of rows that may contain the target until it finds the correct row.

   - In the second binary search, it searches for the target within the identified row.

4. If the target element is found during the second binary search, the function returns `true`. If the target element is not found, it returns `false`.

5. The `main` function demonstrates the usage of the `searchMatrix` function with an example matrix and target. It prints `true` if the target is found and `false` if it is not.
