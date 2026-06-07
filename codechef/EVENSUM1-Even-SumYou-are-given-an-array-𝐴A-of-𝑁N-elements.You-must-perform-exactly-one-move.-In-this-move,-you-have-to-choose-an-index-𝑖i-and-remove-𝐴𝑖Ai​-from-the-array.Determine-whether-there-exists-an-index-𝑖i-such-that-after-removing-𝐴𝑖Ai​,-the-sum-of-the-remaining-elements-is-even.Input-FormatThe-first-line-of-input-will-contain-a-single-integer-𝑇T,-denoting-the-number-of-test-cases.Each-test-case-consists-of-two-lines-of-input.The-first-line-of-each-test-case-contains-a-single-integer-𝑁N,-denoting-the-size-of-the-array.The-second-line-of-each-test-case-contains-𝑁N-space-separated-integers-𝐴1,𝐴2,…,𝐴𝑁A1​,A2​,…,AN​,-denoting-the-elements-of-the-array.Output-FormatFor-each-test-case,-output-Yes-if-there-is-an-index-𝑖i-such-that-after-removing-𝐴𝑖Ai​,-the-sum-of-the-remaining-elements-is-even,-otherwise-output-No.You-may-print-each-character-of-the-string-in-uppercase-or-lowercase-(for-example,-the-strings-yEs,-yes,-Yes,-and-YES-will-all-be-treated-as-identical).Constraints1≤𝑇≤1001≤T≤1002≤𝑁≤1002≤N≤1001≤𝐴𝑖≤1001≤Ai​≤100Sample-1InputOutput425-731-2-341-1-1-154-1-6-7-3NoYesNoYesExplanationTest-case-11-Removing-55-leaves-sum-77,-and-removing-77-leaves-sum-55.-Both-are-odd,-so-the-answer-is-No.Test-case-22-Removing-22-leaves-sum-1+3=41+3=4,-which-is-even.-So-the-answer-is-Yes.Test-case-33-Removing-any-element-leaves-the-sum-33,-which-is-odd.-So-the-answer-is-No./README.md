<h2><a href="https://www.codechef.com/problems/EVENSUM1">Even Sum

You are given an array 
𝐴
A of 
𝑁
N elements.

You must perform exactly one move. In this move, you have to choose an index 
𝑖
i and remove 
𝐴
𝑖
A
i
	​

 from the array.

Determine whether there exists an index 
𝑖
i such that after removing 
𝐴
𝑖
A
i
	​

, the sum of the remaining elements is even.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer 
𝑁
N, denoting the size of the array.
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

, denoting the elements of the array.
Output Format

For each test case, output Yes if there is an index 
𝑖
i such that after removing 
𝐴
𝑖
A
i
	​

, the sum of the remaining elements is even, otherwise output No.

You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Constraints
1
≤
𝑇
≤
100
1≤T≤100
2
≤
𝑁
≤
100
2≤N≤100
1
≤
𝐴
𝑖
≤
100
1≤A
i
	​

≤100
Sample 1:
Input
Output
4
2
5 7
3
1 2 3
4
1 1 1 1
5
4 1 6 7 3

No
Yes
No
Yes

Explanation:
Test case 
1
1: Removing 
5
5 leaves sum 
7
7, and removing 
7
7 leaves sum 
5
5. Both are odd, so the answer is No.
Test case 
2
2: Removing 
2
2 leaves sum 
1
+
3
=
4
1+3=4, which is even. So the answer is Yes.
Test case 
3
3: Removing any element leaves the sum 
3
3, which is odd. So the answer is No.</a></h2>