#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;

    int coins[n];
    for(int i=0;i<n;i++) cin>>coins[i];

    vector<long long> dp(x+1, 1e9);
    dp[0] = 0; // min no of coins to mk sum = 0

    for(int i=1;i<=x;i++) {
        for(int j=0;j<n;j++) {
            if(i-coins[j] < 0) continue;
            dp[i] = min(dp[i], dp[i-coins[j]]+1);
        }
    }

    cout<<((dp[x] == 1e9) ? -1:dp[x])<<"\n";
}