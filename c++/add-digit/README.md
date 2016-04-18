# Add Digits
## Question
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

For example:

Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.

## Solution
A naive solution is just to repeatedly add all digits while the result >= 10.

A better solution is to use math:
1. if num is 0, then return 0;
2. if num % 9 == 0, return 0;
3. otherwise, return num % 9
