<h2><a href="https://www.codechef.com/DSAMONDAY015/problems/RPTS">Repaint the Stripe

You are given a string 
𝑠
s of length 
𝑛
n, consisting only of the characters W and B.

The character W represents a white cell, while B represents a black cell.

You may recolor any white cell to black. Find the minimum number of cells that must be recolored so that 
𝑠
s contains at least one substring of length 
𝑘
k consisting only of B.

If such a substring already exists, print 
0
0.

substring: A substring is a continuous part of a string. For example, BWB is a substring of BBWBW.

Input Format

The first line contains two space-separated integers 
𝑛
n and 
𝑘
k. The second line contains the string 
𝑠
s of length 
𝑛
n.

Output Format

Print a single integer — the minimum number of white cells that must be recolored.

Constraints
1
≤
𝑘
≤
𝑛
≤
2
×
10
5
1≤k≤n≤2×10
5
𝑠
s consists only of the characters W and B
Sample 1:
Input
Output
5 3
BBWBW
1
Explanation:

Recoloring the third cell changes the string to BBBBW, which contains a substring of length 
3
3 consisting only of B.

Therefore, the answer is 
1
1.

Sample 2:
Input
Output
5 5
BBWBW
2
Explanation:

Recoloring the third and fifth cells changes the string to BBBBB.

Therefore, the answer is 
2
2</a></h2>