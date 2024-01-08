/*
Code : Has Path
Given an undirected graph G(V, E) and two vertices v1 and v2 (as integers), check if there exists any path between them or not. Print 
true if the path exists and false otherwise.
Note:
1. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
2. E is the number of edges present in graph G.
Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains two integers, that denote that there exists an edge between vertex 'a' and 'b'.
The following line contain two integers, that denote the value of v1 and v2.
Output Format :
The first and only line of output contains true, if there is a path between v1 and v2 and false otherwise.
Constraints :
0 <= V <= 1000
0 <= E <= 1000
0 <= a <= V - 1
0 <= b <= V - 1
0 <= v1 <= V - 1
0 <= v2 <= V - 1
Time Limit: 1 second
Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3
Sample Output 1 :
true
Sample Input 2 :
6 3
5 3
0 1
3 4
0 3
Sample Output 2 :
false
*/

#include <iostream>
using namespace std;
bool haspath(int **graph, bool *vis, int v, int s, int e) {
  if (graph[s][e])
    return true;
  vis[s] = true;
  for (int i = 0; i < v; i++) {
    if (graph[s][i] == 1 && !vis[i]) {
      if (haspath(graph, vis, v, i, e))
        return true;
    }
  }
  return false;
}

int main() {
  // Write your code here
  int V, E;
  cin >> V >> E;
  int **graph = new int *[V];
  for (int i = 0; i < V; i++) {
    graph[i] = new int[V];
    for (int j = 0; j < V; j++) {
      graph[i][j] = 0;
    }
  }
  for (int i = 0; i < E; i++) {
    int x, y;
    cin >> x >> y;
    graph[x][y] = 1;
    graph[y][x] = 1;
  }
  int s, e;
  cin >> s >> e;
  bool *vis = new bool[V];
  for (int i = 0; i < V; i++) {
    vis[i] = false;
  }
  bool ans = haspath(graph, vis, V, s, e);
  if (ans)
    cout << "true" << endl;
  else
    cout << "false" << endl;

  delete[] vis;
  for (int i = 0; i < V; i++) {
    delete[] graph[i];
  }
  delete[] graph;
}