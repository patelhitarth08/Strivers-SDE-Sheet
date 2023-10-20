# Problem 6 of Day 5: Delete given node in a Linked List

## Problem Statement

You are given a singly-linked list `head`, and you want to delete a node `node` from it. The node to be deleted is provided, and you will not have access to the first node of `head`.

All values in the linked list are unique, and it is guaranteed that the given node `node` is not the last node in the linked list. Deleting the given node means that:

- The value of the given node should no longer exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All values before `node` should remain in the same order.
- All values after `node` should remain in the same order.

## Time Complexity

O(1)

## Space Complexity

O(1)

## Code Explanation

The code is a C++ program that demonstrates how to delete a given node from a singly-linked list without accessing the first node of the list. Here's a high-level explanation of the code's logic:

1. A `ListNode` class is defined to represent the nodes of a singly-linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `deleteNode` function takes a `ListNode` as input, representing the node to be deleted. The function's purpose is to delete this node from the linked list.

3. To perform the deletion, we replace the value of the given `node` with the value of the next node, and we update the `next` pointer of the `node` to skip the next node in the list, effectively "deleting" it.

4. In the `main` function, an example linked list is created, and the original linked list is printed.

5. A specific node is selected for deletion (in this example, the second node).

6. The `deleteNode` function is called with the selected node as an argument, effectively deleting it from the linked list.

7. Finally, the linked list after the deletion is printed to show that the node has been successfully removed.

This code demonstrates a simple and efficient way to delete a given node from a singly-linked list without altering the order of other nodes. It is a useful technique when the head of the list is not accessible.