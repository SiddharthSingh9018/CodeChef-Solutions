<h2><a href="https://www.codechef.com/problems/KTHANCESTOR">Kth ancestor of the node

Given an undirected connected tree with n nodes, numbered from 1 to n, and rooted at node 1, and two positive integer 
𝑘
k and 
𝑣
v, find the 
𝑘
𝑡
ℎ
k
th
 ancestor (Ancestor at 
𝑘
k level up. Parent of a node is also an ancestor 1 level up) of the node 
𝑣
v.

For example, in the following tree, the 2nd ancestor of node 
7
7 is node 
1
1.

Function Declaration
Function Name

𝑘
𝑡
ℎ
𝐴
𝑛
𝑐
𝑒
𝑠
𝑡
𝑜
𝑟
kthAncestor – Finds the 
𝑘
𝑡
ℎ
k
th
 ancestor of a given node in a tree.

Parameters
𝑛
n : An integer representing the number of nodes in the tree.
𝑒
𝑑
𝑔
𝑒
𝑠
edges : A list of 
𝑛
−
1
n−1 edges where each edge 
[
𝑢
,
𝑣
]
[u,v] denotes an undirected edge between nodes 
𝑢
u and 
𝑣
v.
𝑣
v : The node whose 
𝑘
𝑡
ℎ
k
th
 ancestor needs to be found.
𝑘
k : The ancestor level to be queried.
Return Value
Returns an integer — the 
𝑘
𝑡
ℎ
k
th
 ancestor of node 
𝑣
v.
Returns 
−
1
−1 if the 
𝑘
𝑡
ℎ
k
th
 ancestor does not exist.
Constraints:
1
≤
𝑛
≤
100000
1≤n≤100000
1
≤
𝑢
𝑖
,
𝑣
𝑖
≤
𝑛
1≤u
i
	​

,v
i
	​

≤n
1
≤
𝑣
≤
𝑛
1≤v≤n
1
≤
𝑘
≤
𝑑
𝑒
𝑝
𝑡
ℎ
(
𝑣
)
1≤k≤depth(v)

The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically

Input Format
The first line of the input contains three space separated integers 
𝑛
n, 
𝑘
k and 
𝑣
v — the number of nodes, level up from node 
𝑣
v where we need to find the ancestor and the node 
𝑣
v.
The next 
𝑛
−
1
n−1 lines describe the edges. The 
𝑖
i-th of these 
𝑛
−
1
n−1 lines contains two space-separated integers 
𝑢
𝑖
u
i
	​

 and 
𝑣
𝑖
v
i
	​

, denoting a bidirectional edge between 
𝑢
𝑖
u
i
	​

 and 
𝑣
𝑖
v
i
	​

.
Output Format
Output on the single line, the Kth ancestor of node 
𝑣
v.
Sample 1:
Input
Output
7 2 7
1 2
1 4
2 5
2 3
2 6
4 7
1</a></h2>