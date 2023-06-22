#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;

    int h[n], s[n]; // price, pages resp
    for(int i=0;i<n;i++) cin>>h[i];
    for(int i=0;i<n;i++) cin>>s[i];

    // straight forward Knapsack (1-0)

    // state- dp[i][price]: max poss pages that we can get by picking up i books and by paying price from 0 to i

    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    
    // i here represents the no of books
    // so for i=0, dp[0][w=0 .. w=x] = 0 --> if you don't pickup any book, then the max pages we have taken are obviously zero
    
    for(int i=1;i<=n;i++) {
        for(int wt=0;wt<=x;wt++) {
            dp[i][wt] = dp[i-1][wt];
            if(wt-h[i-1] >= 0) {
                dp[i][wt] = max(dp[i][wt], dp[i-1][wt-h[i-1]]+s[i-1]); 
            }
        }
    }

    cout<<dp[n][x]<<"\n";
}