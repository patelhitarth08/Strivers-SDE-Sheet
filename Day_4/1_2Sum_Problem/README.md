# Problem 1 of Day 4: 2Sum Problem

## Problem Statement

The problem involves finding a pair of indices in an array of integers `nums` such that the elements at those indices add up to a given integer `target`. The objective is to return the indices of the two numbers that satisfy this condition. It is assumed that each input will have exactly one solution, and the same element cannot be used twice. The order in which the indices are returned doesn't matter.

## Time Complexity

O(n)

## Space Complexity

O(n)

## Code Explanation

The code accomplishes the task using the following steps:

1. The `twoSum` function takes the `nums` array and the `target` as inputs.

2. It initializes an unordered map `index` to store the elements in `nums` as keys and their indices as values. This map is used to look up the indices of elements that can form the target sum.

3. A vector `ans` of size 2 is created to store the indices of the two numbers that add up to the target.

4. The code iterates through the elements of `nums`. For each element `nums[i]`, it checks if there is another element `target - nums[i]` in the `index` map and ensures that the index is not the same as `i`. This check is essential to ensure that the same element is not used twice.

5. If such an element is found, its index is retrieved from the `index` map, and the current index `i` and the retrieved index are stored in the `ans` vector.

6. The `ans` vector is returned as the result.

7. In the `main` function, an example array `nums` and a target value are defined, and the `twoSum` function is called to find the indices of the elements that sum up to the target. The result is then printed to the standard output, showing the two numbers and the target sum.

The code provides an efficient solution for solving the 2Sum problem by using an unordered map to store indices and performing a single pass through the input array. The time complexity of O(n) makes it suitable for large arrays.