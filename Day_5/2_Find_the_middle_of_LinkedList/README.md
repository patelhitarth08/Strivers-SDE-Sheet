# Problem 2 of Day 5: Find the middle of LinkedList

## Problem Statement

Given the head of a singly linked list, the task is to return the middle node of the linked list. If there are two middle nodes, the code should return the second middle node.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Code Explanation

The code solves the problem using the following approach:

1. It defines a class `ListNode` to represent the nodes of the singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `middleNode` function takes the head of the linked list as input and returns the middle node of the list.

3. Inside the `middleNode` function, it initializes two pointers: `list` (to traverse the linked list) and `n` (to keep track of the number of nodes).

4. It starts by traversing the entire linked list with the `list` pointer, counting the number of nodes in the list (`n`).

5. Next, it calculates the index of the middle node by dividing `n` by 2 and adding 1. This is done to handle both odd and even-length lists. In the case of an even-length list, this will point to the second middle node.

6. It then reinitializes the `list` pointer to the head of the linked list and uses a `count` variable to iterate through the list again.

7. During the second iteration, the code stops when `count` reaches `n - 1`, which is the index of the second middle node.

8. The `list` pointer is now pointing to the second middle node, and it is returned as the result.

9. In the `main` function, an example linked list is created, and the middle node is determined using the `middleNode` function. The value of the middle node is then printed.

The code efficiently finds the middle node of a linked list, whether it has an odd or even number of nodes. It has a time complexity of O(n) and a space complexity of O(1). This approach is optimal for finding the middle node in a singly linked list.
