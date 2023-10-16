# Problem 5 of Day 2: Find the Repeating and Missing Numbers

## Problem Statement

The problem "Find the Repeating and Missing Numbers" involves working with a read-only array of integers. The array contains `N` unique integers, with values in the range [1, N] (inclusive). However, two issues are present in the array:

1. A repeating number (`X`) appears twice.
2. A missing number (`Y`) is not present in the array.

The task is to identify both the repeating number (`X`) and the missing number (`Y`) in the array.

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `findMissingRepeatingNumbers` function takes a reference to a vector of integers, `nums`, as input.

2. It calculates the size of the input array, `n`, and computes the original sum, `originalSum`, using the formula for the sum of natural numbers.

3. The code then iterates through each element in the `nums` array and calculates the current sum, `currentSum`, by adding each element's value.

4. By subtracting the `originalSum` from the `currentSum`, the code calculates the difference `XMinusY`. This difference represents the difference of the repeating number (`X`) and the missing number (`Y`).

5. Next, the code computes the original square sum, `originalSquareSum`, using the formula for the sum of the squares of natural numbers.

6. It then iterates through the elements in the `nums` array and calculates the current square sum, `currentSquareSum`, by summing the squares of each element's value.

7. By subtracting the `originalSquareSum` from the `currentSquareSum`, the code calculates the difference `XsMinusYs`. This difference represents the difference of the squares of the repeating number (`X`) and the missing number (`Y`).

8. The code computes `XPlusY` by dividing `XsMinusYs` by `XMinusY`. This step helps determine the sum of `X` and `Y`.

9. Using the values of `XPlusY` and `XMinusY`, the code calculates `x` and `y`. `x` represents the repeating number (`X`), and `y` represents the missing number (`Y`).

10. The code returns a vector containing `x` and `y` as the final result.

11. The main function demonstrates how to use the `findMissingRepeatingNumbers` function by providing an example array of integers, `a`. It then prints the repeating and missing numbers, confirming that the algorithm effectively identifies both numbers within the given array.

This code provides an efficient solution to the problem of finding a repeating and missing number within an array. It uses mathematical formulas to compute the required values and obtain the missing and repeating numbers in a single pass through the array.
