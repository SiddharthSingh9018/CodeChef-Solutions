<h2><a href="https://www.codechef.com/DSAMONDAY010/problems/ROBOHELP">Chef and the Frisbee

Chef is playing frisbee with his dog, Buddy, in a large 2D park. Chef is currently standing at coordinates 
(
𝑥
1
,
𝑦
1
)
(x
1
	​

,y
1
	​

) and Buddy is sitting at coordinates 
(
𝑥
2
,
𝑦
2
)
(x
2
	​

,y
2
	​

).

Chef wants to throw the frisbee directly to Buddy. However, Chef can only throw the frisbee in one of the four cardinal directions: "left", "right", "up", or "down". Once thrown, the frisbee travels in a straight line in that direction.

Help Chef by determining the direction in which he should throw the frisbee so that it reaches Buddy. If it is impossible for the frisbee to reach Buddy in a single straight-line throw, output "sad".

Input Format
The first line of the input contains a single integer 
𝑇
T denoting the number of test cases.
Each test case consists of a single line containing four space-separated integers 
𝑥
1
,
𝑦
1
,
𝑥
2
,
𝑦
2
x
1
	​

,y
1
	​

,x
2
	​

,y
2
	​

 representing the coordinates of Chef and Buddy, respectively.
Output Format
For each test case, output a single line containing "left", "right", "up", "down", or "sad" (without quotes).
Constraints
1
≤
𝑇
≤
5000
1≤T≤5000
0
≤
𝑥
1
,
𝑦
1
,
𝑥
2
,
𝑦
2
≤
100
0≤x
1
	​

,y
1
	​

,x
2
	​

,y
2
	​

≤100
It is guaranteed that Chef and Buddy are not standing at the same coordinates.
Sample 1:
Input
Output
2
0 0 0 5
1 2 5 2
up
right
Explanation:
Test Case 1: Chef is at 
(
0
,
0
)
(0,0) and Buddy is at 
(
0
,
5
)
(0,5). Since they share the same x-coordinate and Buddy is above Chef (
𝑦
2
>
𝑦
1
y
2
	​

>y
1
	​

), Chef must throw the frisbee "up".
Test Case 2: Chef is at 
(
1
,
2
)
(1,2) and Buddy is at 
(
5
,
2
)
(5,2). Since they share the same y-coordinate and Buddy is to the right of Chef (
𝑥
2
>
𝑥
1
x
2
	​

>x
1
	​

), Chef must throw the frisbee "right".</a></h2>