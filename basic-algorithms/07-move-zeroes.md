# Move Zeroes

## Problem: Move Zeroes (Easy–Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position variable to keep track of where the next non-zero number should go.
I moved all non-zero numbers to the beginning of the array and filled the remaining positions with zeros.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the program with two test cases in VS Code.
The first test case returned 1 3 12 0 0.
The second test case returned 1 0 0.
The solution was also accepted on LeetCode.