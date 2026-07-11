<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD01/problems/MAXCONSECU?tab=Submissions">Chef and Consecutive OnesChef has a binary array numsnumsnums containing only 000s and 111s. 
He wants to find the maximum number of consecutive 111s in the array regardless of how many such streaks exist. Can you help Chef determine this?
Function Declaration
Function Name
findMaxConsecutiveOnesfindMaxConsecutiveOnesfindMaxConsecutiveOnes - This function computes the maximum length of a contiguous segment of 1s in a binary array.
Parameters

numsnumsnums: A binary array of integers where each element is either 0 or 1.

Return Value

Returns a single integer representing the maximum number of consecutive 1s in the array.

Constraints

1≤N≤1051 \leq N \leq 10^51≤N≤105
nums[i]∈0,1nums[i] \in {0, 1}nums[i]∈0,1


Input Format

The first line contains a single integer NNN — the size of the array.
The second line contains NNN space-separated integers representing the binary array numsnumsnums.


Output Format

Print a single integer — the maximum number of consecutive 1s in the array.


Sample 1:
InputOutput5
0 1 1 0 1
2

Explanation:

The two 1s at positions 2 and 3 are consecutive, so the maximum streak is 2.</a></h2>