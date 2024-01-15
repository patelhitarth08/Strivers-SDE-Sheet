# Problem 1 of Day 7: Rotate a LinkedList

## Problem Statement

The problem involves rotating a linked list to the right by `k` positions, where `k` is a non-negative integer. The task is to rotate the list in such a way that the rightmost nodes become the leftmost ones.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `rotateRight` function takes the head of the linked list and an integer `k` as input and returns the head of the rotated linked list.

3. Inside the `rotateRight` function, it calculates the length of the linked list and computes the effective rotation value by taking the remainder of `k` divided by the length.

4. If the effective rotation value is 0, the original linked list is returned since no rotation is needed.

5. Otherwise, it finds the new head of the rotated list by moving `len - k` steps from the head.

6. It updates the next pointer of the tail node to point to the original head, making it a circular linked list.

7. Then, it updates the head to the node found in step 5 and sets the next pointer of the node found in step 5 to `NULL` to break the circular structure.

8. In the `main` function, an example linked list is created, and its original state is printed.

9. The `rotateRight` function is called with the specified value of `k` to rotate the list.

10. The rotated list is printed to demonstrate the result.

11. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently rotates a linked list to the right by `k` positions. It has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
