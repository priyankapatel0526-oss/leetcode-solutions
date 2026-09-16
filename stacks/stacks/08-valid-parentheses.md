# Valid Parentheses

## Problem: Valid Parentheses (Easy–Medium)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store the opening brackets.
When a closing bracket is found, I check if it matches the most recent opening bracket.

If all brackets are matched correctly, the string is valid.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested the program with two test cases in VS Code.
The first test case returned Valid and the second test case returned Not Valid.
The solution was also accepted on LeetCode.