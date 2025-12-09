#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> visited;

void dfs(int node) {
    visited[node] = 1;
    for (int nxt : adj[node]) {
        if (!visited[nxt]) dfs(nxt);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.assign(n, {});
    visited.assign(n, 0);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int components = 0;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            components++;
            dfs(i);
        }
    }

    cout << components << endl;

    return 0;
}






