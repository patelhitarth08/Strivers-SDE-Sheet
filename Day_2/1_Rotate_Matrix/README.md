# Problem 1 of Day 2: Rotate Matrix

## Problem Statement

The "Rotate Matrix" problem involves rotating an n x n 2D matrix by 90 degrees clockwise. The goal is to modify the input 2D matrix directly, without allocating another 2D matrix for the rotation. This problem requires an in-place matrix rotation.

## Time Complexity

(n^2)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `reverse` function is defined to reverse a 1D vector. It's used for inverting rows after transposing the matrix.

2. The `rotate` function takes a reference to a 2D matrix as input. It begins by calculating the size of the matrix, assuming it's an n x n square matrix.

3. The first step is to transpose the matrix in place. This is achieved by iterating through the upper triangle of the matrix (i.e., ignoring the diagonal and the lower triangle) and swapping corresponding elements. The transposition switches rows and columns, effectively turning rows into columns and columns into rows.

4. After transposing, the rows have become columns, but they need to be reversed to complete the 90-degree clockwise rotation. The code calls the `reverse` function on each row to invert the elements in each row.

5. The result is a 2D matrix that has been rotated 90 degrees clockwise in place.

The main function demonstrates how to use the `rotate` function by providing an example matrix `arr`. It then prints the rotated image, confirming that the algorithm effectively performed the in-place rotation.

This code offers a concise and efficient solution to the problem of rotating a 2D matrix in place, following the required clockwise direction. It avoids allocating another matrix and instead modifies the input matrix directly.
