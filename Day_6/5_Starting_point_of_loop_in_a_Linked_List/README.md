# Problem 5 of Day 6: Starting point of loop in a Linked List

## Problem Statement

The problem involves detecting a cycle in a linked list. A cycle occurs when there is a node in the list that can be reached again by continuously following the next pointers. The task is to determine if there is a cycle in the linked list and, if so, find the starting node of the cycle.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `detectCycle` function takes the head of the linked list as input and returns the starting node of the cycle if a cycle is present, and `NULL` otherwise.

3. Inside the `detectCycle` function, it uses two pointers (`slow` and `fast`) to traverse the linked list. The `fast` pointer moves twice as fast as the `slow` pointer.

4. If there is a cycle, the `fast` pointer will eventually catch up to the `slow` pointer. This is detected by a loop where the pointers meet.

5. After detecting the meeting point, it initializes another pointer (`curr`) to the head of the linked list and moves both `curr` and `slow` one step at a time. The node where they meet is the starting node of the cycle.

6. In the `main` function, two example linked lists are created, one with a cycle and one without.

7. The `detectCycle` function is called for each linked list, and whether there is a cycle and the starting node of the cycle are printed.

8. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently detects the presence of a cycle in a linked list and finds the starting node of the cycle. It has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
