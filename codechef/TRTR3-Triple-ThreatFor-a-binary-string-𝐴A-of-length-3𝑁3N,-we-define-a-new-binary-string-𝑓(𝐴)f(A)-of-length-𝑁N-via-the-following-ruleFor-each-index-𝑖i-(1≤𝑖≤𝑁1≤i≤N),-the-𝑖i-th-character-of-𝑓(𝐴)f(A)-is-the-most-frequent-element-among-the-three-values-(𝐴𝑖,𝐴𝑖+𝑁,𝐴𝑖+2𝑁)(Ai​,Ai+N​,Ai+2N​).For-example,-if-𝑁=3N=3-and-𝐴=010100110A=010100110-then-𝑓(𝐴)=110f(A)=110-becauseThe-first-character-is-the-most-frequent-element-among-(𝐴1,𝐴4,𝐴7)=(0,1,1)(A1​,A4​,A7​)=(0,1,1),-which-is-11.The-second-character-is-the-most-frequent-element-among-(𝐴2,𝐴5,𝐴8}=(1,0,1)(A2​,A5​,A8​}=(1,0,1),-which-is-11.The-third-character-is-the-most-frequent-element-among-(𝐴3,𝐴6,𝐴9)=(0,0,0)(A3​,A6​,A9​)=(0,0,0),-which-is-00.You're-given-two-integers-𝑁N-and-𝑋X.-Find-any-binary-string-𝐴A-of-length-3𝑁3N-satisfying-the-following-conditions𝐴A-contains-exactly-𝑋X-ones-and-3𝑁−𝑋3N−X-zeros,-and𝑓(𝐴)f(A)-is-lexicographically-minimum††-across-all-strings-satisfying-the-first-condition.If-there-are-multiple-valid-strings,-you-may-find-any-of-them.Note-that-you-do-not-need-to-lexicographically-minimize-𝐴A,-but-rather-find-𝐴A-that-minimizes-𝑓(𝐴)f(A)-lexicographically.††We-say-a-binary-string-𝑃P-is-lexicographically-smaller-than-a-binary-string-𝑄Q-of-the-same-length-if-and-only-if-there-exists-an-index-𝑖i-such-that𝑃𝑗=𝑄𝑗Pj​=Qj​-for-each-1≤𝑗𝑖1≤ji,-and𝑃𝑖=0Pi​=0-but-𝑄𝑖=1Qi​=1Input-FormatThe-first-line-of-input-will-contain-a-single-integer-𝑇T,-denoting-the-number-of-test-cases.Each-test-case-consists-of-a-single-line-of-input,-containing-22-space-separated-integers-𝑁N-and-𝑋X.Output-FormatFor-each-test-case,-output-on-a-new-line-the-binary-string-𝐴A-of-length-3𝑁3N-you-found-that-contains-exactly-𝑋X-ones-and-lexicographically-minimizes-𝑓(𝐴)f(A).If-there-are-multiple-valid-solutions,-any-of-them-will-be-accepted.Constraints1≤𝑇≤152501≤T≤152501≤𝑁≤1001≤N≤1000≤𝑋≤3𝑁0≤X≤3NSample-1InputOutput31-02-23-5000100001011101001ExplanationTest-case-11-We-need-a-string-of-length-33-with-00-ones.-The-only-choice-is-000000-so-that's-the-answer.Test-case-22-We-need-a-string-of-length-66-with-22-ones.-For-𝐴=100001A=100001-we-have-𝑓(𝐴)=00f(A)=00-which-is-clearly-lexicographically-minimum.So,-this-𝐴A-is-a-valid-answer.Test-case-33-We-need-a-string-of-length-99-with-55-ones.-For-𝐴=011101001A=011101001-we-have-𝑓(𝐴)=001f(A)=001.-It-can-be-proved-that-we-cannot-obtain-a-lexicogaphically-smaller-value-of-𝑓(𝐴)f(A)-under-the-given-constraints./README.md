<h2><a href="https://www.codechef.com/START245D/problems/TRTR3">Triple Threat

For a binary string 
𝐴
A of length 
3
𝑁
3N, we define a new binary string 
𝑓
(
𝐴
)
f(A) of length 
𝑁
N via the following rule:

For each index 
𝑖
i (
1
≤
𝑖
≤
𝑁
1≤i≤N), the 
𝑖
i-th character of 
𝑓
(
𝐴
)
f(A) is the most frequent element among the three values 
(
𝐴
𝑖
,
𝐴
𝑖
+
𝑁
,
𝐴
𝑖
+
2
𝑁
)
(A
i
	​

,A
i+N
	​

,A
i+2N
	​

).

For example, if 
𝑁
=
3
N=3 and 
𝐴
=
010100110
A=010100110 then 
𝑓
(
𝐴
)
=
110
f(A)=110 because:

The first character is the most frequent element among 
(
𝐴
1
,
𝐴
4
,
𝐴
7
)
=
(
0
,
1
,
1
)
(A
1
	​

,A
4
	​

,A
7
	​

)=(0,1,1), which is 
1
1.
The second character is the most frequent element among 
(
𝐴
2
,
𝐴
5
,
𝐴
8
}
=
(
1
,
0
,
1
)
(A
2
	​

,A
5
	​

,A
8
	​

}=(1,0,1), which is 
1
1.
The third character is the most frequent element among 
(
𝐴
3
,
𝐴
6
,
𝐴
9
)
=
(
0
,
0
,
0
)
(A
3
	​

,A
6
	​

,A
9
	​

)=(0,0,0), which is 
0
0.

You're given two integers 
𝑁
N and 
𝑋
X. Find any binary string 
𝐴
A of length 
3
𝑁
3N satisfying the following conditions:

𝐴
A contains exactly 
𝑋
X ones and 
3
𝑁
−
𝑋
3N−X zeros, and
𝑓
(
𝐴
)
f(A) is lexicographically minimum
†
†
 across all strings satisfying the first condition.

If there are multiple valid strings, you may find any of them.
Note that you do not need to lexicographically minimize 
𝐴
A, but rather find 
𝐴
A that minimizes 
𝑓
(
𝐴
)
f(A) lexicographically.

†
†
We say a binary string 
𝑃
P is lexicographically smaller than a binary string 
𝑄
Q of the same length if and only if there exists an index 
𝑖
i such that:

𝑃
𝑗
=
𝑄
𝑗
P
j
	​

=Q
j
	​

 for each 
1
≤
𝑗
<
𝑖
1≤j<i, and
𝑃
𝑖
=
0
P
i
	​

=0 but 
𝑄
𝑖
=
1
Q
i
	​

=1
Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single line of input, containing 
2
2 space-separated integers 
𝑁
N and 
𝑋
X.
Output Format

For each test case, output on a new line the binary string 
𝐴
A of length 
3
𝑁
3N you found that contains exactly 
𝑋
X ones and lexicographically minimizes 
𝑓
(
𝐴
)
f(A).

If there are multiple valid solutions, any of them will be accepted.

Constraints
1
≤
𝑇
≤
15250
1≤T≤15250
1
≤
𝑁
≤
100
1≤N≤100
0
≤
𝑋
≤
3
𝑁
0≤X≤3N
Sample 1:
Input
Output
3
1 0
2 2
3 5

000
100001
011101001
Explanation:

Test case 
1
1: We need a string of length 
3
3 with 
0
0 ones. The only choice is 
000
000 so that's the answer.

Test case 
2
2: We need a string of length 
6
6 with 
2
2 ones. For 
𝐴
=
100001
A=100001 we have 
𝑓
(
𝐴
)
=
00
f(A)=00 which is clearly lexicographically minimum.
So, this 
𝐴
A is a valid answer.

Test case 
3
3: We need a string of length 
9
9 with 
5
5 ones. For 
𝐴
=
011101001
A=011101001 we have 
𝑓
(
𝐴
)
=
001
f(A)=001. It can be proved that we cannot obtain a lexicogaphically smaller value of 
𝑓
(
𝐴
)
f(A) under the given constraints.</a></h2>