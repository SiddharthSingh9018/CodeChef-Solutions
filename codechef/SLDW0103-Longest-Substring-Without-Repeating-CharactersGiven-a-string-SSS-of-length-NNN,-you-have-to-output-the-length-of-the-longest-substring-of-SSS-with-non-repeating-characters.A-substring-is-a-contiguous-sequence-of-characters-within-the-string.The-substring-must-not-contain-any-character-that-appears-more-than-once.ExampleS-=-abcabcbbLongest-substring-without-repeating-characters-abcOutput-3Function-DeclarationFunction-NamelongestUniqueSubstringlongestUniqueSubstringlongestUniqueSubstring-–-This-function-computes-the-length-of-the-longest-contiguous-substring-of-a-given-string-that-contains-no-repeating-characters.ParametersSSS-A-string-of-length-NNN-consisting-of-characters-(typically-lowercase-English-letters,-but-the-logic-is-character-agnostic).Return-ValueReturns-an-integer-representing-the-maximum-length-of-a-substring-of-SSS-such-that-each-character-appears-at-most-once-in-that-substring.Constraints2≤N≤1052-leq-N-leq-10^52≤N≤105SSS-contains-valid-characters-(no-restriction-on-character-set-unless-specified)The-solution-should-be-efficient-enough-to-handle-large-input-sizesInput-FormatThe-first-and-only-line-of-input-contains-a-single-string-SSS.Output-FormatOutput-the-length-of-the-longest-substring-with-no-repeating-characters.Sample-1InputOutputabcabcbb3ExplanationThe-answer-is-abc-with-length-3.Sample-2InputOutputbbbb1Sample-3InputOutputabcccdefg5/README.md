<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD07/problems/SLDW0103?tab=Submissions">Longest Substring Without Repeating CharactersGiven a string SSS of length NNN, you have to output the length of the longest substring of SSS with non-repeating characters.
A substring is a contiguous sequence of characters within the string.
The substring must not contain any character that appears more than once.
Example:
S = "abcabcbb"

Longest substring without repeating characters: "abc"
Output: 3

Function Declaration
Function Name
longestUniqueSubstringlongestUniqueSubstringlongestUniqueSubstring – This function computes the length of the longest contiguous substring of a given string that contains no repeating characters.
Parameters

SSS : A string of length NNN consisting of characters (typically lowercase English letters, but the logic is character-agnostic).

Return Value

Returns an integer representing the maximum length of a substring of SSS such that each character appears at most once in that substring.

Constraints

2≤N≤1052 \leq N \leq 10^52≤N≤105
SSS contains valid characters (no restriction on character set unless specified)
The solution should be efficient enough to handle large input sizes


Input Format

The first and only line of input contains a single string SSS.


Output Format

Output the length of the longest substring with no repeating characters.


Sample 1:
InputOutputabcabcbb3
Explanation:

The answer is "abc" with length 3.

Sample 2:
InputOutputbbbb1
Sample 3:
InputOutputabcccdefg5</a></h2>