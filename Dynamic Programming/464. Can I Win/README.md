# 464. Can I Win

## Topic
Dynamic Programming

## Idea
Represent the chosen numbers using a bitmask. For every game state, recursively try each unused number. If any choice forces the opponent into a losing state, the current state is winning. Memoize results for each state to avoid recomputation.

## Complexity

- Time: O(n × 2^n)
- Space: O(2^n)