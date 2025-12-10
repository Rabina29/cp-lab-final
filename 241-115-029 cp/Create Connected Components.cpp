#include <vector>
using namespace std;


void dfs(int u, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v])
            dfs(v, adj, visited);
    }
}


int findParent(int u, vector<int>& parent) {
    if (parent[u] != u)
        parent[u] = findParent(parent[u], parent); // path compression
    return parent[u];
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);
    if (pu == pv) return;

  
    if (rank[pu] < rank[pv]) parent[pu] = pv;
    else if (rank[pu] > rank[pv]) parent[pv] = pu;
    else {
        parent[pv] = pu;
        rank[pu]++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n);
    vector<int> parent(n), rank(n, 0);
    for (int i = 0; i < n; i++) parent[i] = i;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        unionSets(u, v, parent, rank);
    }


    vector<bool> visited(n, false);
    int dfsComponents = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfsComponents++;
            dfs(i, adj, visited);
        }
    }

   
    int ufComponents = 0;
    for (int i = 0; i < n; i++)
        if (parent[i] == i) ufComponents++; 

    cout << "DFS Components: " << dfsComponents << endl;
    cout << "Union-Find Components: " << ufComponents << endl;

    return 0;
}