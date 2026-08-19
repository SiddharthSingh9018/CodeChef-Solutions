<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD13/problems/URERF01?tab=Submissions">Chef Counts Increasing SubsequencesChef has an array of nnn integers and wants to find out how many longest strictly increasing subsequencessubsequencessubsequences are present in it.
A subsequencesubsequencesubsequence is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.
Chef is interested only in strictly increasing subsequencessubsequencessubsequences, where each subsequent element is greater than the previous one. Help Chef determine the count of such longest strictly increasing subsequences in the given array.

Function Declaration


Function Name

countLongestIncreasingSubsequencescountLongestIncreasingSubsequencescountLongestIncreasingSubsequences



Parameters

numbersnumbersnumbers: list of nnn integers



Return Value

Returns a number representing the countcountcount of the longest strictly increasing subsequences, modulo 109+710^9 + 7109+7, found in the input list.




Constraints

1≤T≤1001 \leq T \leq 1001≤T≤100
1≤N≤20001 \leq N \leq 20001≤N≤2000
−106≤numbers[i]≤106-10^{6} \leq numbers[i] \leq 10^{6}−106≤numbers[i]≤106
The answer is guaranteed to fit inside a 32-bit integer.

The input and output formats given below are only if you want to test using custom inputs.

Input Format

The first line contains a single integer TTT — the number of test cases.
For each test case:

The first line contains an integer NNN — the size of Chef's array.
The second line contains NNN space-separated integers representing Chef's array.




Output Format

For each test case, print a single line containing one integer — the number of longest strictly increasing subsequences in Chef's array, modulo 109+710^9 + 7109+7.


Sample 1:
InputOutput3
4
3 1 2 4
7
1 3 6 7 9 4 10
5
5 5 5 5 51
1
5
Explanation:


Test Case 1: The longest increasing subsequence is [1, 2, 4] with length 3, only one such subsequence exists.
Test Case 2: The longest increasing subsequence is [1, 3, 6,7,9,10] with length 6, only one such subsequence exists.
Test Case3: All elements are equal, so each element forms a subsequence of length 1, there are 5 such subsequences.</a></h2>