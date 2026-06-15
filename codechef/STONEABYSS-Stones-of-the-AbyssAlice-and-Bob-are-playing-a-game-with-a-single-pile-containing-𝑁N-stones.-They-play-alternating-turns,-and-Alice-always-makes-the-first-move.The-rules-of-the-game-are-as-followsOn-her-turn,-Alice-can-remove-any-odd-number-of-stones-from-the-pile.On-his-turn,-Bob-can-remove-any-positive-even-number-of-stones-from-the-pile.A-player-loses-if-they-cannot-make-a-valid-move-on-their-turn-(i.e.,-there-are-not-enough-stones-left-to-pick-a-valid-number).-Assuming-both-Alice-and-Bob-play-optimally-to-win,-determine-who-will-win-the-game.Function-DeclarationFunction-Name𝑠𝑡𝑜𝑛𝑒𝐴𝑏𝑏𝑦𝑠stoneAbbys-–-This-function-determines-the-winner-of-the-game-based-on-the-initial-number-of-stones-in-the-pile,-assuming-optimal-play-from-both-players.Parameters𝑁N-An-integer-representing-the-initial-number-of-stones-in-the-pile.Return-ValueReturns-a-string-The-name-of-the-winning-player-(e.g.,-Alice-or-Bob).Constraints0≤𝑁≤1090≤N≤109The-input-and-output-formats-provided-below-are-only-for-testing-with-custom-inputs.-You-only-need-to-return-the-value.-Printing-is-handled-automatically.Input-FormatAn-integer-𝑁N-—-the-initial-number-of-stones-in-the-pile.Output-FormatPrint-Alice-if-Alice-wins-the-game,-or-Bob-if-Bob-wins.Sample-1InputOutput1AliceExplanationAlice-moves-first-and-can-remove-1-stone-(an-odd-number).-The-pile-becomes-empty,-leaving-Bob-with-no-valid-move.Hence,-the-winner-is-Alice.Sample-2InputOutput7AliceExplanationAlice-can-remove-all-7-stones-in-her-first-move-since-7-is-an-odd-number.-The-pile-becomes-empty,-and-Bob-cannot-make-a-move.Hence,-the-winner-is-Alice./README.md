<h2><a href="https://www.codechef.com/DSAMONDAY007/problems/STONEABYSS">Stones of the Abyss

Alice and Bob are playing a game with a single pile containing 
𝑁
N stones. They play alternating turns, and Alice always makes the first move.

The rules of the game are as follows:

On her turn, Alice can remove any odd number of stones from the pile.
On his turn, Bob can remove any positive even number of stones from the pile.

A player loses if they cannot make a valid move on their turn (i.e., there are not enough stones left to pick a valid number). Assuming both Alice and Bob play optimally to win, determine who will win the game.

Function Declaration
Function Name

𝑠
𝑡
𝑜
𝑛
𝑒
𝐴
𝑏
𝑏
𝑦
𝑠
stoneAbbys – This function determines the winner of the game based on the initial number of stones in the pile, assuming optimal play from both players.

Parameters

𝑁
N : An integer representing the initial number of stones in the pile.

Return Value

Returns a string: The name of the winning player (e.g., "Alice" or "Bob").

Constraints:

0
≤
𝑁
≤
10
9
0≤N≤10
9

The input and output formats provided below are only for testing with custom inputs. You only need to return the value. Printing is handled automatically.

Input Format

An integer 
𝑁
N — the initial number of stones in the pile.

Output Format

Print Alice if Alice wins the game, or Bob if Bob wins.

Sample 1:
Input
Output
1
Alice
Explanation:

Alice moves first and can remove 1 stone (an odd number). The pile becomes empty, leaving Bob with no valid move.
Hence, the winner is Alice.

Sample 2:
Input
Output
7
Alice
Explanation:

Alice can remove all 7 stones in her first move since 7 is an odd number. The pile becomes empty, and Bob cannot make a move.
Hence, the winner is Alice.</a></h2>