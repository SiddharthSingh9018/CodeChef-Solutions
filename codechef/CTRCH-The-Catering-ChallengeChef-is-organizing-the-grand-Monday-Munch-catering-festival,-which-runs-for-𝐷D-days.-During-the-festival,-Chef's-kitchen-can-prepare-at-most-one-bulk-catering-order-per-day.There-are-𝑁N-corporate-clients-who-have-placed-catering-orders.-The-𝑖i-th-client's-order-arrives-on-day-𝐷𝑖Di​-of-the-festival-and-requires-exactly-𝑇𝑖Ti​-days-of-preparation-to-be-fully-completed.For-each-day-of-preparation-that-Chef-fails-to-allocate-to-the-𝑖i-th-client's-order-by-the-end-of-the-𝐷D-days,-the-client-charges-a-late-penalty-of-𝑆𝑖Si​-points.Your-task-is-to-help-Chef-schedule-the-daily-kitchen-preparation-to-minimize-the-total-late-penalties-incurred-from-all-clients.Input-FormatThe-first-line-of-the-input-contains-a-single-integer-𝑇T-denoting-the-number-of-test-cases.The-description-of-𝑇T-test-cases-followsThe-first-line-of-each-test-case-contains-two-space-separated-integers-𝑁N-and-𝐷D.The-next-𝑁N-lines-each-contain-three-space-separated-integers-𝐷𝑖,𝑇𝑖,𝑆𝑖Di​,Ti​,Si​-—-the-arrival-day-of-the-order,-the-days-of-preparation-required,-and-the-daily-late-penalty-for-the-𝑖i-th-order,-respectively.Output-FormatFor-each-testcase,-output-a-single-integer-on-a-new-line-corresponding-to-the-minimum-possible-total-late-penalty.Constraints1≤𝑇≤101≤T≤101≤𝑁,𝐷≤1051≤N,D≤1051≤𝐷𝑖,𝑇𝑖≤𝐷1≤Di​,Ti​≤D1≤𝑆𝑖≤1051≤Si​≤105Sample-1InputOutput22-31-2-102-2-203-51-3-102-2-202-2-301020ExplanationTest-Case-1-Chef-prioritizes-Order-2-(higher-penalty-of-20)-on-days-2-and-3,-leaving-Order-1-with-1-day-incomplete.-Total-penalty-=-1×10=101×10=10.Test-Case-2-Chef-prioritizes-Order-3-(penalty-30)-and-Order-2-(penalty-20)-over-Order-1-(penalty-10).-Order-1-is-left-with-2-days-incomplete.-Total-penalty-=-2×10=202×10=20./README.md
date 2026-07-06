<h2><a href="https://www.codechef.com/DSAMONDAY010/problems/CTRCH">The Catering Challenge

Chef is organizing the grand Monday Munch catering festival, which runs for 
𝐷
D days. During the festival, Chef's kitchen can prepare at most one bulk catering order per day.

There are 
𝑁
N corporate clients who have placed catering orders. The 
𝑖
i-th client's order arrives on day 
𝐷
𝑖
D
i
	​

 of the festival and requires exactly 
𝑇
𝑖
T
i
	​

 days of preparation to be fully completed.

For each day of preparation that Chef fails to allocate to the 
𝑖
i-th client's order by the end of the 
𝐷
D days, the client charges a late penalty of 
𝑆
𝑖
S
i
	​

 points.

Your task is to help Chef schedule the daily kitchen preparation to minimize the total late penalties incurred from all clients.

Input Format
The first line of the input contains a single integer 
𝑇
T denoting the number of test cases.
The description of 
𝑇
T test cases follows:
The first line of each test case contains two space-separated integers 
𝑁
N and 
𝐷
D.
The next 
𝑁
N lines each contain three space-separated integers 
𝐷
𝑖
,
𝑇
𝑖
,
𝑆
𝑖
D
i
	​

,T
i
	​

,S
i
	​

 — the arrival day of the order, the days of preparation required, and the daily late penalty for the 
𝑖
i-th order, respectively.
Output Format
For each testcase, output a single integer on a new line corresponding to the minimum possible total late penalty.
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
𝐷
≤
10
5
1≤N,D≤10
5
1
≤
𝐷
𝑖
,
𝑇
𝑖
≤
𝐷
1≤D
i
	​

,T
i
	​

≤D
1
≤
𝑆
𝑖
≤
10
5
1≤S
i
	​

≤10
5
Sample 1:
Input
Output
2
2 3
1 2 10
2 2 20
3 5
1 3 10
2 2 20
2 2 30
10
20
Explanation:

Test Case 1: Chef prioritizes Order 2 (higher penalty of 20) on days 2 and 3, leaving Order 1 with 1 day incomplete. Total penalty = 
1
×
10
=
10
1×10=10.

Test Case 2: Chef prioritizes Order 3 (penalty 30) and Order 2 (penalty 20) over Order 1 (penalty 10). Order 1 is left with 2 days incomplete. Total penalty = 
2
×
10
=
20
2×10=20.</a></h2>