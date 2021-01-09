# include <bits/stdc++.h>

using namespace std;

int main() {
    int v, e, x, y;
    cin>>v>>e;
    list <int> ar[v], q; // store graph as adjacency list, visited nodes to be pushed into q
    bool visited[v]; // boolean array to keep track of visited vertices
    for (int i = 0; i < v; ++i)
        visited[i] = 0; // set all vertices as unvisited
    for (int i = 0; i < e; ++i) {
        cin>>x>>y;
        ar[x].push_back(y);
    }
    q.push_back(0);
    visited[0] = 1; // visit first node 0
    int s;
    while (!q.empty()) { // BFS Code
        s = q.front();
        cout<<s<<" ";
        q.pop_front();
        for (list<int>::iterator it = ar[s].begin(); it != ar[s].end(); ++it) { // iterate through all the adjacent vertices of vertice s
            if (!visited[*it]) {
                q.push_back(*it); // add vertice to q if not previously visited
                visited[*it] = 1;
            }
        }
    }
    return 0;
}