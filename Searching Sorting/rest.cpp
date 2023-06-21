#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    // FAILED approach of sorting the given pairs as consecutively adding the "compatible" pairs leads to false ans as they forget th consider the fact the customers do leave as well and not always stays in the restuarent

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++) {
        int a,b;
        cin>>a>>b;
        // +- 1 as it is for a single customer
        v.push_back({a,1}); // coming 
        v.push_back({b,-1}); // leaving 
    }

    sort(v.begin(),v.end());

    // max-subarr sum -- KADANE

    int local, global;
    local = global = 0;

    for(auto p : v) {
        local += p.second;
        if(local < 0) local = 0;
        global = max(global, local);
    }
    cout<<global<<"\n";
}