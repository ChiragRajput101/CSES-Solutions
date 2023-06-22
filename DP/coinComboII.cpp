#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int n,x;
    cin>>n>>x;

    int coins[n];
    for(int i=0;i<n;i++) {
        cin>>coins[i];
    }

    vector<long long> dp(x+1, 0);
    dp[0] = 1; // no of WAYS to make a sum of 0 is 1 (by doing nothing)

    // The order of loops are swapped to allow only distinct orderings of the coins

    for(int j=0;j<n;j++) {
        for(int i=1;i<=x;i++) {
            if(i-coins[j] < 0) continue;
            dp[i] += dp[i-coins[j]];
            dp[i] %= mod;
        }
    }

    cout<<dp[x]<<"\n";
}