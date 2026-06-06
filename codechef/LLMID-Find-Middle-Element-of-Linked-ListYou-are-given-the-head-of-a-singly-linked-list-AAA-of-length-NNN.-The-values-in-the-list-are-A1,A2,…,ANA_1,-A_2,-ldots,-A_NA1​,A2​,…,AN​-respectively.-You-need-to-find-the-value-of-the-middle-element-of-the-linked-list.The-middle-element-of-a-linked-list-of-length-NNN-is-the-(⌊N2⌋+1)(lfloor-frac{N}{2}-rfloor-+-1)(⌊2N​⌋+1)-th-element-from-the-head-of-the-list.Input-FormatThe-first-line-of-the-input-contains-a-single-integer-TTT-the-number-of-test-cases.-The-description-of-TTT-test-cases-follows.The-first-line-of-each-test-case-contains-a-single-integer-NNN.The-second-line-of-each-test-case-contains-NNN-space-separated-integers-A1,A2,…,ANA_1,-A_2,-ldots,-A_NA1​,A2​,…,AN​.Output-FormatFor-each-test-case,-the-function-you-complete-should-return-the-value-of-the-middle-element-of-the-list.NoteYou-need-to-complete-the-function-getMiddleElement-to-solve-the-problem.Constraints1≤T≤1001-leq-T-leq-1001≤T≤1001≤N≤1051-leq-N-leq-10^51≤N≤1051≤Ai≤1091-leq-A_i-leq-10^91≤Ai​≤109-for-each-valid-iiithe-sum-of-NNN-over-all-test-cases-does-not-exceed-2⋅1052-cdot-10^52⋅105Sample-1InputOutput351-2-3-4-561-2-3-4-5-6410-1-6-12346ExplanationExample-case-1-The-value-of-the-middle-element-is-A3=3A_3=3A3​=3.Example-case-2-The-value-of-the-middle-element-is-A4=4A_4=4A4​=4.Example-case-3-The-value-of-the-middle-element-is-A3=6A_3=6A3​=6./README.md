<h2><a href="https://www.codechef.com/practice/course/linked-lists/LINKLISTF/problems/LLMID?tab=Submissions">Find Middle Element of Linked ListYou are given the head of a singly linked list AAA of length NNN. The values in the list are A1,A2,…,ANA_1, A_2, \ldots, A_NA1​,A2​,…,AN​ respectively. You need to find the value of the middle element of the linked list.
The middle element of a linked list of length NNN is the (⌊N2⌋+1)(\lfloor \frac{N}{2} \rfloor + 1)(⌊2N​⌋+1)-th element from the head of the list.

Input Format


The first line of the input contains a single integer TTT - the number of test cases. The description of TTT test cases follows.


The first line of each test case contains a single integer NNN.


The second line of each test case contains NNN space-separated integers A1,A2,…,ANA_1, A_2, \ldots, A_NA1​,A2​,…,AN​.



Output Format

For each test case, the function you complete should return the value of the middle element of the list.

Note:
You need to complete the function getMiddleElement to solve the problem.

Constraints


1≤T≤1001 \leq T \leq 1001≤T≤100
1≤N≤1051 \leq N \leq 10^51≤N≤105
1≤Ai≤1091 \leq A_i \leq 10^91≤Ai​≤109 for each valid iii
the sum of NNN over all test cases does not exceed 2⋅1052 \cdot 10^52⋅105


Sample 1:
InputOutput3
5
1 2 3 4 5
6
1 2 3 4 5 6
4
10 1 6 123
4
6
Explanation:

Example case 1: The value of the middle element is A3=3A_3=3A3​=3.
Example case 2: The value of the middle element is A4=4A_4=4A4​=4.
Example case 3: The value of the middle element is A3=6A_3=6A3​=6.</a></h2>