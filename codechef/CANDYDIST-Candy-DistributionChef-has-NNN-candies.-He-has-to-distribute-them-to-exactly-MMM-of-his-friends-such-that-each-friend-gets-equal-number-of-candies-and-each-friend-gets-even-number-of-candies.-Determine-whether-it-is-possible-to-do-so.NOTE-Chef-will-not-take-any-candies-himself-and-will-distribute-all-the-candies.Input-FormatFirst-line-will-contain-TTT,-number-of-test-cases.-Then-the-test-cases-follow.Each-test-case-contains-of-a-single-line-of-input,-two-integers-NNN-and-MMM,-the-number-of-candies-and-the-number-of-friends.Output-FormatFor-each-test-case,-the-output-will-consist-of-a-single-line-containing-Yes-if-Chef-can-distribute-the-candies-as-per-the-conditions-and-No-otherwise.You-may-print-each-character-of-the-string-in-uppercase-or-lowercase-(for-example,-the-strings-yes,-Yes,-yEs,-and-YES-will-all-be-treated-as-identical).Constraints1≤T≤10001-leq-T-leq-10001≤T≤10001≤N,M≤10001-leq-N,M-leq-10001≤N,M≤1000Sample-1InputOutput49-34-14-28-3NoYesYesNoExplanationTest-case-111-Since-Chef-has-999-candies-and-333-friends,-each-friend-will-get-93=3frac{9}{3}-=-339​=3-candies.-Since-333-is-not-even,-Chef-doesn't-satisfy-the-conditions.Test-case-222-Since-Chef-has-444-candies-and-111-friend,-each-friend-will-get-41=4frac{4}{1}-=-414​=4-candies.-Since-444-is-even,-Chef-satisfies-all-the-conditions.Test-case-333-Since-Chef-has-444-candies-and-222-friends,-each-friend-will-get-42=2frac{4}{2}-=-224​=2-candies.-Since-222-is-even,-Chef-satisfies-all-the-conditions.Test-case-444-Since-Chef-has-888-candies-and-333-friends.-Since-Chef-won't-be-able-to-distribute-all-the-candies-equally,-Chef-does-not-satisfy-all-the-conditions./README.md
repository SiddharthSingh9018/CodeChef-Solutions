<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD08/problems/CANDYDIST?tab=Submissions">Candy DistributionChef has NNN candies. He has to distribute them to exactly MMM of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.
NOTE: Chef will not take any candies himself and will distribute all the candies.

Input Format

First line will contain TTT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers NNN and MMM, the number of candies and the number of friends.


Output Format
For each test case, the output will consist of a single line containing Yes if Chef can distribute the candies as per the conditions and No otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

Constraints


1≤T≤10001 \leq T \leq 10001≤T≤1000
1≤N,M≤10001 \leq N,M \leq 10001≤N,M≤1000


Sample 1:
InputOutput4
9 3
4 1
4 2
8 3No
Yes
Yes
No
Explanation:

Test case 111: Since Chef has 999 candies and 333 friends, each friend will get 93=3\frac{9}{3} = 339​=3 candies. Since 333 is not even, Chef doesn't satisfy the conditions.
Test case 222: Since Chef has 444 candies and 111 friend, each friend will get 41=4\frac{4}{1} = 414​=4 candies. Since 444 is even, Chef satisfies all the conditions.
Test case 333: Since Chef has 444 candies and 222 friends, each friend will get 42=2\frac{4}{2} = 224​=2 candies. Since 222 is even, Chef satisfies all the conditions.
Test case 444: Since Chef has 888 candies and 333 friends. Since Chef won't be able to distribute all the candies equally, Chef does not satisfy all the conditions.</a></h2>