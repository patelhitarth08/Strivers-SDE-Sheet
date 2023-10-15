# Problem 3 of Day 2: Merge Two Sorted Arrays Without Extra Space

## Problem Statement

The "Merge Two Sorted Arrays Without Extra Space" problem involves merging two integer arrays, `nums1` and `nums2`, which are sorted in non-decreasing order. Additionally, you are given two integers, `m` and `n`, representing the number of elements in `nums1` and `nums2`, respectively.

The goal is to merge `nums2` into `nums1` to create a single array that is also sorted in non-decreasing order. The final sorted array should be stored within the `nums1` array.

## Time Complexity

O((m + n) log (m + n))

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `merge` function takes references to two vectors, `nums1` and `nums2`, and two integers, `m` and `n`. It starts by iterating through `nums2` and appending its elements to the end of `nums1`.

2. The loop runs from `m` to `m + n`, and for each element in `nums2`, it appends the element to `nums1` by subtracting `m` from the index. This is done to avoid overwriting elements in `nums1`.

3. After merging, the code calls the `sort` function to sort the entire `nums1` array, resulting in a single sorted array.

4. The main function demonstrates how to use the `merge` function by providing example arrays `nums1` and `nums2`, along with their sizes `m` and `n`. It then prints the merged array, confirming that the algorithm effectively merged two sorted arrays into a single sorted array in-place.

This code provides an efficient solution to the problem of merging two sorted arrays without requiring additional memory for the merged result. The code works for arrays sorted in non-decreasing order and maintains the sorted property during merging.
