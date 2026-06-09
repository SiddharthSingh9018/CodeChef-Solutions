<h2><a href="https://www.codechef.com/practice/course/interview-dsa/DSAPREP_01/problems/MONSTER1?tab=solution">Defeat The Monster 1A monster has HHH health points. Each time you hit it with a sword it loses XXX health points. However, the monster always gains YYY health points right before every one of your hits.
The monster is considered defeated when the number of health points it has becomes zero or less than zero. You need to find if it is possible to defeat the monster.

Input Format


The first line of the input contains a single integer TTT - the number of test cases. The description of TTT test cases follows.


The first line of each test case contains three space-separated integers HHH, XXX and YYY.



Output Format

For each test case, print a single line containing one integer. That integer should be 111 if it is possible to defeat the monster and 000 otherwise.


Constraints


1≤T≤1001 \leq T \leq 1001≤T≤100
1≤H,X,Y≤10181 \leq H,X,Y \leq 10^{18}1≤H,X,Y≤1018


Sample 1:
InputOutput4
3 6 2
4 6 3
7 1 2
1 1 21
1
0
0
Explanation:

Example case 1: The monster will have 3+2=53+2=53+2=5 health points before the first hit. Therefore, it will be defeated after the first hit.
Example case 2: The monster will have 4+3=74+3=74+3=7 health points before the first hit. After the first hit, the monster will have 7−6=17-6=17−6=1 health point. Before the second hit, the monster will have 1+3=41+3=41+3=4 health points. Therefore, it will be defeated after the second hit.
Example case 3: It is impossible to defeat the monster.
Example case 4: It is impossible to defeat the monster.</a></h2>