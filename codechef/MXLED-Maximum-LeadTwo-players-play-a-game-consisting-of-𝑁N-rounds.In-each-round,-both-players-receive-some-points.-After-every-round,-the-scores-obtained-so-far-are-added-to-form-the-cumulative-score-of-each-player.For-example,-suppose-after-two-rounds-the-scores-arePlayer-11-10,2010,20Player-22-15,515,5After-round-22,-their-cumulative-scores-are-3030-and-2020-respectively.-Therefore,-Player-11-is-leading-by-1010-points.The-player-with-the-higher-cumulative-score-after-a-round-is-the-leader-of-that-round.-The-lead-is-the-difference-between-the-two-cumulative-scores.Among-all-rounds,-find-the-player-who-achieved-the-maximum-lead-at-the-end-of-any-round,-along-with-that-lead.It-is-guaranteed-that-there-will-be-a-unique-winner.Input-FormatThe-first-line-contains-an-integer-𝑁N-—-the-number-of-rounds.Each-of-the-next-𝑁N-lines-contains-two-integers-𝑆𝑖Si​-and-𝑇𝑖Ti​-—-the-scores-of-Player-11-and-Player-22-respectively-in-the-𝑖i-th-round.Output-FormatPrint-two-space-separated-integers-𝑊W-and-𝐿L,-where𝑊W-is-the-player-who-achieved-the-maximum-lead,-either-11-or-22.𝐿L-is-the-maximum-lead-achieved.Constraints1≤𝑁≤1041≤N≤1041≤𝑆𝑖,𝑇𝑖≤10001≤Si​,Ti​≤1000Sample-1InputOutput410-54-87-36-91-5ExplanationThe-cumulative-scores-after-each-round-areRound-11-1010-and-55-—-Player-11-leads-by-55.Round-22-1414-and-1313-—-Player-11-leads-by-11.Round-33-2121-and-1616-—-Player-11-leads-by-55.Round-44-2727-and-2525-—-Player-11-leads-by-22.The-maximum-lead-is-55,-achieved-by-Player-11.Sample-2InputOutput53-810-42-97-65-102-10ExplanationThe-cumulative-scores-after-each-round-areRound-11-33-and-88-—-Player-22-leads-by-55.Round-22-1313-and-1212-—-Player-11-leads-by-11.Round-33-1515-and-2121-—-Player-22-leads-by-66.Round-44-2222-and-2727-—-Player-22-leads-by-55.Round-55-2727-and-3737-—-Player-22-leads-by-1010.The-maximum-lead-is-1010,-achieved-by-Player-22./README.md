<h2><a href="https://www.codechef.com/DSAMONDAY015/problems/MXLED">Maximum Lead

Two players play a game consisting of 
𝑁
N rounds.

In each round, both players receive some points. After every round, the scores obtained so far are added to form the cumulative score of each player.

For example, suppose after two rounds the scores are:

Player 
1
1: 
10
,
20
10,20
Player 
2
2: 
15
,
5
15,5

After round 
2
2, their cumulative scores are 
30
30 and 
20
20 respectively. Therefore, Player 
1
1 is leading by 
10
10 points.

The player with the higher cumulative score after a round is the leader of that round. The lead is the difference between the two cumulative scores.

Among all rounds, find the player who achieved the maximum lead at the end of any round, along with that lead.

It is guaranteed that there will be a unique winner.

Input Format
The first line contains an integer 
𝑁
N — the number of rounds.
Each of the next 
𝑁
N lines contains two integers 
𝑆
𝑖
S
i
	​

 and 
𝑇
𝑖
T
i
	​

 — the scores of Player 
1
1 and Player 
2
2 respectively in the 
𝑖
i-th round.
Output Format
Print two space-separated integers 
𝑊
W and 
𝐿
L, where:
𝑊
W is the player who achieved the maximum lead, either 
1
1 or 
2
2.
𝐿
L is the maximum lead achieved.
Constraints
1
≤
𝑁
≤
10
4
1≤N≤10
4
1
≤
𝑆
𝑖
,
𝑇
𝑖
≤
1000
1≤S
i
	​

,T
i
	​

≤1000
Sample 1:
Input
Output
4
10 5
4 8
7 3
6 9
1 5
Explanation:

The cumulative scores after each round are:

Round 
1
1: 
10
10 and 
5
5 — Player 
1
1 leads by 
5
5.
Round 
2
2: 
14
14 and 
13
13 — Player 
1
1 leads by 
1
1.
Round 
3
3: 
21
21 and 
16
16 — Player 
1
1 leads by 
5
5.
Round 
4
4: 
27
27 and 
25
25 — Player 
1
1 leads by 
2
2.

The maximum lead is 
5
5, achieved by Player 
1
1.

Sample 2:
Input
Output
5
3 8
10 4
2 9
7 6
5 10
2 10
Explanation:

The cumulative scores after each round are:

Round 
1
1: 
3
3 and 
8
8 — Player 
2
2 leads by 
5
5.
Round 
2
2: 
13
13 and 
12
12 — Player 
1
1 leads by 
1
1.
Round 
3
3: 
15
15 and 
21
21 — Player 
2
2 leads by 
6
6.
Round 
4
4: 
22
22 and 
27
27 — Player 
2
2 leads by 
5
5.
Round 
5
5: 
27
27 and 
37
37 — Player 
2
2 leads by 
10
10.

The maximum lead is 
10
10, achieved by Player 
2
2.</a></h2>