<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD13/problems/PGPDZ01?tab=Submissions">Chef robs houseChef is planning a heist along a street filled with houses. Each house contains a certain amount of money houseValueshouseValueshouseValues, but Chef cannot rob two adjacent houses on the same night because their security systems are linked and will immediately alert the police. 
Chef wants to maximize the total amount of money robbed without triggering any alarms.
Help Chef determine the maximum amount of money he can safely rob tonight by choosing houses such that no two robbed houses are next to each other.
Function Declaration
Function Name
calculateMaxRobberycalculateMaxRobberycalculateMaxRobbery - This function calculates the maximum amount of money that can be robbed from a list of houses without robbing two adjacent houses.
Parameters

houseValueshouseValueshouseValues : A reference to a vector containing the values of money in each house.
Each element represents the amount of money available in a single house.
The vector size corresponds to the total number of houses.

Return Value

Returns a number representing the maximum sum of money that can be robbed.
The output is a single integer indicating the optimal robbery amount without alerting the police.
The value is calculated based on non-adjacent selections from houseValueshouseValueshouseValues.

Constraints

1≤T≤1051 \leq T \leq 10^51≤T≤105
1≤numberofhouses≤1001 \leq number of houses \leq 1001≤numberofhouses≤100
0≤houseValues[i]≤4000 \leq houseValues[i] \leq 4000≤houseValues[i]≤400


Input Format

The first line contains a single integer TTT — the number of test cases.
Each test case consists of two lines:

The next line contains of comma separated integers in [] — the values of money in each house represented by houseValueshouseValueshouseValues.




Output Format

For each test case, print a single line containing the maximum amount of money Chef can rob without alerting the police.


Sample 1:
InputOutput4
[2, 1, 1, 2]
[10, 0, 0, 10, 10]
[5, 5, 5]
[1, 2, 9, 4, 5, 0]4
20
10
15
Explanation:


t=1: Rob houses 1 and 4 (2 + 2 = 4), skipping adjacent houses for max sum.
t=2: Rob houses 1, 4, and 5 (10 + 10 + 10 = 30), but since houses 4 and 5 are adjacent, best is houses 1 and 5 (10 + 10 = 20).
t=3: Rob houses 1 and 3 (5 + 5 = 10), skipping house 2 to avoid adjacency.
t=4: Rob houses 1, 3, and 5 (1 + 9 + 5 = 15) for maximum loot without robbing adjacent houses.


Sample 2:
InputOutput3
[3, 2, 5, 10, 7, 8, 4]
[100]
[0, 0, 0, 0, 0, 0, 0, 0]23
100
0
Explanation:


t1: Rob houses with values 3, 5, 7, 8 for max sum 23 without robbing adjacent houses.
t2: Only one house with 100, so max sum is 100.
t3: All houses have 0, so max sum is 0.


Sample 3:
InputOutput2
[50, 50]
[1, 2, 3, 1, 5, 6, 1, 2, 9]50
21
Explanation:


For the first test case, robbing either house gives 50, so max amount is 50.
For the second test case, rob houses with amounts 1, 3, 5, 6, and 9 to get 21 without robbing adjacent houses.</a></h2>