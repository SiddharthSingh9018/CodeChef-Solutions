<h2><a href="https://www.codechef.com/problems/RUNCHASE">Run Chase

Chef is watching a T20 cricket match.

The team batting first has scored 
𝑁
N runs.

The team batting second will bat for 
20
20 overs. To win the match, they must score strictly more than 
𝑁
N runs.

Find the smallest integer run rate 
𝑅
R, in runs per over, such that scoring 
𝑅
R runs in each of the 
20
20 overs is enough to win the match.

Input Format
The only line of input contains a single integer 
𝑁
N — the number of runs scored by the team batting first.
Output Format

Output a single integer 
𝑅
R — the smallest integer run rate to win the match.

Constraints
50
≤
𝑁
≤
300
50≤N≤300
Sample 1:
Input
Output
155
8
Explanation:

If the second team scores at a run rate of 
7
7, they score 
20
⋅
7
=
140
20⋅7=140 runs, which is not enough. At a run rate of 
8
8, they score 
20
⋅
8
=
160
20⋅8=160 runs, which is strictly more than 
155
155. So the answer is 
8
8.

Sample 2:
Input
Output
200
11
Explanation:

If the second team scores at a run rate of 
10
10, they score 
20
⋅
10
=
200
20⋅10=200 runs, which only ties the score. They need to score strictly more than 
200
200, so the answer is 
11
11.</a></h2>