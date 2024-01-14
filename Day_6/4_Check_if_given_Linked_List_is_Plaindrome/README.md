# Problem 4 of Day 6: Check if given Linked List is Plaindrome

## Problem Statement

The problem involves determining whether a linked list is a palindrome. A palindrome is a sequence that reads the same forwards as backward. The task is to check if the given linked list is a palindrome.

## Time Complexity

O(n), where `n` is the number of nodes in the linked list.

## Space Complexity

O(1)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a class `ListNode` to represent the nodes of a singly linked list. Each node has an integer value `val` and a pointer to the next node `next`.

2. The `reverseList` function takes the head of a linked list as input and returns the head of the reversed linked list.

3. The `isPalindrome` function takes the head of a linked list as input and returns a boolean value. It returns `true` if the linked list is a palindrome and `false` otherwise.

4. Inside the `isPalindrome` function, it uses two pointers (`slow` and `fast`) to find the middle of the linked list. It then reverses the second half of the linked list using the `reverseList` function.

5. After reversing the second half, it compares the values of nodes from the first half and the reversed second half. If all values match, the linked list is a palindrome.

6. In the `main` function, two example linked lists are created, and their original states are printed.

7. The `isPalindrome` function is called for each linked list, and whether it is a palindrome or not is printed.

8. Memory is deallocated by explicitly deleting the dynamically allocated nodes, but in practice, it is not necessary in many cases as the memory is automatically managed by the system when the program exits.

The code efficiently checks whether a linked list is a palindrome. It has a time complexity of O(n) and a space complexity of O(1), making it an optimal solution for this problem.
