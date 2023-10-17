# Problem 6 of Day 3: Reverse Pairs

## Problem Statement

The problem involves finding the number of reverse pairs in an integer array `nums`. A reverse pair is a pair of indices `(i, j)` where `0 <= i < j < nums.length` and `nums[i]` is greater than `2 * nums[j]`.

## Time Complexity

O(n log n)

## Space Complexity

O(n)

## Code Explanation

The code efficiently calculates the number of reverse pairs using the following steps:

1. The `merge` function is defined to merge two sorted subarrays represented by indices `low` to `mid` and `mid + 1` to `high`. The merging is done into a temporary vector, and this function is used in the merge sort.

2. The `countPairs` function is responsible for counting the number of reverse pairs between the subarrays represented by indices `low` to `mid` and `mid + 1` to `high`. It utilizes a two-pointer approach to count the pairs and is called during the merge process.

3. The `mergeSort` function is a recursive function that divides the array into two halves, sorts each half, and counts the number of reverse pairs between the halves. It also merges the two halves. The total count of reverse pairs is accumulated and returned.

4. The `reversePairs` function initiates the process by calling the `mergeSort` function on the entire array.

5. In the `main` function, an example array `nums` is defined, and the `reversePairs` function is called to find the number of reverse pairs. The result, which is the count of reverse pairs, is then printed to the standard output.

The code provides an efficient solution for calculating the number of reverse pairs in an array using the merge sort algorithm. It achieves this with a reasonable space complexity, making it suitable for large arrays.
