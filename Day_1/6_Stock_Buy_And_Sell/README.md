# Problem 6 of Day 1: Stock Buy and Sell

## Problem Statement

The "Stock Buy and Sell" problem involves maximizing your profit by buying one stock on a given day and selling it on a different day in the future. The input is an array of stock prices, where `prices[i]` is the price of the stock on the `i`-th day. The goal is to determine the maximum profit that can be achieved from this transaction. If no profit is possible, the function should return 0.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem by following these steps:

1. The algorithm initializes three variables: `min`, `diff`, and `n`. `min` is set to `INT_MAX` to represent the minimum stock price observed so far, `diff` tracks the maximum profit achieved, and `n` stores the number of days.

2. The code iterates through the array of stock prices, examining each day's price from left to right.

3. For each day, it compares the current stock price with the minimum price observed so far (stored in `min`). If the current price is lower than the minimum price (`prices[i] < min`), the minimum price (`min`) is updated to the current price.

4. Next, the code calculates the potential profit that could be earned by selling the stock on the current day (`prices[i] - min`) and compares it with the maximum profit achieved so far (`diff`). If the potential profit is greater than the current maximum profit, `diff` is updated with the potential profit.

5. This process continues for all days in the array, and the algorithm ensures that `min` always stores the minimum price observed, and `diff` stores the maximum profit achieved.

6. Finally, the function returns the maximum profit (`diff`).

The main function demonstrates how to use the `maxProfit` function by providing an example array of stock prices, `arr`. It then prints the maximum profit achievable with the provided data.

This code provides an efficient way to find the maximum profit achievable through a single buy and sell transaction, and it utilizes a straightforward approach that iterates through the array once.
