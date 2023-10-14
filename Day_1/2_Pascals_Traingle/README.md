# Problem 2 of Day 1: Pascal's Triangle

## Problem Statement

Given an integer `numRows`, the task is to return the first `numRows` of Pascal's triangle. In Pascal's triangle, each number is the sum of the two numbers directly above it. It is a fascinating mathematical structure that has various applications.

![Pascal's Triangle](pascals_triangle.gif)

## Time Complexity

O(n^2)

## Space Complexity

O(n^2)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `makeRow` function is defined, which takes the previous row as input and generates the next row in the triangle. It does this by adding adjacent elements of the previous row and adding 1 to both ends.

2. The `generate` function is defined to generate Pascal's triangle. It initializes an empty vector of vectors (`ans`) to store the rows.

3. The code generates the first two rows (if `numRows` is 1 or 2) since these rows are fixed (containing only 1s) and then calculates the remaining rows using the `makeRow` function.

4. The main function demonstrates how to use the `generate` function for different values of `numRows`. It generates Pascal's triangle for several values of `numRows` and prints the result.
