<h2><a href="https://www.codechef.com/problems/EVENSUM1?tab=submissions">Even SumYou are given an array AAA of NNN elements.
You must perform exactly one move. In this move, you have to choose an index iii and remove AiA_iAi​ from the array.
Determine whether there exists an index iii such that after removing AiA_iAi​, the sum of the remaining elements is even.

Input Format

The first line of input will contain a single integer TTT, denoting the number of test cases.
Each test case consists of two lines of input.

The first line of each test case contains a single integer NNN, denoting the size of the array.
The second line of each test case contains NNN space-separated integers A1,A2,…,ANA_1, A_2, \ldots, A_NA1​,A2​,…,AN​, denoting the elements of the array.




Output Format
For each test case, output Yes if there is an index iii such that after removing AiA_iAi​, the sum of the remaining elements is even, otherwise output No.
You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Constraints


1≤T≤1001 \leq T \leq 1001≤T≤100
2≤N≤1002 \leq N \leq 1002≤N≤100
1≤Ai≤1001 \leq A_i \leq 1001≤Ai​≤100


Sample 1:
InputOutput4
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


Test case 111: Removing 555 leaves sum 777, and removing 777 leaves sum 555. Both are odd, so the answer is No.
Test case 222: Removing 222 leaves sum 1+3=41 + 3 = 41+3=4, which is even. So the answer is Yes.
Test case 333: Removing any element leaves the sum 333, which is odd. So the answer is No.</a></h2>