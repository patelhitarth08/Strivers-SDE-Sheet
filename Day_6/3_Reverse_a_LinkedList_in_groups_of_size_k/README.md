# Problem 3 of Day 6: Reverse a LinkedList in groups of size k

## Problem Statement

The problem involves reversing nodes in k-group in a linked list. The task is to reverse every k nodes in the linked list and return its head.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `reverseKGroup` function takes the head of the linked list and an integer `k` as input and returns the head of the modified linked list after reversing every k nodes.

3. Inside the `reverseKGroup` function, it uses a loop to reverse k nodes at a time. It initializes three pointers: `prev`, `curr`, and `next`.

4. The function enters the loop and reverses k nodes by changing the direction of next pointers. It keeps track of the previous and next nodes to maintain the connectivity.

5. If the count of reversed nodes is less than k and the end of the list is reached, it reverses the partially reversed nodes to maintain the original order.

6. The modified linked list is returned as the result.

7. In the `main` function, an example linked list is created, and its original state is printed.

8. The `reverseKGroup` function is called with the specified value of `k` to reverse nodes in k-groups.

9. The reversed linked list is printed to demonstrate the result.

10. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently reverses nodes in k-groups in a linked list. It has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
