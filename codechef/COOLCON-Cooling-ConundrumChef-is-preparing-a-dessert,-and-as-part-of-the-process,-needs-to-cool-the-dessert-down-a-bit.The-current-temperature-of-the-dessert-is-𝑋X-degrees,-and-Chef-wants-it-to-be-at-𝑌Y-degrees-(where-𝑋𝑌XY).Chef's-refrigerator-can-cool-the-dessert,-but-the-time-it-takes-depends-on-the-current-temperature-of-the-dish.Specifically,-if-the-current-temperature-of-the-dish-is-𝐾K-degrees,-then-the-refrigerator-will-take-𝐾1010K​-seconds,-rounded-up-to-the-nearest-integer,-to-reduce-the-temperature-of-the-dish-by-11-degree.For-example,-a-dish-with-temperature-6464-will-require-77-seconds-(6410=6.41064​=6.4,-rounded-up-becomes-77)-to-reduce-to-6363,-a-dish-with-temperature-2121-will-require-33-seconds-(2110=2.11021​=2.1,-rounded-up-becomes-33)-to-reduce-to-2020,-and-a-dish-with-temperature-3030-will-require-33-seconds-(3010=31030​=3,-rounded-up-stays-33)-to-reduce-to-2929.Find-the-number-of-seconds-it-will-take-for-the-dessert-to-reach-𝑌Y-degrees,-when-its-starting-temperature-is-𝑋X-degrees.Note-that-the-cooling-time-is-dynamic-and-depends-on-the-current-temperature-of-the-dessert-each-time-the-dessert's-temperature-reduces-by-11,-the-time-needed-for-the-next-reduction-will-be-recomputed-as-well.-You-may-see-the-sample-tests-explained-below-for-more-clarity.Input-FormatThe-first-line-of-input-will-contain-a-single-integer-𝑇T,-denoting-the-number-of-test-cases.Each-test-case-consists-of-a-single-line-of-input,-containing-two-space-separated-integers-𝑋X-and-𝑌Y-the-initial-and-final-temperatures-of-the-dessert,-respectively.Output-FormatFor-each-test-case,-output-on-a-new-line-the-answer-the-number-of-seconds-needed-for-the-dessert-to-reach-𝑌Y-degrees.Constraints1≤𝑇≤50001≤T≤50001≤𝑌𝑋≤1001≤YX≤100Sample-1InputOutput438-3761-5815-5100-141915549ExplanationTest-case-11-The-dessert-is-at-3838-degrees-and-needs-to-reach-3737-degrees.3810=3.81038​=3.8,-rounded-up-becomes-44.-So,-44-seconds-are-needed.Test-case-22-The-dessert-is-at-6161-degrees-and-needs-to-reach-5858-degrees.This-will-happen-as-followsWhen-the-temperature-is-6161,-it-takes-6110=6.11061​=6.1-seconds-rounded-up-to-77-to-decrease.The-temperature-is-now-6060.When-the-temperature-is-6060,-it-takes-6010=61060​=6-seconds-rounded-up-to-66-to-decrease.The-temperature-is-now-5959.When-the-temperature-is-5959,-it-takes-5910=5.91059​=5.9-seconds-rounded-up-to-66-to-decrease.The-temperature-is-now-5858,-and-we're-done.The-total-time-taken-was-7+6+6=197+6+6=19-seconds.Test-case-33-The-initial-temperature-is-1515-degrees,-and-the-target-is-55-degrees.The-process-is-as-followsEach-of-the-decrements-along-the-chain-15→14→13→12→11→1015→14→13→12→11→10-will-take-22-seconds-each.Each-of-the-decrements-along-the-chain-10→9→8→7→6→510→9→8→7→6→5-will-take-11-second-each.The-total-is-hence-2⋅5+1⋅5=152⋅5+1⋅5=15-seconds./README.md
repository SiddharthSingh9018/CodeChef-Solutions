<h2><a href="https://www.codechef.com/START245D/problems/COOLCON">Cooling Conundrum

Chef is preparing a dessert, and as part of the process, needs to cool the dessert down a bit.

The current temperature of the dessert is 
𝑋
X degrees, and Chef wants it to be at 
𝑌
Y degrees (where 
𝑋
>
𝑌
X>Y).

Chef's refrigerator can cool the dessert, but the time it takes depends on the current temperature of the dish.
Specifically, if the current temperature of the dish is 
𝐾
K degrees, then the refrigerator will take 
𝐾
10
10
K
	​

 seconds, rounded up to the nearest integer, to reduce the temperature of the dish by 
1
1 degree.

For example, a dish with temperature 
64
64 will require 
7
7 seconds (
64
10
=
6.4
10
64
	​

=6.4, rounded up becomes 
7
7) to reduce to 
63
63, a dish with temperature 
21
21 will require 
3
3 seconds (
21
10
=
2.1
10
21
	​

=2.1, rounded up becomes 
3
3) to reduce to 
20
20, and a dish with temperature 
30
30 will require 
3
3 seconds (
30
10
=
3
10
30
	​

=3, rounded up stays 
3
3) to reduce to 
29
29.

Find the number of seconds it will take for the dessert to reach 
𝑌
Y degrees, when its starting temperature is 
𝑋
X degrees.
Note that the cooling time is dynamic and depends on the current temperature of the dessert - each time the dessert's temperature reduces by 
1
1, the time needed for the next reduction will be recomputed as well. You may see the sample tests explained below for more clarity.

Input Format
The first line of input will contain a single integer 
𝑇
T, denoting the number of test cases.
Each test case consists of a single line of input, containing two space-separated integers 
𝑋
X and 
𝑌
Y: the initial and final temperatures of the dessert, respectively.
Output Format

For each test case, output on a new line the answer: the number of seconds needed for the dessert to reach 
𝑌
Y degrees.

Constraints
1
≤
𝑇
≤
5000
1≤T≤5000
1
≤
𝑌
<
𝑋
≤
100
1≤Y<X≤100
Sample 1:
Input
Output
4
38 37
61 58
15 5
100 1

4
19
15
549

Explanation:

Test case 
1
1: The dessert is at 
38
38 degrees and needs to reach 
37
37 degrees.

38
10
=
3.8
10
38
	​

=3.8, rounded up becomes 
4
4. So, 
4
4 seconds are needed.

Test case 
2
2: The dessert is at 
61
61 degrees and needs to reach 
58
58 degrees.
This will happen as follows:

When the temperature is 
61
61, it takes 
61
10
=
6.1
10
61
	​

=6.1 seconds rounded up to 
7
7 to decrease.
The temperature is now 
60
60.
When the temperature is 
60
60, it takes 
60
10
=
6
10
60
	​

=6 seconds rounded up to 
6
6 to decrease.
The temperature is now 
59
59.
When the temperature is 
59
59, it takes 
59
10
=
5.9
10
59
	​

=5.9 seconds rounded up to 
6
6 to decrease.
The temperature is now 
58
58, and we're done.

The total time taken was 
7
+
6
+
6
=
19
7+6+6=19 seconds.

Test case 
3
3: The initial temperature is 
15
15 degrees, and the target is 
5
5 degrees.
The process is as follows:

Each of the decrements along the chain 
15
→
14
→
13
→
12
→
11
→
10
15→14→13→12→11→10 will take 
2
2 seconds each.
Each of the decrements along the chain 
10
→
9
→
8
→
7
→
6
→
5
10→9→8→7→6→5 will take 
1
1 second each.
The total is hence 
2
⋅
5
+
1
⋅
5
=
15
2⋅5+1⋅5=15 seconds.</a></h2>