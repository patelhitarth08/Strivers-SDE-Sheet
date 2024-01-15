# Problem 4 of Day 7: Trapping Rainwater

## Problem Statement

The problem involves finding the total amount of rainwater that can be trapped between the blocks in an elevation map. The task is to return an integer representing the total trapped water.

## Time Complexity

O(n), where `n` is the number of elements in the elevation map.

## Space Complexity

O(n) - Using additional arrays for storing maximum heights from the front and rear.

## Code Explanation

The provided code solves the problem as follows:

1. It defines a function `trap` that takes a vector of integers `height` as input and returns an integer representing the total trapped water.

2. Inside the `trap` function, it initializes two vectors: `maxFromFront` and `maxFromRear`, both of size `n` (the number of elements in the height array).

3. It uses a loop to iterate through the `height` array and calculates the maximum height from the front and rear for each position. These maximum heights are stored in the `maxFromFront` and `maxFromRear` arrays.

4. After calculating the maximum heights, it uses another loop to iterate through the `height` array and calculates the trapped water at each position. The trapped water at a position is the minimum of the maximum heights from the front and rear minus the height at that position.

5. The trapped water at each position is accumulated to get the total trapped water.

6. The total trapped water is returned.

7. In the `main` function, an example vector `height` is created, and the `trap` function is called.

8. The result (total trapped water) is printed.

The code efficiently calculates the total amount of rainwater that can be trapped between the blocks in an elevation map. It has a time complexity of O(n) and a space complexity of O(n), making it an optimal solution for this problem.
