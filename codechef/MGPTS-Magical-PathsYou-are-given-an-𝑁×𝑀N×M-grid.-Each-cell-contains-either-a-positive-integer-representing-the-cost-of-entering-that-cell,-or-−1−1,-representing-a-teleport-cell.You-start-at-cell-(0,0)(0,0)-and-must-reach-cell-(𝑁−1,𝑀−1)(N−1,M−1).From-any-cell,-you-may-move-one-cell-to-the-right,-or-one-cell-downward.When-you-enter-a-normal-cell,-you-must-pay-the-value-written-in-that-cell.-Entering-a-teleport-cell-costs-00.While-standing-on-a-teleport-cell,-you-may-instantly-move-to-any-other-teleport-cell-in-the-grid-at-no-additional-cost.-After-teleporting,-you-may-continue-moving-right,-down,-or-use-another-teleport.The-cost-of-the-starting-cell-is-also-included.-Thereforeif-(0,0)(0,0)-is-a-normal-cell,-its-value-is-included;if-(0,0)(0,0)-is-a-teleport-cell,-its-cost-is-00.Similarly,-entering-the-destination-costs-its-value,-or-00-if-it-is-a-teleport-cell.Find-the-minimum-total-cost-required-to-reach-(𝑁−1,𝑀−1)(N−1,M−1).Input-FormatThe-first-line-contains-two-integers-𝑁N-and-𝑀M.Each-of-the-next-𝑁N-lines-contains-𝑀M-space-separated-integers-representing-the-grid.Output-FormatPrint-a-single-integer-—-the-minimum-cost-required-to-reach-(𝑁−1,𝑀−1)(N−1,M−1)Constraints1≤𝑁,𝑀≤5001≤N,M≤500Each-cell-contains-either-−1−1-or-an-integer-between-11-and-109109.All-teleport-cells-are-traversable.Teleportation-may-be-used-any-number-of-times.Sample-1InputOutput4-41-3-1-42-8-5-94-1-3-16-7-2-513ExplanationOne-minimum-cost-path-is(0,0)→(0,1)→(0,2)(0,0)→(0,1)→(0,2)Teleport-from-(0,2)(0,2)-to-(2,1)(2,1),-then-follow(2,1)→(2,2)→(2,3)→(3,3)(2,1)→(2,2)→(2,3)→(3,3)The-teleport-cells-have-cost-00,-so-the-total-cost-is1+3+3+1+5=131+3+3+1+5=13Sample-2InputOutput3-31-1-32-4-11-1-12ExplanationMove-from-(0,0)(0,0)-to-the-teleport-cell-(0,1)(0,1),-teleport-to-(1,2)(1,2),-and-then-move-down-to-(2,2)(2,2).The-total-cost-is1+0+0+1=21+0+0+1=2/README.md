<h2><a href="https://www.codechef.com/DSAMONDAY015/problems/MGPTS">Magical Paths

You are given an 
𝑁
×
𝑀
N×M grid. Each cell contains either a positive integer representing the cost of entering that cell, or 
−
1
−1, representing a teleport cell.

You start at cell 
(
0
,
0
)
(0,0) and must reach cell 
(
𝑁
−
1
,
𝑀
−
1
)
(N−1,M−1).

From any cell, you may move one cell to the right, or one cell downward.

When you enter a normal cell, you must pay the value written in that cell. Entering a teleport cell costs 
0
0.

While standing on a teleport cell, you may instantly move to any other teleport cell in the grid at no additional cost. After teleporting, you may continue moving right, down, or use another teleport.

The cost of the starting cell is also included. Therefore:

if 
(
0
,
0
)
(0,0) is a normal cell, its value is included;
if 
(
0
,
0
)
(0,0) is a teleport cell, its cost is 
0
0.

Similarly, entering the destination costs its value, or 
0
0 if it is a teleport cell.

Find the minimum total cost required to reach 
(
𝑁
−
1
,
𝑀
−
1
)
(N−1,M−1).

Input Format
The first line contains two integers 
𝑁
N and 
𝑀
M.
Each of the next 
𝑁
N lines contains 
𝑀
M space-separated integers representing the grid.
Output Format
Print a single integer — the minimum cost required to reach 
(
𝑁
−
1
,
𝑀
−
1
)
(N−1,M−1)
Constraints
1
≤
𝑁
,
𝑀
≤
500
1≤N,M≤500
Each cell contains either 
−
1
−1 or an integer between 
1
1 and 
10
9
10
9
.
All teleport cells are traversable.
Teleportation may be used any number of times.
Sample 1:
Input
Output
4 4
1 3 -1 4
2 8 5 9
4 -1 3 1
6 7 2 5
13
Explanation:

One minimum-cost path is:

(
0
,
0
)
→
(
0
,
1
)
→
(
0
,
2
)
(0,0)→(0,1)→(0,2)

Teleport from 
(
0
,
2
)
(0,2) to 
(
2
,
1
)
(2,1), then follow:

(
2
,
1
)
→
(
2
,
2
)
→
(
2
,
3
)
→
(
3
,
3
)
(2,1)→(2,2)→(2,3)→(3,3)

The teleport cells have cost 
0
0, so the total cost is:

1
+
3
+
3
+
1
+
5
=
13
1+3+3+1+5=13
Sample 2:
Input
Output
3 3
1 -1 3
2 4 -1
1 1 1
2
Explanation:

Move from 
(
0
,
0
)
(0,0) to the teleport cell 
(
0
,
1
)
(0,1), teleport to 
(
1
,
2
)
(1,2), and then move down to 
(
2
,
2
)
(2,2).

The total cost is:

1
+
0
+
0
+
1
=
2
1+0+0+1=2</a></h2>