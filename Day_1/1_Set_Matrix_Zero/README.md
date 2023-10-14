# Day 1: Set Matrix Zero

## Problem Statement

Given an m x n integer matrix `matrix`, if an element is 0, set its entire row and column to 0's.

## Time Complexity

O(m x n)

## Space Complexity

O(m + n)

## Code Explanation

The provided code solves the problem by following these steps:

1. It first determines the dimensions of the input matrix 'm' (number of rows) and 'n' (number of columns).

2. Two vectors, 'rows' and 'columns', are initialized to keep track of which rows and columns contain at least one 0.

3. It then iterates through the entire matrix using nested loops to identify the positions of 0s. When a 0 is encountered at matrix[i][j], it sets rows[i] and columns[j] to 1.

4. After identifying which rows and columns contain 0s, it proceeds to zero out these rows and columns. It does this by iterating through the rows vector and if rows[i] is 1, it sets all elements in that row to 0. Similarly, it iterates through the columns vector, and if columns[j] is 1, it sets all elements in that column to 0.

5. Finally, it prints the modified matrix, which now has the required rows and columns zeroed.
