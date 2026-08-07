<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD13/problems/SUBSETTARGET?tab=Submissions">Subset with target sumYou are given an array of positive integers and a target value.
Your task is to determine whether it is possible to select any subset of the given array such that the sum of the chosen elements is exactly equal to the target.
Each element in the array can be used at most once, and the subset does not need to be contiguous.
Function Declaration
Function Name
isSubsetSumisSubsetSumisSubsetSum – This function checks whether there exists a subset of the given array whose elements sum up exactly to the given target value.
Parameters

nnn : The number of elements in the array.
arrarrarr : An array of integers representing the elements available.
targettargettarget : The target sum to be achieved using a subset of the array.

Return Value

Returns truetruetrue if there exists at least one subset whose sum equals targettargettarget.
Returns falsefalsefalse otherwise.

Constraints

1≤T≤10 1 \leq T \leq 101≤T≤10
1≤n≤1001 \leq n \leq 1001≤n≤100
1≤arr[i]≤1001 \leq arr[i] \leq 1001≤arr[i]≤100
0≤target≤50000 \leq target \leq 50000≤target≤5000


Input Format


The first line contains a single integer TTT — the number of test cases.


For each test case:

The first line contains two integers nnn and targettargettarget, the size of the array and target sum.
The second line contains nnn space-separated integers representing the array arrarrarr.




Output Format


For each test case, print truetruetrue if a subset with sum equal to targettargettarget exists, otherwise print falsefalsefalse.


The input and output formats given below are only if you want to test using custom inputs.



Sample 1:
InputOutput1
4 9
3 8 4 5true
Explanation:


A subset {4,5} exists whose sum is 9.


Sample 2:
InputOutput1
3 4
1 6 10false
Explanation:

No subset of the array adds up to 4.</a></h2>