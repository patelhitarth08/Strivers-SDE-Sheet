# Problem 4 of Day 2: Find the Duplicate in an Array of N+1 Integers

## Problem Statement

The problem "Find the Duplicate in an Array of N+1 Integers" involves finding a duplicate element within an array of size `N + 1`. Each element in the array falls in the range from `1` to `N`. It is assumed that there is only one duplicate number in the array.

The goal is to identify and return the duplicate number within the given array.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `findDuplicate` function takes a reference to a vector of integers, `nums`, as input.

2. It calculates the size of the input array, `n`, and creates an auxiliary vector `freq` of size `n` to store the frequency of each number from `1` to `n`.

3. The code then iterates through each element in the `nums` array. For each element, it increments the corresponding index in the `freq` vector to keep track of how many times each number appears.

4. After counting the frequencies, the code iterates from `1` to `n-1` to find the element with a frequency greater than `1`, indicating the duplicate number. Once it identifies the duplicate, it returns the number.

5. If no duplicate is found, it returns `n`, which represents the last number in the range.

6. The main function demonstrates how to use the `findDuplicate` function by providing an example array of integers, `nums`. It then prints the duplicate element, confirming that the algorithm effectively identifies the duplicate number within the given array.

This code provides an efficient solution to the problem of finding a duplicate element in an array of integers within the specified range. It maintains a count of each element and quickly identifies the duplicate element based on the frequency recorded in the `freq` array.
