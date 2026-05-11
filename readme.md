
## 73. Set Matrix Zeroes



### Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

https://leetcode.com/problems/set-matrix-zeroes/

To Optimise space we will use first row and first column as marker array. 
During marking, first row and first column get modified, so their original values are lost.
Therefore, before marking, store separately:
rzero → did first row originally contain a zero?
czero → did first column originally contain a zero?
At the end, use these booleans to correctly zero the first row/column.

