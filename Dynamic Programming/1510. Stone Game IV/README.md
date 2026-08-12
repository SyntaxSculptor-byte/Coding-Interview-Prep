# 1510. Stone Game IV

## Approach

Top-down Dynamic Programming (Memoization).

For every perfect square that can be removed, if it makes the opponent lose, the current state is winning.

## Complexity

Time: O(n√n)

Space: O(n)