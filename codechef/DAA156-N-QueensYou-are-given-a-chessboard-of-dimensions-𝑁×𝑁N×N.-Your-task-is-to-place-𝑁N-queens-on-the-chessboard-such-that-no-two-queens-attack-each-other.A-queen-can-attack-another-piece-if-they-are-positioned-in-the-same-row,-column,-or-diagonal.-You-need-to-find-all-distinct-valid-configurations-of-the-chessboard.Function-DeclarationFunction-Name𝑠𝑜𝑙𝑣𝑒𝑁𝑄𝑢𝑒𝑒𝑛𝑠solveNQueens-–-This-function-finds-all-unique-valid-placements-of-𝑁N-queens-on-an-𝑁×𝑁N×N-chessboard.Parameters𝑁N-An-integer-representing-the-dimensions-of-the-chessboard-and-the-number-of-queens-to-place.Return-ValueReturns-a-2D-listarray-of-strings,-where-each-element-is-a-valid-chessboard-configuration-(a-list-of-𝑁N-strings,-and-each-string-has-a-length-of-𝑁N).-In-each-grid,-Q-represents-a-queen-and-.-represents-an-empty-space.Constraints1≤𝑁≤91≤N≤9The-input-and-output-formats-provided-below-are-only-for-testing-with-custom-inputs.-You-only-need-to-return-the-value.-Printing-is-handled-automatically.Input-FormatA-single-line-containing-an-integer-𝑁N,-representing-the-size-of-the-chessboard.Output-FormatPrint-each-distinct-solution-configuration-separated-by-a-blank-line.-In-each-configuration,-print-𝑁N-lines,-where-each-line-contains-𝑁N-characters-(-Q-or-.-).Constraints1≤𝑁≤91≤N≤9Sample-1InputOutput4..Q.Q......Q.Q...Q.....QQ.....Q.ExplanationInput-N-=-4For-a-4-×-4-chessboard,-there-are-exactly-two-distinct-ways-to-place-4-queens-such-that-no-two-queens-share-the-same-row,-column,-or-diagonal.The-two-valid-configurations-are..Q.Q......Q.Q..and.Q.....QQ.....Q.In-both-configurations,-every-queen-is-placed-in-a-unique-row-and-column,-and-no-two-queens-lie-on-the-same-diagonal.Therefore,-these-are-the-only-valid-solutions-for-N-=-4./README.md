<h2><a href="https://www.codechef.com/DSAMONDAY007/problems/DAA156">N Queens

You are given a chessboard of dimensions 
𝑁
×
𝑁
N×N. Your task is to place 
𝑁
N queens on the chessboard such that no two queens attack each other.

A queen can attack another piece if they are positioned in the same row, column, or diagonal. You need to find all distinct valid configurations of the chessboard.

Function Declaration
Function Name

𝑠
𝑜
𝑙
𝑣
𝑒
𝑁
𝑄
𝑢
𝑒
𝑒
𝑛
𝑠
solveNQueens – This function finds all unique valid placements of 
𝑁
N queens on an 
𝑁
×
𝑁
N×N chessboard.

Parameters

𝑁
N : An integer representing the dimensions of the chessboard and the number of queens to place.

Return Value

Returns a 2D list/array of strings, where each element is a valid chessboard configuration (a list of 
𝑁
N strings, and each string has a length of 
𝑁
N). In each grid, Q represents a queen and . represents an empty space.

Constraints:
1
≤
𝑁
≤
9
1≤N≤9

The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically.

Input Format
A single line containing an integer 
𝑁
N, representing the size of the chessboard.
Output Format

Print each distinct solution configuration separated by a blank line. In each configuration, print 
𝑁
N lines, where each line contains 
𝑁
N characters ( Q or . ).

Constraints
1
≤
𝑁
≤
9
1≤N≤9
Sample 1:
Input
Output
4

..Q.
Q...
...Q
.Q..


.Q..
...Q
Q...
..Q.

Explanation:

Input: N = 4
For a 4 × 4 chessboard, there are exactly two distinct ways to place 4 queens such that no two queens share the same row, column, or diagonal.
The two valid configurations are:

..Q.
Q...
...Q
.Q..


and

.Q..
...Q
Q...
..Q.


In both configurations, every queen is placed in a unique row and column, and no two queens lie on the same diagonal.
Therefore, these are the only valid solutions for N = 4.</a></h2>