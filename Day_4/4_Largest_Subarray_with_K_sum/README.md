# Problem 4 of Day 4: Largest Subarray with K sum

## Problem Statement

The problem is to find the length of the largest subarray with a sum of 0 in an array containing both positive and negative integers.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Code Explanation

The code solves the problem by using the following approach:

1. It starts by calculating the prefix sum of the input array `nums` and stores it in a new array `prefixSum`. The prefix sum at each index `i` represents the cumulative sum of all elements from index 0 to `i` in the original array.

2. To calculate the prefix sum, the code iterates through the elements of `nums`, maintaining a running sum. The `prefixSum` array is filled with these cumulative sums, and they are also printed to aid in debugging.

3. An unordered map `map` is used to store the prefix sum values as keys and their corresponding indices as values. This map will help find the last index of any given prefix sum value.

4. The variable `lastZero` is initially set to -1, and it will be used to track the last occurrence of a prefix sum equal to 0.

5. The code then iterates backward through the `prefixSum` array (from the last element to the first). During this iteration, it populates the `map` with the prefix sum values and indices and also checks if the current prefix sum is equal to 0. If so, it updates `lastZero` with the current index.

6. The variable `ans` is initialized to -1. This variable will store the length of the longest subarray with a sum of 0.

7. The code iterates through the `prefixSum` array again, starting from the first element. For each prefix sum at index `i`, it calculates the length of the subarray with a sum of 0 by taking the absolute difference between the current index `i` and the index stored in the `map` for the corresponding prefix sum.

8. The `ans` is updated with the maximum value between the current `ans` and the calculated length, ensuring that it captures the length of the longest subarray with a sum of 0.

9. Finally, the `ans` is updated again by taking the maximum between the previously calculated `ans` and `lastZero + 1`. This step accounts for the possibility that the longest subarray with a sum of 0 might extend from the beginning of the array to `lastZero`.

10. The function returns the value of `ans`, which represents the length of the longest subarray with a sum of 0 in the input array.

11. In the `main` function, an example array `nums` is defined, and the `longestSubarray` function is called to find and print the length of the longest subarray with a sum of 0.

The code provides an efficient solution to find the length of the largest subarray with a sum of 0 in an array, achieving O(n) time complexity. It leverages the concept of prefix sums and uses a map to efficiently find the last occurrence of a given prefix sum value.
