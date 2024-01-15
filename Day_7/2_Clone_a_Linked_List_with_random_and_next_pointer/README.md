# Problem 2 of Day 7: Clone a Linked List with random and next pointer

## Problem Statement

The problem involves creating a deep copy of a linked list with random pointers. Each node in the linked list has a `val` (integer value), a `next` pointer to the next node in the list, and a `random` pointer to a random node in the list or `NULL`. The task is to return a deep copy of the linked list.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `Node` to represent nodes of a linked list. Each node has an integer value `val`, a pointer to the next node `next`, and a pointer to a random node `random`.

2. The `copyRandomList` function takes the head of a linked list with random pointers and returns the head of the deep copy.

3. Inside the `copyRandomList` function, it iterates through the original linked list and creates a copy of each node. The copy nodes are inserted after their corresponding original nodes.

4. It then sets the `random` pointer of each copy node based on the random pointer of its corresponding original node.

5. After setting the `random` pointers, it separates the original and copied linked lists by updating the `next` pointers.

6. The function returns the head of the copied linked list.

7. In the `main` function, an example linked list with random pointers is created, and its original state is printed.

8. The `copyRandomList` function is called to create a deep copy of the linked list.

9. The deep copy is printed to demonstrate the result.

10. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently creates a deep copy of a linked list with random pointers. It has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
