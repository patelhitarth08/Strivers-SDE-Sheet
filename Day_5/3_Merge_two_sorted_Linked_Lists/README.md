# Problem 3 of Day 5: Merge two sorted Linked Lists

## Problem Statement

The problem involves merging two sorted linked lists. Given the heads of two sorted linked lists, `list1` and `list2`, you need to merge the two lists into one sorted list. The list should be created by splicing together the nodes of the first two lists, and you should return the head of the merged linked list.

## Time Complexity

O(m + n), where `m` and `n` are the lengths of `list1` and `list2`.

## Space Complexity

O(1)

## Code Explanation

The code solves the problem using the following approach:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `mergeTwoLists` function takes the heads of two sorted linked lists, `list1` and `list2`, as input and returns the head of the merged sorted list.

3. Inside the `mergeTwoLists` function, it handles cases when one or both of the input lists are empty and returns the appropriate result accordingly.

4. It initializes a `mergedList` pointer to the head of the smaller list among `list1` and `list2`. The smaller list's head becomes the head of the merged list.

5. It then moves the head of the smaller list (`list1` or `list2`) to the next node, effectively removing it from its original list.

6. It sets the `head` pointer to the `mergedList` to keep track of the head of the merged list.

7. A `while` loop continues as long as both `list1` and `list2` have nodes. Inside the loop, it compares the values of the current nodes in `list1` and `list2`.

8. The smaller value is selected, and the corresponding node is appended to the `mergedList`. The `mergedList` pointer is updated to point to the newly added node.

9. The node that was added to the `mergedList` is removed from its original list by moving the pointer in the smaller list to its next node.

10. The loop continues until one of the input lists is fully processed.

11. After processing the loop, one of the input lists may have some nodes left. Two separate `while` loops handle this situation for each list, appending the remaining nodes to the `mergedList`.

12. Finally, it returns the head of the `mergedList`, which contains all the nodes of `list1` and `list2` in sorted order.

13. In the `main` function, two example linked lists, `list1` and `list2`, are created and displayed.

14. The code then calls the `mergeTwoLists` function to merge `list1` and `list2`.

15. The merged linked list is displayed to verify the correctness of the merging process.

The code efficiently merges two sorted linked lists in-place and has a time complexity of O(m + n), where `m` and `n` are the lengths of the input lists. It has a space complexity of O(1) and is suitable for merging sorted linked lists of any size.