# Problem 5 of Day 3: Grid Unique Paths

## Problem Statement

The problem involves finding the number of unique paths in a grid of size `m x n`. You can move only rightward or downward to reach the bottom-right cell from the top-left cell. The goal is to calculate the number of unique paths that fulfill this constraint.

## Time Complexity

O(min(m, n))

## Space Complexity

O(1)

## Code Explanation

The code efficiently calculates the number of unique paths using the following logic:

1. The function `uniquePaths` takes two integer parameters, `m` and `n`, which represent the dimensions of the grid.

2. It calculates the total number of unique paths by using the combinatorial formula for combinations. The formula computes "m + n - 2 choose m - 1," where the result represents the number of unique paths. The code iteratively calculates the combinations using the formula in a loop and returns the result.

3. In the `main` function, the code demonstrates how to use the `uniquePaths` function to find the number of unique paths for different grid sizes. It prints the results to the standard output.

The code provides an efficient solution for calculating the number of unique paths in a grid with minimal space complexity, making it suitable for various grid dimensions.