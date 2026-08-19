# 2999. Count the Number of Powerful Integers

## Topic
Dynamic Programming

## Status
✅ Accepted

## My Approach
Use Digit DP to count valid numbers in the range `[start, finish]`.

The DP constructs only the prefix of the number while forcing the suffix to match the given string `S`. At every prefix position, digits are restricted by the `limit` and the tight constraint. The final answer is obtained using:

`count(finish) - count(start - 1)`.

## Notes
This solution is accepted and uses a recursive memoized Digit DP. The suffix is checked explicitly in the base case instead of being incorporated as DP states, which keeps the state space small while remaining easy to understand.

## Complexity
- Time: O(number of digits × limit)
- Space: O(number of digits)