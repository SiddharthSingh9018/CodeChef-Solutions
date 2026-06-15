<h2><a href="https://www.codechef.com/DSAMONDAY007/problems/WINGAME">Win Game

Alice is playing a game on her PC. Her current score is 
𝑎
a. To win the game, she needs a score of at least 
𝑤
w. Alice has found a bonus item that instantly increases her score by 
𝑏
b points. Determine whether Alice can win the game after collecting the bonus item.

Function Declaration
Function Name

𝑐
𝑎
𝑛
𝑊
𝑖
𝑛
canWin – This function checks whether Alice can win the game after collecting the bonus item.

Parameters

𝑎
a : An integer representing Alice's current score.

𝑏
b : An integer representing the bonus points collected.

𝑤
w : An integer representing the target score required to win.

Return Value

Returns a boolean: 
𝑡
𝑟
𝑢
𝑒
true if Alice can win the game, and 
𝑓
𝑎
𝑙
𝑠
𝑒
false otherwise.

Constraints:

0
≤
𝑎
≤
100
0≤a≤100

0
≤
𝑏
≤
100
0≤b≤100

1
≤
𝑤
≤
100
1≤w≤100

The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically.

Input Format

The first and only line of input contains three space-separated integers 
𝑎
a, 
𝑏
b and 
𝑤
w.

Output Format

Output on a single line 
𝑇
𝑟
𝑢
𝑒
True if Alice can win the game, or 
𝐹
𝑎
𝑙
𝑠
𝑒
False otherwise.

Sample 1:
Input
Output
15 10 20
True
Explanation:

Input: a = 15, b = 10, w = 20
After collecting the bonus item, Alice's score becomes 15 + 10 = 25.
Since 25 > 20, Alice reaches the required score to win the game.
Therefore, the output is True.

Sample 2:
Input
Output
49 50 100
False
Explanation:

Input: a = 49, b = 50, w = 100
After collecting the bonus item, Alice's score becomes 49 + 50 = 99.
Since 99 < 100, Alice does not reach the required score to win the game.
Therefore, the output is False.</a></h2>