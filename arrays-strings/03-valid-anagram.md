# Valid Anagram

## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used an array of 26 integers to count the occurrences of each lowercase letter.
I increased the count for each character in the first string and decreased it for each character in the second string.
If all counts are zero, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the program with two test cases in VS Code.
The first test case returned Anagram and the second test case returned Not Anagram.
The solution was also accepted on LeetCode.