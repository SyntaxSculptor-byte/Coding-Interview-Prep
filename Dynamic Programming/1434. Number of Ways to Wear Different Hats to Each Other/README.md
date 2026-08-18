# 1434. Number of Ways to Wear Different Hats to Each Other

## Topic
Dynamic Programming

## Status
✅ Accepted

## My Approach
This solution performs DP over `(mask, last_hat_used)`. For every DP state, it iterates over all larger hat numbers and assigns them to an unassigned person.

Although accepted, this transition explores many unnecessary states because every state repeatedly scans future hat numbers.

## Better Approach
A more optimized DP processes **hats as the outer loop**.

State:
- `dp[mask]` = number of ways to assign the hats processed so far.

Transition:
- For every hat, either skip it or assign it to one eligible unassigned person.

This reduces redundant transitions since each hat is processed exactly once and every mask is updated in place.

This is the standard optimized solution discussed in editorials.

## Complexity
### Current Solution
- Time: Higher than optimal due to repeatedly iterating over future hats.
- Space: O(41 × 2^n)

### Optimized Solution
- Time: O(40 × n × 2^n)
- Space: O(2^n)