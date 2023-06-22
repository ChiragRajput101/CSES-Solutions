#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main() {
    int n;
    cin>>n;

    char a[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }

    // dp[i][j] = dp[i][j-1] + dp[i-1][j]
    // state: (i,j): no of ways to reach (i,j) from (0,0)
    // final ans : dp[n-1][n-1]

    vector<vector<int>> dp(n,vector<int>(n,0));

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j] == '*') dp[i][j] = 0; // all paths coming from (0,0) after reaching a "blocked" cell would amount to 0 no of valid ways to reach (i,j)

            else if(i == 0 && j == 0) dp[i][j] = 1; // starting cell

            // not directly dp[i][j] = 1 for i=0 OR j=0 as we have traps so it depends on the prev in both cases
            // if no traps till end we've already marked dp[0][0] = 1
            
            else if(i == 0) dp[i][j] = dp[i][j-1] % mod;
            else if(j == 0) dp[i][j] = dp[i-1][j] % mod;

            else dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % mod;
        }
    }

    cout<<dp[n-1][n-1]<<"\n";
}