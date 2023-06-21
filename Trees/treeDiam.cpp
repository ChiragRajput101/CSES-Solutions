#include <bits/stdc++.h>
using namespace std;

vector<int> adj[int(1e6)];
vector<bool> vis(int(1e6), false);

int ans = INT_MIN;

int dfs(int node, int depth = 0) {
    vis[node] = true;
    if(adj[node].size() == 0) return depth;

    // neighbors
    for(auto neighbor : adj[node]) {
        if(!vis[neighbor]) {
            dfs(neighbor, depth+1);
        }
    }

    // return 

}

int main() {
    int n;
    cin>>n;

    for(int i=0;i<n-1;i++) {
        int p,c;
        cin>>p>>c;

        adj[p].push_back(c);
        adj[c].push_back(p);
    }
}