# 995. Minimum Number of K Consecutive Bit Flips

## Problem
Given a binary array `nums` and an integer `k`, return the minimum number of `k` consecutive bit flips required to make every element equal to `1`. If it is impossible, return `-1`.

## Approach
Use a greedy strategy with a queue to keep track of active flip windows.

- Traverse the array from left to right.
- Remove expired flip windows.
- Maintain the parity of active flips.
- If the current bit is effectively `0`, start a new flip window.
- If a flip would extend beyond the array, return `-1`.

## Complexity
- Time: O(n)
- Space: O(k) in the worst case (queue of active flips).