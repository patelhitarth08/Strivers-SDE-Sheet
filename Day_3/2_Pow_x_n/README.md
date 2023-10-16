# Problem 2 of Day 3: Pow(x, n)

## Problem Statement

The problem involves calculating the result of raising a given double `x` to an integer power `n`, effectively implementing the `pow(x, n)` function.

## Time Complexity

O(log(n))

## Space Complexity

O(log(n))

## Code Explanation

The provided code calculates `x` raised to the power `n` using a divide-and-conquer approach. The core idea is to divide the problem into subproblems and compute the result efficiently. Here's an explanation of the code's logic:

1. The `solve` function is a recursive function that computes `x` raised to the power `n`. It handles the base cases and recursively computes the result for subproblems.

   - If `n` is 0, it returns 1 since any number raised to the power of 0 is 1.
   - For other cases, it uses a divide-and-conquer approach: it calculates `x` raised to the power `n/2` (in the variable `half`), and then uses this result to efficiently compute `x` raised to the power `n`. The recursive calls reduce the number of multiplications required.

2. The `myPow` function is the entry point for the calculation. It takes care of handling negative exponents, as the result for `x` raised to the power `-n` is 1 divided by the result for `x` raised to the power `n`.

3. The `main` function demonstrates the usage of the `myPow` function by calculating `x` raised to the power `n` for different test cases. It prints the results.
