# Design-and-analysis-of-algorithms-nptel
solutions of programming assignment if DAA nptel course

week-2 problem statement :

Road Trips and Museums:-

Lavanya and Nikhil have K months of holidays ahead of them, and they want to go on exactly K road trips, one a month. They have a map of the various cities in the world with the roads that connect them. There are N cities, numbered from 1 to N. We say that you can reach city B from city A if there is a sequence of roads that starts from city A and ends at city B. Note that the roads are bidirectional. Hence, if you can reach city B from city A, you can also reach city A from city B.
Lavanya first decides which city to start from. In the first month, they will start from that city, and they will visit every city that they can reach by road from that particular city, even if it means that they have to pass through cities that they have already visited previously. Then, at the beginning of the second month, Nikhil picks a city that they haven't visited till then. In the second month, they first fly to that city and visit all the cities that they can reach from that city by road. Then, in the third month, Lavanya identifies a city, and they fly there and visit all cities reachable from there by road. Then in the fourth month it is Nikhil's turn to choose an unvisited city to start a road trip, and they alternate like this. Note that the city that they fly to (that is, the city from where they start each month's road trip) is also considered as being visited.
Each city has some museums, and when they visit a city for the first time, Lavanya makes them visit each of the museums there. Lavanya loves going to museums, but Nikhil hates them. Lavanya always makes her decisions so that they visit the maximum number of museums possible that month, while Nikhil picks cities so that the number of museums visited that month is minimized.
Given a map of the roads, the number of museums in each city, and the number K, find the total number of museums that they will end up visiting at the end of K months. Print -1 if they will have visited all the cities before the beginning of the Kth month, and hence they will be left bored at home for some of the K months.

Solution hint
Use BFS/DFS to identify the connected components of the underlying undirected graph. Sort the components based on how many museums they contain and make appropriate choices for Lavanya and Nikhil each month.

Input format
The first line of each testcase contains three integers: N, M and K, which represents the number of cities, number of roads and the number of months.
The ith of the next M lines contains two integers, ui and vi. This denotes that there is a direct road between city ui and city vi.
The next line contains N integers, the ith of which represents the number of museums in city i.
Output format
If they can go on K road trips, output a single line containing a single integer which should be the total number of museums they visit in the K months. Output -1 if they can't go on K road trips.

Constraints
1 ≤ T ≤ 3
1 ≤ N ≤ 10^6
0 ≤ M ≤ 10^6
1 ≤ K ≤ 10^6
1 ≤ ui, vi ≤ N
There is no road which goes from one city to itself. ie. ui ≠ vi.
There is at most one direct road between a pair of cities.
0 ≤ Number of museums in each city ≤ 1000
Sum of N over all testcases in a file will be ≤ 1.5 * 10^6

Sample input 1
10 10 3
1 3
3 5
5 1
1 6
6 2
5 6
2 5
7 10
4 7
10 9
20 0 15 20 25 30 30 150 35 20
Sample output 1
345

week-3 problem statement :

Padayatra :-

The exit polls indicate that the sitting MLA is likely to lose the upcoming election. The party high command instructs him to undertake a padayatra through his constituency to boost his popularity. To maximize coverage of the constituency, the party decides that he should choose a circular route that returns to the starting point without using any road twice. The route need not visit all the towns and villages in the constituency.
Being averse to physical exercise, the MLA would like to minimize the distance that he has to walk. He has a helicopter at his disposal, so he can begin the padayatra at any town or village.
The task is to help him find the shortest circular route. You are guaranteed that there is always at least one circular route.

Solution Hint
Given an edge (i,j) with weight W(i,j), the shortest cycle from i to i via j can be found by temporarily deleting the edge (i,j), finding the shortest path from j to i, and then adding W(i,j) to the length of this path. Do this systematically to find the shortest cycle in the graph.

Input format
The first line of input is an integer N, 1 ≤ N ≤ 1000, the number of roads in the constituency. The constituency has no more than 300 towns and villages connected by roads.

The next N lines specify the roads. Each line consists of three space separated integers S, T and D where S is the starting point of the road, T is the ending point and D is the length of the road. Each road is a two-way road and is listed exactly once, in one of the two directions.

Output format
A single line with the integer distance around the shortest possible circular route.

Test data
There are at most 300 towns and villages and at most 1000 roads.

Sample Input
4
3 1 5
1 2 4
3 2 3
1 5 44
Sample output 1
12
