# Problem 1 of Day 6: Find intersection point of Y LinkedList

## Problem Statement

The problem involves finding the intersection point of two singly linked lists, `headA` and `headB`. If the two linked lists have no intersection, the code should return `null`. If they intersect, the code should return the node where they intersect.

Here's an illustration:

```
list1: 1 -> 2 -> 3
                   \
                    6 -> 7 -> 8
                   /
      list2: 4 -> 5
```

In this example, the two linked lists intersect at node 3.

## Time Complexity

O(m + n), where `m` and `n` are the lengths of `headA` and `headB`, respectively.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `getIntersectionNode` function takes the heads of two linked lists, `headA` and `headB`, as input.

3. Inside the `getIntersectionNode` function, it first calculates the lengths of both linked lists, `lA` and `lB`, by traversing them.

4. If the length of `headA` is less than the length of `headB`, it swaps the heads to ensure `headA` is longer.

5. It calculates the absolute difference in lengths, `extra`, between the two linked lists.

6. It then advances the longer list (`headA`) by `extra` nodes so that both lists have the same number of nodes left to traverse before a potential intersection.

7. The code then iterates through both linked lists simultaneously. If an intersection exists, it will be found by comparing the nodes at each step.

8. If the code finds a node where `headA` and `headB` are equal, it returns that node as the intersection point.

9. If the code reaches the end of both linked lists without finding an intersection, it returns `null` to indicate no intersection was found.

10. In the `main` function, an example linked list setup is demonstrated.

11. The original linked lists are printed, and the result of finding the intersection is printed as well. If an intersection is found, it prints the value of the intersection node. If no intersection is found, it prints "No intersection found."

The code efficiently finds the intersection point of two linked lists without modifying the lists. It has a time complexity of O(m + n) and a space complexity of O(1), making it an optimal solution for this problem.