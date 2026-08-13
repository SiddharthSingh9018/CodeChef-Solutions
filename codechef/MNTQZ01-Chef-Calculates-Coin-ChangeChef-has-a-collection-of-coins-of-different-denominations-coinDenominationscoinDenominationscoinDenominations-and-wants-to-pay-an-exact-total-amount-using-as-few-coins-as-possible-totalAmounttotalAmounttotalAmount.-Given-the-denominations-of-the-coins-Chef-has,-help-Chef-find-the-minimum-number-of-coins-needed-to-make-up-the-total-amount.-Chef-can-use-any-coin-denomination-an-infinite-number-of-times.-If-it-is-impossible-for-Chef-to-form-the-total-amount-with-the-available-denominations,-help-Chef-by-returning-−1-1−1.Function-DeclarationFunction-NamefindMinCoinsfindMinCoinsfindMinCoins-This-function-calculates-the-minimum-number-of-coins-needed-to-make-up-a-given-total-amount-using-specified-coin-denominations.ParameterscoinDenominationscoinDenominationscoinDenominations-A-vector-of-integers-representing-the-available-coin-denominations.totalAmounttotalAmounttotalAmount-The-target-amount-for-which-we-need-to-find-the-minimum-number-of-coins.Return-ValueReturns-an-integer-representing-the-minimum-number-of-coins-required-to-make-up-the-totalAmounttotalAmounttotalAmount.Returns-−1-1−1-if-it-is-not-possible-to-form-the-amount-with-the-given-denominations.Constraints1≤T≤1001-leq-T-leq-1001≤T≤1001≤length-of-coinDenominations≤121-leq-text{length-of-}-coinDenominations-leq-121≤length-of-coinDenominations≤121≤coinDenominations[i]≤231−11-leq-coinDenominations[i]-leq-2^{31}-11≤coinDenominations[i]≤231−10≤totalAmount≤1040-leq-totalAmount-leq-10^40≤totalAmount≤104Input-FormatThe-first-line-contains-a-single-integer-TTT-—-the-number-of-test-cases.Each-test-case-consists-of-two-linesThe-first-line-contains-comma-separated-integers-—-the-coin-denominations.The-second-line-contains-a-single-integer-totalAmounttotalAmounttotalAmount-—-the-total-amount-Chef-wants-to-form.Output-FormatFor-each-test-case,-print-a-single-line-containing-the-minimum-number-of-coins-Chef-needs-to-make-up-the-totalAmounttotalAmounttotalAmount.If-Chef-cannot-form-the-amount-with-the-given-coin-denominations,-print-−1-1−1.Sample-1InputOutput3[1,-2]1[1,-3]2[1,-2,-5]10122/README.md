<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD13/problems/MNTQZ01?tab=Submissions">Chef Calculates Coin ChangeChef has a collection of coins of different denominations coinDenominationscoinDenominationscoinDenominations and wants to pay an exact total amount using as few coins as possible totalAmounttotalAmounttotalAmount. Given the denominations of the coins Chef has, help Chef find the minimum number of coins needed to make up the total amount. 
Chef can use any coin denomination an infinite number of times. If it is impossible for Chef to form the total amount with the available denominations, help Chef by returning −1-1−1.
Function Declaration
Function Name
findMinCoinsfindMinCoinsfindMinCoins - This function calculates the minimum number of coins needed to make up a given total amount using specified coin denominations.
Parameters

coinDenominationscoinDenominationscoinDenominations: A vector of integers representing the available coin denominations.
totalAmounttotalAmounttotalAmount : The target amount for which we need to find the minimum number of coins.

Return Value

Returns an integer representing the minimum number of coins required to make up the totalAmounttotalAmounttotalAmount.
Returns −1-1−1 if it is not possible to form the amount with the given denominations.

Constraints

1≤T≤1001 \leq T \leq 1001≤T≤100
1≤length of coinDenominations≤121 \leq \text{length of } coinDenominations \leq 121≤length of coinDenominations≤12
1≤coinDenominations[i]≤231−11 \leq coinDenominations[i] \leq 2^{31} - 11≤coinDenominations[i]≤231−1
0≤totalAmount≤1040 \leq totalAmount \leq 10^40≤totalAmount≤104


Input Format

The first line contains a single integer TTT — the number of test cases.
Each test case consists of two lines:

The first line contains comma-separated integers — the coin denominations.
The second line contains a single integer totalAmounttotalAmounttotalAmount — the total amount Chef wants to form.




Output Format

For each test case, print a single line containing the minimum number of coins Chef needs to make up the totalAmounttotalAmounttotalAmount.
If Chef cannot form the amount with the given coin denominations, print −1-1−1.


Sample 1:
InputOutput3
[1, 2]
1
[1, 3]
2
[1, 2, 5]
101
2
2</a></h2>