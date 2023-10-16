# Problem 4 of Day 3: Majority Element (n/3 times)

## Problem Statement

The problem involves finding elements in an array of N integers that appear more than N/3 times in the array. If such elements exist, they are returned; otherwise, an empty vector is returned.

## Time Complexity

O(N)

## Space Complexity

O(K), where K represents the number of distinct elements in the input array.

## Code Explanation

The code efficiently identifies elements that appear more than N/3 times in the given array using the following logic:

1. An unordered map named `freq` is used to count the occurrences of each element in the input array `nums`.

2. The code iterates through the array and counts the frequency of each element.

3. For each element in the `freq` map, if the frequency is greater than N/3, it is considered a majority element, and it is added to the `ans` vector.

4. The `ans` vector contains all elements that appear more than N/3 times in the array.

5. Finally, the `ans` vector is returned, which includes the majority elements, or it is empty if no such elements are found.

The code provides an efficient solution to the problem with a time complexity of O(N) and minimal space usage, making it suitable for large datasets.