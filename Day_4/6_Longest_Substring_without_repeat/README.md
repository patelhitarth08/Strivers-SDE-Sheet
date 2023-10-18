# Problem 6 of Day 4: Longest Substring without repeat

## Problem Statement

The problem involves finding the length of the longest substring in a given string `s` that does not contain any repeating characters.

## Time Complexity

O(n)

## Space Complexity

O(N), where N is size of map vector

## Code Explanation

The code solves the problem with the following approach:

1. Initialize the length of the longest substring without repeating characters `len` to 0.

2. Create a vector `mp` of size 256 (to represent all possible ASCII characters) and initialize all elements to -1. This vector will be used to store the last encountered index of each character in the string.

3. Initialize two pointers `left` and `right` to 0. These pointers will define the current substring window.

4. Iterate through the string `s` from left to right (incrementing the `right` pointer).

5. For each character `s[right]`, check if its last encountered index (in the `mp` vector) is not -1. If it's not -1, it means the character has already been encountered within the current window.

6. In this case, update the `left` pointer to either the last index of `s[right]` + 1 or the current value of `left`, whichever is greater. This operation ensures that the `left` pointer points to a position beyond the last occurrence of `s[right]` in the current window.

7. Update the last encountered index of `s[right]` in the `mp` vector to the current `right` index.

8. Calculate the length of the current substring (window) without repeating characters as `right - left + 1`.

9. Update the `len` variable to be the maximum of its current value and the length of the current substring.

10. Continue this process as the `right` pointer moves through the string, maintaining a sliding window without repeating characters.

11. The final value of `len` represents the length of the longest substring without repeating characters.

12. In the `main` function, an example string `str` is defined, and the `lengthOfLongestSubstring` function is called to find and print the length of the longest substring without repeating characters in the string.

The code efficiently finds the length of the longest substring without repeating characters using a sliding window approach and keeps track of character indices using the `mp` vector. It has a time complexity of O(n) and is an optimal solution for this problem.