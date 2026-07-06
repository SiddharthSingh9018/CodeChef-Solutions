<h2><a href="https://www.codechef.com/DSAMONDAY010/problems/CHEFGEM">Chef and the Gemstones

Chef is on an adventure in a deep cave, collecting unique gemstones of various values one by one. As he puts each gemstone into his bag, he wants to keep track of the 
𝐾
K-th most valuable gemstone in his collection so far.

If he has collected fewer than 
𝐾
K gemstones, the 
𝐾
K-th most valuable gemstone does not exist yet, so he records -1.

All gemstone values will be distinct. Help Chef automate this task!

Input Format
The first line of input contains an integer 
𝑇
T denoting the number of test cases.
Each test case contains two lines:
The first line contains two space-separated integers 
𝐾
K and 
𝑁
N — the target rank and the number of gemstones Chef collects, respectively.
The second line contains 
𝑁
N space-separated integers representing the values of the gemstones in the order Chef collects them.
Output Format
For each testcase, print a single line containing 
𝑁
N space-separated integers denoting the 
𝐾
K-th most valuable gemstone or -1.
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
𝐾
≤
10
4
1≤N,K≤10
4
1
≤
𝑁
𝑖
≤
10
9
1≤N
i
	​

≤10
9
Sample 1:
Input
Output
2
4 6
1 2 3 4 5 6
1 4
4 3 6 5
-1 -1 -1 1 2 3
4 4 6 6
Explanation:

Test Case 1 (
𝐾
=
4
K=4): Until the 4th gemstone is collected, the 4th highest value does not exist (outputs -1). Once 
{
1
,
2
,
3
,
4
}
{1,2,3,4} are collected, the 4th highest is 
1
1. As 
5
5 and 
6
6 are added, the 4th highest shifts to 
2
2 and then 
3
3.

Test Case 2 (
𝐾
=
1
K=1): We track the maximum value in the collection at each step. As elements 
{
4
,
3
,
6
,
5
}
{4,3,6,5} are added, the maximums are 
4
4, 
4
4, 
6
6, and 
6
6 respectively.</a></h2>