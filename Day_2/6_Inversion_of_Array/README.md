# Readme for "Counting Inversions in an Array using Merge Sort"

## Problem Statement

The problem involves counting the number of inversions in an array of `N` integers using the merge sort algorithm. An inversion in an array is defined as follows:

For all indices `i` and `j` where `i < j` and `A[i] > A[j]`, a pair `(A[i], A[j])` represents an inversion.

The goal is to determine and count all such inversions in the given array of integers.

## Time Complexity

O(n log n)

## Space Complexity

O(n)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `merge` function is defined to merge two sorted subarrays, represented by indices `low` to `mid` and `mid + 1` to `high`, into a single sorted subarray. While merging, the function also counts the number of inversions. It uses a temporary vector `temp` to store the merged subarray and counts the inversions as elements are merged.

2. The variable `count` is used to keep track of the number of inversions.

3. The `mergeSort` function is a recursive function that divides the array into two halves, recursively sorts each half, and merges them using the `merge` function. The count of inversions is accumulated and returned.

4. The `numberOfInversions` function is called to initiate the inversion count. It returns the total number of inversions in the given array.

5. In the `main` function, an example array is defined, and the `numberOfInversions` function is called. The result, which is the count of inversions, is then printed to the standard output.
