# include <bits/stdc++.h>

using namespace std;

int main() {
    int v, e, x, y;
    cin>>v>>e;
    list <int> ar[v], q;
    bool visited[v];
    for (int i = 0; i < v; ++i)
        visited[i] = 0;
    for (int i = 0; i < e; ++i) {
        cin>>x>>y;
        ar[x].push_back(y);
    }
    q.push_back(0);
    visited[0] = 1;
    int s;
    while (!q.empty()) {
        s = q.front();
        cout<<s<<" ";
        q.pop_front();
        for (list<int>::iterator it = ar[s].begin(); it != ar[s].end(); ++it) {
            if (!visited[*it]) {
                q.push_back(*it);
                visited[*it] = 1;
            }
        }
    }
    return 0;
}