<h2><a href="https://www.codechef.com/problems/HEAP07P?tab=submissions">Heap or notA binary heap is a complete binary tree that satisfies the heap property.
In a min-heap, the value of every parent node is less than or equal to the values of its children.
You are given an array of size NNN representing a binary tree in level-order traversal. Your task is to determine whether the given array represents a valid min-heap.
Print "Yes" if the array represents a min-heap; otherwise, print "No".
Function Description
Function Declaration
Function Name
isMinHeap – This function checks whether the given array represents a valid min-heap.
Parameters

AAA : An array representing the heap elements.
NNN : The number of elements in the array.

Return Value

This function returns "Yes" if the array represents a min-heap.
Otherwise, it returns "No".

Constraints

1≤T≤1001 \le T \le 1001≤T≤100
1≤N≤1051 \le N \le 10^51≤N≤105
1≤Ai≤1091 \le A_i \le 10^91≤Ai​≤109

The sum of NNN over all test cases does not exceed 10510^5105.

Input Format


The first line contains a single integer TTT, denoting the number of test cases.


For each test case:

The first line contains a single integer NNN, the number of elements in the array.
The second line contains NNN space-separated integers representing the array.




Output Format
For each test case, print:

"Yes" if the given array represents a valid min-heap.
"No" otherwise.

Print the answer on a new line for each test case.

Sample 1:
InputOutput2
7
10 15 30 40 50 100 40
3
15 10 18Yes
No
Explanation:

Test Case 1
Array: [10, 15, 30, 40, 50, 100, 40]

10≤15 and 3010 \le 15  \text{ and } 3010≤15 and 30
15≤40 and 5015 \le 40  \text{ and } 5015≤40 and 50
30≤100 and 4030 \le 100  \text{ and } 4030≤100 and 40

Every parent is less than or equal to its children. Hence, it is a valid min-heap.
Test Case 2
Array: [15, 10, 18]
The left child of 15 is 10, which is smaller than its parent.
Therefore, the min-heap property is violated and the answer is "No".</a></h2>