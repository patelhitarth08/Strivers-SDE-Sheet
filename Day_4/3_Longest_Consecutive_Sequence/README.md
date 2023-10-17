# Problem 3 of Day 4: Longest Consecutive Sequence

## Problem Statement

The problem is to find the length of the longest consecutive elements sequence in an unsorted array of integers `nums`. A consecutive sequence is defined as a sequence of integers where each element differs from the previous element by exactly 1.

The algorithm to solve this problem must run in O(n) time complexity.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The code solves the problem using the following approach:

1. It starts by checking if the input array `nums` is empty. If it is, the function returns 0 since there are no consecutive elements.

2. If the array has only one element, the function returns 1, as the sequence containing a single element is considered a consecutive sequence.

3. The code then proceeds to sort the `nums` array. Although the problem requires an O(n) solution, the sorting step helps to efficiently identify consecutive elements in the sorted array.

4. It initializes two variables: `ans` to keep track of the longest consecutive sequence found and `count` to store the length of the current consecutive sequence. `count` is initially set to 1.

5. The code then iterates through the sorted array, starting from the first element.

6. If the current element is the same as the next element, it means that it is part of the same consecutive sequence, so the code continues to the next element.

7. If the next element is exactly one greater than the current element, it increments the `count` variable, indicating that the sequence is still consecutive.

8. If the next element is not exactly one greater than the current element, it means the current sequence has ended. In this case, the code updates the `ans` variable with the maximum value between `ans` and `count`, and then resets the `count` variable to 1.

9. The code repeats this process until it reaches the second-to-last element.

10. Finally, the code ensures that the longest consecutive sequence is not cut short if it extends to the last element. It updates the `ans` variable with the maximum between `ans` and `count` one more time.

11. The function returns the value of `ans`, which represents the length of the longest consecutive sequence.

12. In the `main` function, an example array `nums` is defined, and the `longestConsecutive` function is called to find and print the length of the longest consecutive sequence.

The code provides an efficient solution to finding the length of the longest consecutive sequence in an array while meeting the O(n) time complexity requirement. Sorting the array allows for easy identification of consecutive elements, and the logic efficiently tracks the length of consecutive sequences.
