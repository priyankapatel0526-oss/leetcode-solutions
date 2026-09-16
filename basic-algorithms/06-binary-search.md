# Binary Search

## Problem: Binary Search (Easy–Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers, left and right, to search the sorted array.
I calculated the middle position and compared the middle value with the target.
The search area is reduced by half after each comparison.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

I tested the program with two test cases in VS Code.
The first test case found the target at index 4.
The second test case did not find the target and returned -1.
The solution was also accepted on LeetCode.