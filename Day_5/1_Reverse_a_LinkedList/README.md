# Problem 1 of Day 5: Reverse a LinkedList

## Problem Statement

The problem involves reversing a singly linked list. Given the head of a singly linked list, you need to reverse the list and return the reversed list.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The code solves the problem using the following approach:

1. It defines a class `ListNode` to represent the nodes of the singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `reverseList` function takes the head of the linked list as input and returns the head of the reversed list.

3. Inside the `reverseList` function, it initializes three pointers: `current` (to traverse the original list), `prev` (to keep track of the previous node), and `next` (to temporarily store the next node).

4. It iterates through the linked list from the head (start) to the end (tail).

5. During each iteration, it updates the `next` pointer to store the next node (the node following the current node).

6. It then updates the `next` of the current node to point to the previous node, effectively reversing the direction of the node.

7. Next, it updates the `prev` pointer to be the current node and the `current` pointer to be the `next` node (the one temporarily stored in step 5).

8. This process continues until the `current` pointer reaches the end of the list.

9. After the loop completes, the linked list is fully reversed, and the `prev` pointer now points to the new head of the reversed list.

10. It sets the `reverse` variable to `prev`, which is the head of the reversed list.

11. Finally, it returns `prev`, which is the new head of the reversed linked list.

12. In the `main` function, an example linked list is created. The original linked list is printed, reversed using the `reverseList` function, and the reversed linked list is printed.

The code efficiently reverses a singly linked list in-place without using any additional data structures. It has a time complexity of O(n) and a space complexity of O(1). This approach is optimal for reversing a linked list.
