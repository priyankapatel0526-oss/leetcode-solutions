# Best Time to Buy and Sell Stock

## Problem: Best Time to Buy and Sell Stock (Easy–Medium)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the lowest stock price seen so far.
For each price, I calculate the possible profit and keep the maximum profit found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested the program with two test cases in VS Code.
The first test case returned a maximum profit of 5.
The second test case returned 0 because no profit was possible.
The solution was also accepted on LeetCode.