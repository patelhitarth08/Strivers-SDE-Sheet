# Problem 5 of Day 5: Add two numbers as LinkedList

## Problem Statement

The problem involves adding two non-empty linked lists that represent two non-negative integers. The digits in the linked lists are stored in reverse order, and each node contains a single digit. The task is to add the two numbers and return the sum as a linked list. It can be assumed that the two numbers do not contain any leading zeros, except for the number zero itself.

## Time Complexity

O(max(N, M)), where N and M are the lengths of the input linked lists `l1` and `l2`.

## Space Complexity

O(max(N, M)), where N and M are the lengths of the input linked lists `l1` and `l2`.

## Code Explanation

The code solves the problem using the following approach:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `addTwoNumbers` function takes two linked lists `l1` and `l2` as input and returns the head of the resulting linked list.

3. It initializes `carry` to 0, which will be used to handle the carry during addition.

4. It creates a new linked list `sum` and a pointer `sumhead` to keep track of the head of the result.

5. It sets `sum->next` to `NULL` to initialize the result linked list.

6. The code then iterates through both linked lists `l1` and `l2` simultaneously while there are digits left in either list.

7. During each iteration, it extracts the current digits from `l1` and `l2`, considering that one or both lists might have already reached the end.

8. It calculates the sum of the current digits and the carry, updates the carry for the next iteration, and calculates the current digit for the result.

9. It creates a new `ListNode` called `temp` with the current digit and appends it to the result linked list `sum`.

10. After both linked lists have been fully processed, the code checks if there is a carry left.

11. If there is a carry, it creates an additional node for the carry and appends it to the result linked list.

12. Finally, it updates the `sumhead` to point to the actual head of the result linked list and returns it.

13. In the `main` function, two linked lists `l1` and `l2` are created to represent two numbers. The original numbers are printed, and their sum is computed using the `addTwoNumbers` function. The result is then printed.

This code efficiently adds two numbers represented as linked lists with a time complexity of O(max(N, M)) and a space complexity of O(max(N, M)). This approach is ideal for solving this type of problem efficiently.