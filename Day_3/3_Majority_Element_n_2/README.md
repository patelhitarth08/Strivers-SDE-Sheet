# Problem 3 of Day 3: Majority Element (>n/2 times)

## Problem Statement

The problem requires finding an element in an array of N integers that occurs more than N/2 times. It is assumed that such an element always exists in the array.

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code Explanation

The provided code efficiently identifies the majority element that occurs more than N/2 times in the given array. The logic is as follows:

1. A variable `majorityElement` is used to track the current majority element, and a variable `count` is used to count occurrences.

2. The code iterates through the array, and for each element:

   - If `count` is zero, the current element is assumed to be the majority element, and `count` is set to one.
   - If the current element matches the assumed majority element, `count` is incremented.
   - If the current element is different, `count` is decremented.

3. After the first pass, the code reiterates through the array to count the occurrences of the assumed majority element.

4. If the count of the assumed majority element is greater than or equal to N/2, the element is returned as the majority element; otherwise, -1 is returned to indicate that no majority element exists.

The code provides an efficient solution to the problem with a time complexity of O(N) and minimal space usage, making it suitable for large datasets.
