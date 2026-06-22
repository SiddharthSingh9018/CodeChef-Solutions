<h2><a href="https://www.codechef.com/DSAMONDAY008/problems/SUBSEQSUMYN">Subsequence Sum K

You are given an array 
𝑛
𝑢
𝑚
𝑠
nums of integers and an integer 
𝑘
k.
Your task is to determine whether there exists any subsequence of 
𝑛
𝑢
𝑚
𝑠
nums whose sum of elements is exactly equal to 
𝑘
k.

If such a subsequence exists, print "Yes", otherwise print "No".

A subsequence is formed by choosing some elements from the array while keeping their original order, but not necessarily taking all elements.

You can pick or skip any element
The order of elements must remain the same
The picked elements do not need to be contiguous

Example:

For the array [2, 4, 6, 8, 10]

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

𝑒
𝑥
𝑖
𝑠
𝑡
𝑠
𝑆
𝑢
𝑏
𝑠
𝑒
𝑞
𝑢
𝑒
𝑛
𝑐
𝑒
existsSubsequence – This function checks whether there exists any subsequence of the given array whose sum of elements is exactly equal to 
𝑘
k.

Parameters
𝑛
𝑢
𝑚
𝑠
nums : A reference to an array of integers.
𝑛
n : An integer representing the size of array 
𝑛
𝑢
𝑚
𝑠
nums.
𝑘
k : An integer representing the target sum.
Return Value
Returns 
𝑡
𝑟
𝑢
𝑒
true if there exists at least one subsequence of 
𝑛
𝑢
𝑚
𝑠
nums whose sum is exactly equal to 
𝑘
k.
Returns 
𝑓
𝑎
𝑙
𝑠
𝑒
false otherwise.
Constraints
1
≤
𝑛
≤
20
1≤n≤20
1
≤
𝑛
𝑢
𝑚
𝑠
[
𝑖
]
≤
100
1≤nums[i]≤100
1
≤
𝑘
≤
2000
1≤k≤2000

The input and output formats provided below are only for testing with custom inputs. You only need to complete the core logic function.

Input Format
The first line contains an integer 
𝑛
n — the size of the array.
The second line contains 
𝑛
n space-separated integers representing the elements of the array 
𝑛
𝑢
𝑚
𝑠
nums.
The third line contains an integer 
𝑘
k — the target sum.
Output Format
Print "Yes" if there exists a subsequence whose sum is equal to 
𝑘
k.
Otherwise, print "No".
Sample 1:
Input
Output
5
2 4 6 8 10
14

Yes

Explanation:

The subsequence [4, 10] or [6, 8] gives a sum equal to 14.

Sample 2:
Input
Output
4
3 5 7 9
6

No

Explanation:

No subsequence of [3, 5, 7, 9] adds up to 6.</a></h2>