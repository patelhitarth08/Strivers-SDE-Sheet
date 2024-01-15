# Problem 1 of Day 8: N meetings in one room

## Problem Statement

The problem involves scheduling meetings and finding the maximum number of meetings that can be conducted without overlapping. The input consists of vectors `start` and `end`, where `start[i]` and `end[i]` represent the start and end times of the i-th meeting. Determine the maximum number of meetings that can be conducted.

## Time Complexity

O(n log n), where `n` is the number of meetings.

## Space Complexity

O(n)

## Code Explanation

The provided code solves the problem as follows:

1. It defines a function `maximumMeetings` that takes two vectors of integers `start` and `end` as input and returns an integer representing the maximum number of meetings that can be conducted.

2. Inside the `maximumMeetings` function, it creates a vector of pairs `meeting`, where each pair represents a meeting with start and end times.

3. It sorts the `meeting` vector based on the end times of the meetings in ascending order.

4. It initializes variables `ans` to 1 (to count the first meeting) and `lastEnd` to the end time of the first meeting.

5. It iterates through the sorted `meeting` vector and checks if the start time of the current meeting is greater than the `lastEnd`. If true, it means the meeting can be conducted without overlapping.

6. If the meeting can be conducted, it updates `lastEnd` with the end time of the current meeting and increments the `ans` count.

7. After the loop, it returns the final value of `ans`, representing the maximum number of meetings that can be conducted.

8. In the `main` function, an example set of start and end times for meetings are created, and the `maximumMeetings` function is called.

9. The maximum number of meetings that can be conducted is printed.

The code efficiently finds the maximum number of meetings that can be conducted without overlapping and has a time complexity of O(n log n) due to the sorting step and a space complexity of O(n), making it an optimal solution for this problem.
