# Longest Common Prefix

## Problem: Longest Common Prefix (Easy–Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compare the characters of all strings at the same position.
I continue until the characters are different or one of the strings ends.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested the program with two test cases in VS Code.
The first test case returned "fl".
The second test case returned an empty prefix.
The solution was also accepted on LeetCode.