<h2><a href="https://www.codechef.com/DSAMONDAY015/problems/NEDGP">Shortest Route

You are given a directed weighted graph with 
𝑁
N vertices, numbered from 
0
0 to 
𝑁
−
1
N−1, and 
𝑀
M directed edges.

Each edge is represented by three integers 
𝑢
u, 
𝑣
v, and 
𝑤
w, denoting a directed edge from vertex 
𝑢
u to vertex 
𝑣
v with weight 
𝑤
w. The edge weights may be positive, zero, or negative.

You are also given a source vertex 
𝑆
S.

The cost of a path is the sum of the weights of all edges in that path.

For every vertex 
𝑖
i, find the minimum possible cost of a path from 
𝑆
S to 
𝑖
i.
It is guaranteed that every vertex is reachable from 
𝑆
S and that the graph contains no negative-weight cycle.

negative-weight cycle is a cycle whose total edge weight is less than 
0
0.

Input Format
The first line contains two integers 
𝑁
N and 
𝑀
M.
Each of the next 
𝑀
M lines contains three integers 
𝑢
u, 
𝑣
v, and 
𝑤
w.
The last line contains an integer 
𝑆
S.
Output Format
Print 
𝑁
N space-separated integers, where the 
𝑖
i-th integer is the minimum cost required to reach vertex 
𝑖
i from 
𝑆
S.
The distance from 
𝑆
S to itself is 
0
0.
Constraints
2
≤
𝑁
≤
500
2≤N≤500
1
≤
𝑀
≤
5000
1≤M≤5000
0
≤
𝑢
,
𝑣
<
𝑁
0≤u,v<N
𝑢
≠
𝑣
u

=v
−
10
4
≤
𝑤
≤
10
4
−10
4
≤w≤10
4
0
≤
𝑆
<
𝑁
0≤S<N
There is at most one directed edge from 
𝑢
u to 
𝑣
v.
Every vertex is reachable from 
𝑆
S.
The graph contains no negative-weight cycle.
Sample 1:
Input
Output
5 7
0 1 4
0 2 5
1 2 -2
1 3 6
2 3 3
2 4 10
3 4 2
0
0 4 2 5 7
Explanation:

The minimum costs from vertex 
0
0 are:

Vertex 
0
0: 
0
0
Vertex 
1
1: 
4
4 through 
0
→
1
0→1
Vertex 
2
2: 
2
2 through 
0
→
1
→
2
0→1→2
Vertex 
3
3: 
5
5 through 
0
→
1
→
2
→
3
0→1→2→3
Vertex 
4
4: 
7
7 through 
0
→
1
→
2
→
3
→
4
0→1→2→3→4

The negative edge 
1
→
2
1→2 reduces the cost of reaching vertex 
2
2 from 
5
5 to 
2
2.

Sample 2:
Input
Output
4 5
0 1 3
0 2 8
1 2 -4
1 3 5
2 3 2
0
0 3 -1 1
Explanation:

The minimum-cost path to vertex 
2
2 is:

0
→
1
→
2
0→1→2

with cost:

3
+
(
−
4
)
=
−
1
3+(−4)=−1

The minimum-cost path to vertex 
3
3 is:

0
→
1
→
2
→
3
0→1→2→3

with cost:

3
+
(
−
4
)
+
2
=
1
3+(−4)+2=1</a></h2>