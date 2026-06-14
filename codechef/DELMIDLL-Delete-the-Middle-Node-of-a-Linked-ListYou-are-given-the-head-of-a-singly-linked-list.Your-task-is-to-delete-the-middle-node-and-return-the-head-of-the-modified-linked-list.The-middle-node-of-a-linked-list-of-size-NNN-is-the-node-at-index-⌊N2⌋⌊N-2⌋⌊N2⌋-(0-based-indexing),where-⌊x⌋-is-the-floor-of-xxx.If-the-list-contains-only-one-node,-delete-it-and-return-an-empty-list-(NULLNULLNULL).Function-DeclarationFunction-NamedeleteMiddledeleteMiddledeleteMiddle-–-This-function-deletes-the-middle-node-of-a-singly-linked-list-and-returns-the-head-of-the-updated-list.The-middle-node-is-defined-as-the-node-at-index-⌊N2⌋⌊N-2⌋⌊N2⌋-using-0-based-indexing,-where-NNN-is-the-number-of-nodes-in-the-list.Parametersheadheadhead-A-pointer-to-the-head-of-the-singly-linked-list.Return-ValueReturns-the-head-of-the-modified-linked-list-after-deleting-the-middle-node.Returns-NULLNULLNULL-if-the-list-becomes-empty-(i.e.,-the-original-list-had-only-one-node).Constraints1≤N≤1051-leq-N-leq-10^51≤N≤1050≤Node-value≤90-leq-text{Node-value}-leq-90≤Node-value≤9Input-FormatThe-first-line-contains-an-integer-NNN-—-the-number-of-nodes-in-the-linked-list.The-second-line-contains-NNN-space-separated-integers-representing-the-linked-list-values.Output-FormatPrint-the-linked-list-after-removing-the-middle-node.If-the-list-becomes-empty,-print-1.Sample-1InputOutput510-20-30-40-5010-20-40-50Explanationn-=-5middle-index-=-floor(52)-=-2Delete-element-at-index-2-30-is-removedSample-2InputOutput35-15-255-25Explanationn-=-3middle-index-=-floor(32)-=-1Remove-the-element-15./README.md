<h2><a href="https://www.codechef.com/practice/course/linked-lists/LINKLISTP/problems/DELMIDLL?tab=Submissions">Delete the Middle Node of a Linked ListYou are given the head of a singly linked list.
Your task is to delete the middle node and return the head of the modified linked list.
The middle node of a linked list of size NNN is the node at index ⌊N/2⌋⌊N / 2⌋⌊N/2⌋ (0-based indexing),
where ⌊x⌋ is the floor of xxx.
If the list contains only one node, delete it and return an empty list (NULLNULLNULL).
Function Declaration
Function Name
deleteMiddledeleteMiddledeleteMiddle – This function deletes the middle node of a singly linked list and returns the head of the updated list.
The middle node is defined as the node at index ⌊N/2⌋⌊N / 2⌋⌊N/2⌋ using 0-based indexing, where NNN is the number of nodes in the list.
Parameters

headheadhead : A pointer to the head of the singly linked list.

Return Value

Returns the head of the modified linked list after deleting the middle node.
Returns NULLNULLNULL if the list becomes empty (i.e., the original list had only one node).

Constraints

1≤N≤1051 \leq N \leq 10^51≤N≤105
0≤Node value≤90 \leq \text{Node value} \leq 90≤Node value≤9


Input Format

The first line contains an integer NNN — the number of nodes in the linked list.
The second line contains NNN space-separated integers representing the linked list values.


Output Format

Print the linked list after removing the middle node.
If the list becomes empty, print -1.


Sample 1:
InputOutput5
10 20 30 40 50
10 20 40 50

Explanation:

n = 5
middle index = floor(5/2) = 2
Delete element at index 2 -> 30 is removed

Sample 2:
InputOutput3
5 15 25
5 25

Explanation:

n = 3
middle index = floor(3/2) = 1
Remove the element 15.</a></h2>