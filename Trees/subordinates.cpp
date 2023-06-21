#include <bits/stdc++.h>
using namespace std;

vector<int> adj[int(1e6)];
vector<int> ans(int(1e6), 0);

int helper(int node) {
    if(adj[node].size() == 0) return 0;

    for(auto neighbor : adj[node]) {
        ans[node] += helper(neighbor) + 1;
    }

    return ans[node];
}

int main() {
    int n;
    cin>>n;

    for(int i=2;i<=n;i++) {
        int boss;
        cin>>boss;

        adj[boss].push_back(i); // directed graph
    }

    helper(1);

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<"\n";

}