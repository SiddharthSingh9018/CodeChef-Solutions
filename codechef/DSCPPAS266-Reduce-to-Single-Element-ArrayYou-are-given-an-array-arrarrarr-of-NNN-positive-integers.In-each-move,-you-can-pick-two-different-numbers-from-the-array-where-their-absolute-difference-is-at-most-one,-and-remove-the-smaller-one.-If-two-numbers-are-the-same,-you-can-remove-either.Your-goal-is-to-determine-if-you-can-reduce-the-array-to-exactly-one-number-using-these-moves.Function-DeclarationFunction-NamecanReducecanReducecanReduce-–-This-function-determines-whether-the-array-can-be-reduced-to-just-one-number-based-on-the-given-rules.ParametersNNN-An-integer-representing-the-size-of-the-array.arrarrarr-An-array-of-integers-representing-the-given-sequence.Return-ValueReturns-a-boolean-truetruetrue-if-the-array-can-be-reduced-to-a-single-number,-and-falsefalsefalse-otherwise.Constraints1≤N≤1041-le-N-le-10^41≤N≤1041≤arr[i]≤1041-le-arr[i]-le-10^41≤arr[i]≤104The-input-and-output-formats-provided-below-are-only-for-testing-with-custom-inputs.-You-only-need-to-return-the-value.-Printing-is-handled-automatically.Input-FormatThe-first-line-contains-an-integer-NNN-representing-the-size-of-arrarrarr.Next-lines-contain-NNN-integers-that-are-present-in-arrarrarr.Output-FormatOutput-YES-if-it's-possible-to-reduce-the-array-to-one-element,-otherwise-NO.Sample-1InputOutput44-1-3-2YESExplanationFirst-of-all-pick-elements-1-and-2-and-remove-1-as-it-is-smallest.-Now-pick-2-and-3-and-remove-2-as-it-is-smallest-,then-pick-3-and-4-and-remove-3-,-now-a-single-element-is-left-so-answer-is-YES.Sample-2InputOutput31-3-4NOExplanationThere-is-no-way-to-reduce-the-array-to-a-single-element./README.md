<h2><a href="https://www.codechef.com/DSAMONDAY007/problems/DSCPPAS266?tab=submissions">Reduce to Single Element ArrayYou are given an array arrarrarr of NNN positive integers.
In each move, you can pick two different numbers from the array where their absolute difference is at most one, and remove the smaller one. If two numbers are the same, you can remove either.
Your goal is to determine if you can reduce the array to exactly one number using these moves.

Function Declaration
Function Name
canReducecanReducecanReduce – This function determines whether the array can be reduced to just one number based on the given rules.
Parameters
NNN : An integer representing the size of the array.
arrarrarr : An array of integers representing the given sequence.
Return Value
Returns a boolean: truetruetrue if the array can be reduced to a single number, and falsefalsefalse otherwise.

Constraints:
1≤N≤1041 \le N \le 10^41≤N≤104
1≤arr[i]≤1041 \le arr[i] \le 10^41≤arr[i]≤104
The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically.

Input Format

The first line contains an integer NNN representing  the size of arrarrarr.
Next lines contain NNN integers that are present in arrarrarr.


Output Format

Output "YES" if it's possible to reduce the array to one element, otherwise "NO".


Sample 1:
InputOutput4
4 1 3 2YES
Explanation:

First of all pick elements 1 and 2 and remove 1 as it is smallest. Now pick 2 and 3 and remove 2 as it is smallest ,then pick 3 and 4 and remove 3 , now a single element is left so answer is YES.

Sample 2:
InputOutput3
1 3 4NO
Explanation:

There is no way to reduce the array to a single element.</a></h2>