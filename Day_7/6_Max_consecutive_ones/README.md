# Problem 6 of Day 7: Max consecutive ones

## Problem Statement

The problem involves finding the maximum number of consecutive 1s in a binary array and returning the count.

## Time Complexity

O(n), where `n` is the number of elements in the array.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a function `findMaxConsecutiveOnes` that takes a vector of integers `nums` as input and returns an integer representing the maximum number of consecutive 1s in the array.

2. Inside the `findMaxConsecutiveOnes` function, it initializes two variables: `count` to keep track of the current consecutive 1s count and `ans` to store the maximum count.

3. It iterates through the input vector `nums` and updates the `count` when encountering consecutive 1s.

4. When a 0 is encountered, it updates the `ans` with the current `count` and resets `count` to 0.

5. After the loop, it updates `ans` with the final `count` value.

6. The maximum consecutive 1s count is returned.

7. In the `main` function, an example vector `nums` is created, and the `findMaxConsecutiveOnes` function is called.

8. The maximum consecutive 1s count is printed.

The code efficiently finds the maximum consecutive 1s in a binary array and has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
