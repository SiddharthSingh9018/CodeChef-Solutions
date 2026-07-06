<h2><a href="https://www.codechef.com/DSAMONDAY010/problems/DRONZ">Drone Rendezvous

In a remote forest, two search-and-rescue drones, Alpha and Beta, need to establish a communication outpost by meeting at the same location.

The forest is mapped as a grid of 
𝑁
N rows and 
𝑀
M columns. A cell at row 
𝑖
i and column 
𝑗
j is represented as 
(
𝑖
,
𝑗
)
(i,j) (1-indexed).

Drone Alpha starts at the top-left corner, cell 
(
1
,
1
)
(1,1).
Drone Beta starts at the top-right corner, cell 
(
1
,
𝑀
)
(1,M).

Some cells in the grid contain dense trees or cliffs (represented by 1), which are impassable; the drones cannot fly to or land on these cells. All other clear cells are represented by 0.

The drones move in synchronous rounds. In a single round:

Drone Alpha can fly from its current cell 
(
𝑥
,
𝑦
)
(x,y) to any clear cell 
(
𝑖
,
𝑗
)
(i,j) as long as the Manhattan distance satisfies 
∣
𝑖
−
𝑥
∣
+
∣
𝑗
−
𝑦
∣
≤
𝐾
1
∣i−x∣+∣j−y∣≤K
1
	​

.
Drone Beta can fly from its current cell 
(
𝑥
,
𝑦
)
(x,y) to any clear cell 
(
𝑖
,
𝑗
)
(i,j) as long as the Manhattan distance satisfies 
∣
𝑖
−
𝑥
∣
+
∣
𝑗
−
𝑦
∣
≤
𝐾
2
∣i−x∣+∣j−y∣≤K
2
	​

.

Drones can choose to stay in their current cell during a round (which corresponds to a distance of 0). The goal is to find the minimum number of rounds required for both drones to land on the same clear cell.

Input Format
The first line of the input contains a single integer 
𝑇
T denoting the number of test cases.
The description of 
𝑇
T test cases follows:
The first line of each test case contains four space-separated integers 
𝑁
,
𝑀
,
𝐾
1
,
𝐾
2
N,M,K
1
	​

,K
2
	​

 — the grid dimensions and the flight ranges of Drone Alpha and Drone Beta, respectively.
The next 
𝑁
N lines each contain 
𝑀
M space-separated integers (either 0 or 1), representing the forest grid. A 0 indicates a clear cell, and a 1 indicates an impassable obstacle. It is guaranteed that cells 
(
1
,
1
)
(1,1) and 
(
1
,
𝑀
)
(1,M) are 0.
Output Format

For each test case, output a single line containing the minimum number of rounds required for both drones to meet at the same cell. If they can never meet, output -1.

Constraints
1
≤
𝑇
≤
10
1≤T≤10
1
≤
𝑁
,
𝑀
≤
100
1≤N,M≤100
0
≤
𝐾
1
,
𝐾
2
≤
10
0≤K
1
	​

,K
2
	​

≤10
Sample 1:
Input
Output
2
2 4 1 1
0 1 1 0
0 0 0 0
2 4 2 1
0 1 1 0
0 0 0 0
2
1
Explanation:

Test Case 1 (
𝐾
1
=
1
,
𝐾
2
=
1
K
1
	​

=1,K
2
	​

=1): With jump range 1, Drone Alpha can reach 
(
2
,
2
)
(2,2) in 2 rounds, while Drone Beta can reach 
(
2
,
3
)
(2,3) in 2 rounds. They can meet at a common cell in a minimum of 2 rounds.

Test Case 2 (
𝐾
1
=
2
,
𝐾
2
=
1
K
1
	​

=2,K
2
	​

=1): With Drone Alpha's larger range of 2, the drones can reach a common landing cell and meet in just 1 round.</a></h2>