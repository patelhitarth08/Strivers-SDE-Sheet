# Problem 4 of Day 1: Kadane's Algorithm

## Problem Statement

The "Kadane's Algorithm" problem involves finding the subarray within an integer array `nums` that has the largest sum and returning that sum. This algorithm is highly efficient and is widely used to solve the maximum subarray sum problem.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The algorithm initializes two variables, `maxTillNow` and `maxEnd`, both initially set to zero. `maxTillNow` keeps track of the maximum subarray sum found so far, and `maxEnd` tracks the maximum subarray sum ending at the current element.

2. The code iterates through the array `nums`, and for each element, it adds that element to `maxEnd`. If `maxEnd` becomes greater than `maxTillNow`, it updates `maxTillNow` to the current `maxEnd`. This step continuously calculates the maximum subarray sum ending at the current element.

3. If `maxEnd` becomes negative, it is reset to zero, as a negative sum wouldn't contribute to a maximum subarray sum. The algorithm maintains the sum as long as it remains positive.

4. Finally, the function returns the `maxTillNow`, which is the maximum subarray sum.

The main function demonstrates how to use the `maxSubArray` function by providing an example array `nums`. It then prints the result, which is the maximum subarray sum for the given array.

Kadane's Algorithm is a highly efficient method for solving the maximum subarray sum problem, and the provided code offers a clear and concise implementation of this algorithm.