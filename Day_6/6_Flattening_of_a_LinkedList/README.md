# Problem 6 of Day 6: Flattening of a LinkedList

## Problem Statement

Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:

1. a next pointer to the next node,

2. a bottom pointer to a linked list where this node is head.

Each of the sub-linked-list is in sorted order.

Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order.

Note: The flattened list will be printed using the bottom pointer instead of the next pointer.

## Time Complexity

O(N\*log(K)), where `N` is the total number of nodes in the linked list and `K` is the number of levels in the multi-level linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `Node` to represent nodes of a multi-level doubly linked list. Each node has an integer value `data`, a pointer to the next node in the same level `next`, and a pointer to the node in the next level `bottom`.

2. The `merge` function takes two sorted lists and merges them into a single sorted list. It is used to merge the flattened lists at each level.

3. The `flatten` function takes the head of a multi-level doubly linked list as input and returns the head of the flattened list.

4. Inside the `flatten` function, it recursively flattens the next level using `flatten(root->next)`. Then, it merges the current level with the flattened next level using the `merge` function.

5. The flattened list is returned.

6. In the `main` function, an example multi-level linked list is created, and its original state is printed.

7. The `flatten` function is called to flatten the list.

8. The flattened list is printed to demonstrate the result.

9. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently flattens a multi-level doubly linked list. It has a time complexity of O(N\*log(K)), where `N` is the total number of nodes in the linked list and `K` is the number of levels in the multi-level linked list, and a space complexity of O(1), making it an optimal solution for this problem.
