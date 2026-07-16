<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD07/problems/PREP51?tab=Submissions">Hashing - Minimum Window SubstringYou are given a string SSS of length NNN and a string TTT of length MMM consisting of lowercase english characters.
Find the shortest substring of SSS which contains all characters present in TTT (in any order including duplicates). If there are multiple such substring, return the first occurring shortest substring.
If there is no substring in SSS that contains all characters of TTT, print −1-1−1 instead.
Note that a substring is obtained by deleting some (possible zero) characters from the beginning and some (possibly zero) characters from the end of the string.

Input Format

The first line of input will contain a single integer TTT, denoting the number of test cases.
Each test case consists of multiple lines of input.

The first line of each test case contains two space-separated integers NNN and MMM — the lengths of strings SSS and TTT respectively.
The second line of each test case contains a string with NNN lowercase english alphabets — the string SSS.
The third line of each test case contains a string with MMM lowercase english alphabets — the string TTT.




Output Format
For each test case, output on a new line, the shortest substring of SSS which contains all characters present in TTT (in any order including duplicates). If there is no substring in SSS that contains all characters of TTT, print −1-1−1 instead.

Constraints


1≤T≤1001 \leq T \leq 1001≤T≤100
1≤N,M≤1051 \leq N, M \leq 10^51≤N,M≤105
The sum of NNN over all test cases won't exceed 2⋅1052\cdot 10^52⋅105.
The sum of MMM over all test cases won't exceed 2⋅1052\cdot 10^52⋅105.


Sample 1:
InputOutput3
8 4
baccaccb
acbc
3 2
bac
ac
1 1
c
a
bacc
ac
-1
Explanation:

Test case 111: The substring S[1:4]=baccS[1:4] = baccS[1:4]=bacc and S[5:8]=accbS[5:8] = accbS[5:8]=accb both will be the smallest substring in SSS contains all characters of the string TTT but S[1:4]=baccS[1:4] = baccS[1:4]=bacc occurs first.
Test case 222: The substring S[2:3]=acS[2:3] = acS[2:3]=ac will be shortest substring that contains all characters in TTT.
Test case 333: No substring present in SSS that contains all characters in TTT.</a></h2>