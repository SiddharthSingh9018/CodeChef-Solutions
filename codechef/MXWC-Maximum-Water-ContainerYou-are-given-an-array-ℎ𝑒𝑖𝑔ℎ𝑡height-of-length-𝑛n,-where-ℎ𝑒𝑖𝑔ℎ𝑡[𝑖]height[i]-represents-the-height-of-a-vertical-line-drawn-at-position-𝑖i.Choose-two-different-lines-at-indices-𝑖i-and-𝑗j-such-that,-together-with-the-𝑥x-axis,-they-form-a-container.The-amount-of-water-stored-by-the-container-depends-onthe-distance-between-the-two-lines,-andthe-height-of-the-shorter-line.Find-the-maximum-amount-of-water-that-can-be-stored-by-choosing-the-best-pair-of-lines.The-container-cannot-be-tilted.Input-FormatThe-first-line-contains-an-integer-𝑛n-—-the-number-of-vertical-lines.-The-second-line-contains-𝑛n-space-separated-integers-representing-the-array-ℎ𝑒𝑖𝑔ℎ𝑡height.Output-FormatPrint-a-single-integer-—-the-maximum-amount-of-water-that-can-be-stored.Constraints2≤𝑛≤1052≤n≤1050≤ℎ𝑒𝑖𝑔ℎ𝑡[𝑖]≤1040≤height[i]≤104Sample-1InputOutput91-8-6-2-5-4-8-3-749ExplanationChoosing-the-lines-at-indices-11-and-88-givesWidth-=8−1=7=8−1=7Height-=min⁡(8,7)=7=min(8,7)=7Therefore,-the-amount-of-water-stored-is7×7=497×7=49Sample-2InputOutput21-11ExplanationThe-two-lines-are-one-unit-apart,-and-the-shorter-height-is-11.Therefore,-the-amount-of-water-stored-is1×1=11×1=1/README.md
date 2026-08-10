<h2><a href="https://www.codechef.com/DSAMONDAY015/problems/MXWC">Maximum Water Container

You are given an array 
ℎ
𝑒
𝑖
𝑔
ℎ
𝑡
height of length 
𝑛
n, where 
ℎ
𝑒
𝑖
𝑔
ℎ
𝑡
[
𝑖
]
height[i] represents the height of a vertical line drawn at position 
𝑖
i.

Choose two different lines at indices 
𝑖
i and 
𝑗
j such that, together with the 
𝑥
x-axis, they form a container.

The amount of water stored by the container depends on:

the distance between the two lines, and
the height of the shorter line.

Find the maximum amount of water that can be stored by choosing the best pair of lines.

The container cannot be tilted.

Input Format

The first line contains an integer 
𝑛
n — the number of vertical lines. The second line contains 
𝑛
n space-separated integers representing the array 
ℎ
𝑒
𝑖
𝑔
ℎ
𝑡
height.

Output Format

Print a single integer — the maximum amount of water that can be stored.

Constraints
2
≤
𝑛
≤
10
5
2≤n≤10
5
0
≤
ℎ
𝑒
𝑖
𝑔
ℎ
𝑡
[
𝑖
]
≤
10
4
0≤height[i]≤10
4
Sample 1:
Input
Output
9
1 8 6 2 5 4 8 3 7
49
Explanation:

Choosing the lines at indices 
1
1 and 
8
8 gives:

Width 
=
8
−
1
=
7
=8−1=7
Height 
=
min
⁡
(
8
,
7
)
=
7
=min(8,7)=7

Therefore, the amount of water stored is:

7
×
7
=
49
7×7=49
Sample 2:
Input
Output
2
1 1
1
Explanation:

The two lines are one unit apart, and the shorter height is 
1
1.

Therefore, the amount of water stored is:

1
×
1
=
1
1×1=1</a></h2>