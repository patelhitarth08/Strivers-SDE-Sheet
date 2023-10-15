# Problem 2 of Day 2: Merge Overlapping Sub-intervals"

## Problem Statement

The "Merge Overlapping Sub-intervals" problem involves merging overlapping intervals within an array of intervals. Each interval is represented as `[start, end]`, and the goal is to merge all overlapping intervals to create a non-overlapping set of intervals that covers all the original intervals.

## Time Complexity

O(n log n)

## Space Complexity

O(n)

## Code Explanation

The provided code solves the problem by following these steps:

1. The `merge` function takes a reference to a vector of intervals, `intervals`, as input. It calculates the number of intervals, `n`, and sorts them based on their start values. This sorting step is crucial for identifying overlapping intervals efficiently.

2. The code initializes an empty vector, `ans`, to store the merged intervals.

3. It then initializes two variables, `first` and `last`, to keep track of the start and end of the current merged interval. The code starts with the first interval in the sorted list.

4. The loop iterates through the sorted intervals starting from the second interval (index 1). It compares the start and end values of the current interval with the current merged interval.

5. If the current interval overlaps with the current merged interval (i.e., its start is less than or equal to the current merged interval's end), it extends the current merged interval by updating its end value to the maximum of the current interval's end value.

6. If the current interval does not overlap with the current merged interval (i.e., its start is greater than the current merged interval's end), it means the current merged interval is complete. The code adds it to the `ans` vector and initializes a new current merged interval with the start and end values of the current interval.

7. After the loop, the last merged interval is added to the `ans` vector.

8. The `ans` vector now contains the merged, non-overlapping intervals.

The main function demonstrates how to use the `merge` function by providing an example array of intervals, `arr`. It then prints the merged intervals, confirming that the algorithm effectively merged overlapping intervals into a non-overlapping set.
