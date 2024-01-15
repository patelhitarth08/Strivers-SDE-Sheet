# Problem 5 of Day 7: Remove Duplicate from Sorted array

## Problem Statement

The problem involves removing duplicates from a sorted array and returning the new size of the array. Additionally, it requires modifying the array to contain only the unique elements.

## Time Complexity

O(n), where `n` is the number of elements in the array.

## Space Complexity

O(k), where `k` is the number of unique elements in the array.

## Code Explanation

The provided code solves the problem as follows:

1. It defines a function `removeDuplicates` that takes a vector of integers `nums` as input and returns an integer representing the new size of the array after removing duplicates.

2. Inside the `removeDuplicates` function, it uses a set (`ans_set`) to store unique elements from the input vector `nums`.

3. It calculates the size of the set to get the number of unique elements (`m`).

4. It initializes a vector `ans` to store the unique elements.

5. It iterates through the set and adds each unique element to the vector `ans`.

6. The input vector `nums` is then updated to contain the unique elements.

7. The new size of the array (number of unique elements) is returned.

8. In the `main` function, an example vector `nums` is created, and the `removeDuplicates` function is called.

9. The new size of the array after removing duplicates is printed.

10. The modified array without duplicates is printed.

The code efficiently removes duplicates from a sorted array, calculates the new size, and modifies the array to contain only the unique elements. It has a time complexity of O(n) and a space complexity of O(k), making it an optimal solution for this problem.
