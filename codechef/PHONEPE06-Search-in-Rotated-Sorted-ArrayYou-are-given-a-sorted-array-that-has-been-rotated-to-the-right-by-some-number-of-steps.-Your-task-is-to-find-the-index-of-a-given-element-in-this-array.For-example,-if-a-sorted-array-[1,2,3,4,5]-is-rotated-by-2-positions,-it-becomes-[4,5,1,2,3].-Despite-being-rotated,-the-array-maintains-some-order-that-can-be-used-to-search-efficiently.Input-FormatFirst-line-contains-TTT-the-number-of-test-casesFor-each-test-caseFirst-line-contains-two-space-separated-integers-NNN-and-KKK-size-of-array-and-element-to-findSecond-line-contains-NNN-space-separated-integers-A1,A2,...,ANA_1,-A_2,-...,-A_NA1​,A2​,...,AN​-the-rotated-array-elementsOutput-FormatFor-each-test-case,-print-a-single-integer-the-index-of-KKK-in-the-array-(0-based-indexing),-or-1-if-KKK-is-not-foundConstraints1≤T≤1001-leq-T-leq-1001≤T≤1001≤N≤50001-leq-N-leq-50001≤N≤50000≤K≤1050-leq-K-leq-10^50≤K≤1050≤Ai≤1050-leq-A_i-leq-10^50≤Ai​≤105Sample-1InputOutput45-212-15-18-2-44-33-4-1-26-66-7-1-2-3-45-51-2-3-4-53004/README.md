<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD03/problems/PHONEPE06?tab=Submissions">Search in Rotated Sorted ArrayYou are given a sorted array that has been rotated to the right by some number of steps. Your task is to find the index of a given element in this array.
For example, if a sorted array [1,2,3,4,5] is rotated by 2 positions, it becomes [4,5,1,2,3]. Despite being rotated, the array maintains some order that can be used to search efficiently.

Input Format

First line contains TTT - the number of test cases
For each test case:

First line contains two space-separated integers NNN and KKK - size of array and element to find
Second line contains NNN space-separated integers A1,A2,...,ANA_1, A_2, ..., A_NA1​,A2​,...,AN​ - the rotated array elements




Output Format

For each test case, print a single integer - the index of KKK in the array (0-based indexing), or -1 if KKK is not found


Constraints


1≤T≤1001 \leq T \leq 1001≤T≤100
1≤N≤50001 \leq N \leq 50001≤N≤5000
0≤K≤1050 \leq K \leq 10^50≤K≤105
0≤Ai≤1050 \leq A_i \leq 10^50≤Ai​≤105


Sample 1:
InputOutput4
5 2
12 15 18 2 4
4 3
3 4 1 2
6 6
6 7 1 2 3 4
5 5
1 2 3 4 53
0
0
4</a></h2>