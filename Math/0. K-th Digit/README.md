# K-th Digit

## Problem

Given an integer `k`, determine the `k`-th digit in the infinite sequence formed by arranging numbers in alternating blocks of ten numbers, where consecutive blocks are traversed in opposite directions.

## Approach

Instead of generating the sequence explicitly, the solution identifies the required digit mathematically.

1. Determine the digit length (`len`) of the number containing the required digit.
2. Compute the corresponding block of ten numbers.
3. Identify the starting number of the block.
4. Depending on the parity of the block, move forward or backward to locate the exact number.
5. Extract the required digit by repeatedly dividing by 10.

## Complexity

- Time Complexity: **O(log10(k))**
- Space Complexity: **O(1)**

## Key Observations

- The sequence never needs to be generated.
- Numbers are processed in blocks of ten.
- Every alternate block is traversed in reverse order.
- The desired digit is obtained directly after locating the target number.