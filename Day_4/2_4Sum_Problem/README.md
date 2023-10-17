# Problem 2 of Day 4: 4-Sum Problem

## Problem Statement

The problem involves finding unique quadruplets in an array of integers `nums` such that the sum of these quadruplets is equal to a given integer `target`. The quadruplets are represented as `[nums[a], nums[b], nums[c], nums[d]]`, and the following conditions must be satisfied:

- `0 <= a, b, c, d < n`, where `n` is the number of elements in `nums`.
- `a`, `b`, `c`, and `d` are distinct, meaning no two indices can be the same.
- `nums[a] + nums[b] + nums[c] + nums[d] == target`.

The code aims to find all such unique quadruplets that satisfy these conditions and return them in any order.

## Time Complexity

O(n^3)

## Space Complexity

O(1)

## Code Explanation

The code accomplishes the task using the following steps:

1. The `fourSum` function takes the `nums` array and the `target` as inputs. It starts by sorting the `nums` array in ascending order.

2. A vector `ans` is initialized to store the unique quadruplets.

3. The code iterates through the elements in the `nums` array using two nested loops, `i` and `j`, to select the first two numbers in the quadruplet. The loops avoid duplicate elements by skipping over consecutive equal elements.

4. For each pair of elements `(nums[i], nums[j])`, it calculates the `sum` of these two elements and then calculates the `remainedSum` required to reach the target.

5. The code then employs a two-pointer approach to find pairs of elements `(nums[start], nums[end])` that sum up to the `remainedSum`. These pointers are initialized to search within the remaining elements in the array.

6. When a pair `(nums[start], nums[end])` is found such that `nums[start] + nums[end] == remainedSum`, it is a valid quadruplet, and it is added to the `ans` vector.

7. The code continues the search, incrementing `start` if the sum is less than `remainedSum` and decrementing `end` if the sum is greater. This process avoids duplicates by skipping over consecutive equal elements.

8. The `ans` vector is returned, containing all unique quadruplets.

9. In the `main` function, an example array `nums` and a target value are defined, and the `fourSum` function is called to find the unique quadruplets that sum up to the target. The result is then printed to the standard output.

The code provides a practical solution to the 4-Sum problem with a time complexity of O(n^3), making it suitable for moderate-sized arrays. It efficiently handles duplicate elements and avoids duplicate quadruplets in the output.
