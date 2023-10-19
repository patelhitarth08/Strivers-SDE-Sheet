# Problem 4 of Day 5: Remove N-th node from back of LinkedList

## Problem Statement

The problem involves removing the nth node from the end of a singly linked list and returning the head of the modified list. 

## Time Complexity

O(N)

## Space Complexity

O(1)

## Code Explanation

The code solves the problem using the following approach:

1. It defines a class `ListNode` to represent the nodes of the singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `removeNthFromEnd` function takes the head of the linked list and an integer `n` as input. It returns the head of the linked list after removing the nth node from the end.

3. Inside the `removeNthFromEnd` function, it first iterates through the linked list to count the total number of nodes. This is done by moving a pointer `current` from the head to the end while incrementing a `count` variable.

4. It then calculates the position of the node to be removed, which is `count - n`.

5. The function reinitializes `current` to the head of the linked list and iterates to the node just before the one to be removed. If `count - n` is zero, it means the head of the list is to be removed. If it's not zero, it updates the `next` pointer of the node just before the target node to bypass the target node.

6. The target node is stored in a temporary pointer `temp` for deletion.

7. Finally, the function returns the modified head of the linked list.

8. In the `main` function, an example linked list is created and displayed. The value of `n` is specified, and the `removeNthFromEnd` function is called to remove the nth node from the end.

9. The modified linked list is then displayed.

The code efficiently removes the nth node from the end of a singly linked list in a two-pass approach. It has a time complexity of O(N) and a space complexity of O(1). This approach is efficient for removing nodes from the end without using extra data structures.
