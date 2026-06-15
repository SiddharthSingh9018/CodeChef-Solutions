<h2><a href="https://www.codechef.com/DSAMONDAY007/problems/PREP22">Largest Rectangle in Histogram

You are given an array 
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑁
A
1
	​

,A
2
	​

,…,A
N
	​

 of length 
𝑁
N. 
𝐴
A represents a histogram which means the height of the 
𝑖
𝑡
ℎ
i
th
 bar will be 
𝐴
𝑖
A
i
	​

 units and the width of each bar is 
1
1 unit.

Find the area of the largest rectangle in the histogram.

Function Declaration
Function Name

𝑙
𝑎
𝑟
𝑔
𝑒
𝑠
𝑡
𝑅
𝑒
𝑐
𝑡
𝑎
𝑛
𝑔
𝑙
𝑒
𝐴
𝑟
𝑒
𝑎
largestRectangleArea – This function calculates the maximum rectangular area possible within the given histogram.

Parameters

𝑁
N : An integer representing the number of bars in the histogram.

𝐴
A : An array of integers representing the heights of the histogram bars.

Return Value

Returns an integer: the area of the largest rectangle that can be formed in the histogram.

Constraints:

1
≤
𝑇
≤
10
1≤T≤10

1
≤
𝑁
≤
10
5
1≤N≤10
5


0
≤
𝐴
𝑖
≤
10
9
0≤A
i
	​

≤10
9

The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
The first line of each test case contains an integer 
𝑁
N - the length of the array 
𝐴
A.
The second line of each test case contains 
𝑁
N space-separated integers 
𝐴
1
,
𝐴
2
,
…
,
𝐴
𝑁
A
1
	​

,A
2
	​

,…,A
N
	​

.
Output Format

For each test case, output on a new line the area of the largest rectangle in the histogram.

Subtasks
Subtask 1 (30 points): 
1
≤
𝑁
≤
1000
1≤N≤1000
Subtask 2 (70 points): No further constraints.
Sample 1:
Input
Output
3
4
2 6 8 4
4
5 10 5 2
2
5 5

12
15
10

Explanation:

Test case 
1
1: Largest rectangle will create using 
𝐴
2
A
2
	​

, 
𝐴
3
A
3
	​

. So height will be 
min
⁡
(
6
,
8
)
=
6
min(6,8)=6, width will be 
2
2. So area will be 
12
12.

Test case 
2
2: Largest rectangle will create using 
𝐴
1
A
1
	​

, 
𝐴
2
A
2
	​

, 
𝐴
3
A
3
	​

. So height will be 
min
⁡
(
5
,
10
,
5
)
=
5
min(5,10,5)=5, width will be 
3
3. So area will be 
15
15.

Test case 
3
3: Largest rectangle will create using 
𝐴
1
A
1
	​

, 
𝐴
2
A
2
	​

. So height will be 
min
⁡
(
5
,
5
)
=
5
min(5,5)=5, width will be 
2
2. So area will be 
10
10.</a></h2>