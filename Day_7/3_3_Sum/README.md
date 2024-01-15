# Problem 3 of Day 7: 3 Sum

## Problem Statement

The problem involves finding all unique triplets in an array that sum up to zero. The task is to return a vector of vector of integers containing these triplets.

## Time Complexity

O(n^2), where `n` is the number of elements in the array.

## Space Complexity

O(1) - Not considering the output space.

## Code Explanation

The provided code solves the problem as follows:

1. It defines a function `threeSum` that takes a vector of integers `nums` as input and returns a vector of vector of integers containing unique triplets that sum up to zero.

2. Inside the `threeSum` function, it first sorts the input vector `nums` in non-decreasing order.

3. It uses three pointers to iterate through the array: `i` for the first element, `f` for the second element, and `l` for the third element.

4. It uses a while loop to find all possible triplets. The loop continues until `f` is less than `l`.

5. Inside the loop, it calculates the sum of the current triplet (`nums[i] + nums[f] + nums[l]`).

6. If the sum is equal to zero, the triplet is added to a set to ensure uniqueness, and both `f` and `l` are updated to find other possible triplets.

7. If the sum is less than zero, it means that the current triplet is smaller than the target sum, so `f` is incremented.

8. If the sum is greater than zero, it means that the current triplet is larger than the target sum, so `l` is decremented.

9. Finally, it converts the set of unique triplets to a vector and returns the result.

10. In the `main` function, an example vector `nums` is created, and the `threeSum` function is called.

11. The result is printed to demonstrate the unique triplets with a sum of zero.

The code efficiently finds all unique triplets in an array that sum up to zero. It has a time complexity of O(n^2) and a space complexity of O(1), making it an optimal solution for this problem.
