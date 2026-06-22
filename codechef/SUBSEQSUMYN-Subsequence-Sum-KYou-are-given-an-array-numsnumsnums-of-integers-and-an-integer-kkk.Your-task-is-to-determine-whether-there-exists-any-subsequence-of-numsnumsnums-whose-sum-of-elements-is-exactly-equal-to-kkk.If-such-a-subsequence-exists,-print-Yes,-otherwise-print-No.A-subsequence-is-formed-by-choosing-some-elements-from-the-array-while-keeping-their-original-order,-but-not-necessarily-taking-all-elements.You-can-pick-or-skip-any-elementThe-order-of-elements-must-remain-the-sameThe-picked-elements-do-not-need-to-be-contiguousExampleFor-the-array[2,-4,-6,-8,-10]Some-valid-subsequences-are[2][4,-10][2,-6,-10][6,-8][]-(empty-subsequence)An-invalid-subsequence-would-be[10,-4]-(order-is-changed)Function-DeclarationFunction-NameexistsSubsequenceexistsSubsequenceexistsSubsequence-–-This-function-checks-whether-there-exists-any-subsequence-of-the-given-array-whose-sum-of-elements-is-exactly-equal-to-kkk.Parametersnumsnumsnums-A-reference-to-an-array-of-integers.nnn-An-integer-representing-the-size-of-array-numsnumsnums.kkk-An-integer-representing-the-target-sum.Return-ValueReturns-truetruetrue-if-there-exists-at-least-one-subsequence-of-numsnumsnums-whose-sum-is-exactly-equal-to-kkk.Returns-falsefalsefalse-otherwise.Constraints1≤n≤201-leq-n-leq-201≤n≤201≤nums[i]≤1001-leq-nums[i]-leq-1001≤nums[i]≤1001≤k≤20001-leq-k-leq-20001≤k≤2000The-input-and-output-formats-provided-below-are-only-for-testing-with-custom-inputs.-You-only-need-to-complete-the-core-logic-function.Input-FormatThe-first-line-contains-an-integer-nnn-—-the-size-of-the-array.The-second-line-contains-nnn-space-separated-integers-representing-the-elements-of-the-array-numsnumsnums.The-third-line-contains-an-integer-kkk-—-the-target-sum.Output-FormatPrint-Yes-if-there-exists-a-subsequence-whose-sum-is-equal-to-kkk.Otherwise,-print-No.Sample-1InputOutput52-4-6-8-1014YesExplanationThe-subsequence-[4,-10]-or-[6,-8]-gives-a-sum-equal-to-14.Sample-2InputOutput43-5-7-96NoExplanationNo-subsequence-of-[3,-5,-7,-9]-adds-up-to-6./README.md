<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD06/problems/SUBSEQSUMYN?tab=Submissions">Subsequence Sum KYou are given an array numsnumsnums of integers and an integer kkk.
Your task is to determine whether there exists any subsequence of numsnumsnums whose sum of elements is exactly equal to kkk.
If such a subsequence exists, print "Yes", otherwise print "No".
A subsequence is formed by choosing some elements from the array while keeping their original order, but not necessarily taking all elements.

You can pick or skip any element
The order of elements must remain the same
The picked elements do not need to be contiguous

Example:
For the array
[2, 4, 6, 8, 10]
Some valid subsequences are:

[2]
[4, 10]
[2, 6, 10]
[6, 8]
[] (empty subsequence)

An invalid subsequence would be:

[10, 4] (order is changed)

Function Declaration
Function Name
existsSubsequenceexistsSubsequenceexistsSubsequence – This function checks whether there exists any subsequence of the given array whose sum of elements is exactly equal to kkk.
Parameters

numsnumsnums : A reference to an array of integers.
nnn : An integer representing the size of array numsnumsnums.
kkk : An integer representing the target sum.

Return Value

Returns truetruetrue if there exists at least one subsequence of numsnumsnums whose sum is exactly equal to kkk.
Returns falsefalsefalse otherwise.

Constraints

1≤n≤201 \leq n \leq 201≤n≤20
1≤nums[i]≤1001 \leq nums[i] \leq 1001≤nums[i]≤100
1≤k≤20001 \leq k \leq 20001≤k≤2000

The input and output formats provided below are only for testing with custom inputs. You only need to complete the core logic function.

Input Format

The first line contains an integer nnn — the size of the array.
The second line contains nnn space-separated integers representing the elements of the array numsnumsnums.
The third line contains an integer kkk — the target sum.


Output Format

Print "Yes" if there exists a subsequence whose sum is equal to kkk.
Otherwise, print "No".


Sample 1:
InputOutput5
2 4 6 8 10
14
Yes

Explanation:

The subsequence [4, 10] or [6, 8] gives a sum equal to 14.

Sample 2:
InputOutput4
3 5 7 9
6
No

Explanation:

No subsequence of [3, 5, 7, 9] adds up to 6.</a></h2>