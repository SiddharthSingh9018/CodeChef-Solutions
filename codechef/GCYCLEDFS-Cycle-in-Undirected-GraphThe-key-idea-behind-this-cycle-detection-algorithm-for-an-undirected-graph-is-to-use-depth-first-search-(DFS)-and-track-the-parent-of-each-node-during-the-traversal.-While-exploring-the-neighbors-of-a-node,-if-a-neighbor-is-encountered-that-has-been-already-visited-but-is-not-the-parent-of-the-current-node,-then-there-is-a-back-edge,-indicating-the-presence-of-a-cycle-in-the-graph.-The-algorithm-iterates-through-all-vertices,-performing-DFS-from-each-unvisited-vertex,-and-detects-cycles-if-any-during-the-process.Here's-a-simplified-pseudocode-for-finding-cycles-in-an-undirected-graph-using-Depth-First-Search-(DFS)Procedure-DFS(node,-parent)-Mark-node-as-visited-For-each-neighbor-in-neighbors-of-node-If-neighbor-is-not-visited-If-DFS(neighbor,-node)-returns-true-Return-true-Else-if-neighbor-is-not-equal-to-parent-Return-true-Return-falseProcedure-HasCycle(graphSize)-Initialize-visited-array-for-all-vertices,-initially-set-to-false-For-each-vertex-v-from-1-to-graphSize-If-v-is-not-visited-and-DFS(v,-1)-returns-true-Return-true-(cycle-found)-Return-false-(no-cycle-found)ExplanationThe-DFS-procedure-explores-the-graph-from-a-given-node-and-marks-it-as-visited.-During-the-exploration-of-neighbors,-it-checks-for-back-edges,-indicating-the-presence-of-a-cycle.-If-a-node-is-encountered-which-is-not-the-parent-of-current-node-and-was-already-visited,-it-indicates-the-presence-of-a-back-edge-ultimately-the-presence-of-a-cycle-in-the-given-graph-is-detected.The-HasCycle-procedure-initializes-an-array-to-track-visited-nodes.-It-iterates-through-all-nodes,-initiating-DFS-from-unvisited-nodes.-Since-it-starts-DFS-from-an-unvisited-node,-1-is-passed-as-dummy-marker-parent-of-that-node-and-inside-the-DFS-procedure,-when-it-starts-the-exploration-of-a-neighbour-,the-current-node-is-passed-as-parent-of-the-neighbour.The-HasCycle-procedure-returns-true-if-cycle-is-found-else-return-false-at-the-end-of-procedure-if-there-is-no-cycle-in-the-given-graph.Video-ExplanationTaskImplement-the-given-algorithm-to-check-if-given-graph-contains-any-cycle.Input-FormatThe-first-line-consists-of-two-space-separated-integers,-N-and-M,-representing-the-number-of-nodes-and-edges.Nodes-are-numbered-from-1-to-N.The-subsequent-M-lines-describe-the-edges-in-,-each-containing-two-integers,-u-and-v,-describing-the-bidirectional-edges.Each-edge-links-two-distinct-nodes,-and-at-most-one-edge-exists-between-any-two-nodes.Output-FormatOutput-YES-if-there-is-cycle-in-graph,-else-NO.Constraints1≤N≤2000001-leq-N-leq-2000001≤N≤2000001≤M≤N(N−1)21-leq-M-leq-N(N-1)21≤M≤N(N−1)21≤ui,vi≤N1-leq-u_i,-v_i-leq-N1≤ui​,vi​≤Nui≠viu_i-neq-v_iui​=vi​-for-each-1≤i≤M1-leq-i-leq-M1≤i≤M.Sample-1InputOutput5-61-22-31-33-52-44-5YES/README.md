<h2><a href="https://www.codechef.com/learn/course/plaksha-dsa-roadmap-2/KJASD12/problems/GCYCLEDFS?tab=Submissions">Cycle in Undirected GraphThe key idea behind this cycle detection algorithm for an undirected graph is to use depth-first search (DFS) and track the parent of each node during the traversal. While exploring the neighbors of a node, if a neighbor is encountered that has been already visited but is not the parent of the current node, then there is a back edge, indicating the presence of a cycle in the graph. The algorithm iterates through all vertices, performing DFS from each unvisited vertex, and detects cycles if any during the process.
Here's a simplified pseudocode for finding cycles in an undirected graph using Depth-First Search (DFS):
Procedure DFS(node, parent):
    Mark node as visited
    For each neighbor in neighbors of node:
        If neighbor is not visited:
            If DFS(neighbor, node) returns true:
                Return true
        Else if neighbor is not equal to parent:
            Return true
    Return false

Procedure HasCycle(graphSize):
    Initialize visited array for all vertices, initially set to false

    For each vertex v from 1 to graphSize:
        If v is not visited and DFS(v, -1) returns true:
            Return true (cycle found)

    Return false (no cycle found)


Explanation:


The DFS procedure explores the graph from a given node and marks it as visited. During the exploration of neighbors, it checks for back edges, indicating the presence of a cycle. If a node is encountered which is not the parent of current node and was already visited, it indicates the presence of a back edge ultimately the presence of a cycle in the given graph is detected.


The HasCycle procedure initializes an array to track visited nodes. It iterates through all nodes, initiating DFS from unvisited nodes. Since it starts DFS from an unvisited node, -1 is passed as dummy marker parent of that node and inside the DFS procedure, when it starts the exploration of a neighbour ,the current node is passed as parent of the neighbour.
The HasCycle procedure returns true if cycle is found else return false at the end of procedure if there is no cycle in the given graph.


Video Explanation


Task

Implement the given algorithm to check if given graph contains any cycle.


Input Format

The first line consists of two space separated integers, N and M, representing the number of nodes and edges.
Nodes are numbered from 1 to N.
The subsequent M lines describe the edges in , each containing two integers, u and v, describing the bidirectional edges.
Each edge links two distinct nodes, and at most one edge exists between any two nodes.


Output Format

Output YES if there is cycle in graph, else NO.


Constraints


1≤N≤2000001 \leq N \leq 2000001≤N≤200000
1≤M≤N(N−1)/21 \leq M \leq N(N-1)/21≤M≤N(N−1)/2
1≤ui,vi≤N1 \leq u_i, v_i \leq N1≤ui​,vi​≤N
ui≠viu_i \neq v_iui​=vi​ for each 1≤i≤M1 \leq i \leq M1≤i≤M.


Sample 1:
InputOutput5 6
1 2
2 3
1 3
3 5
2 4
4 5YES</a></h2>