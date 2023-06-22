#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1, 1e9);
    // state- dp[x]: min number of steps to reach x 
    dp[0] = 0;

    for(int i=0;i<=n;i++) {
        int currDig = i; // not n here for every iteration 
        while(currDig) {
            int dig = currDig%10;
            dp[i] = min(dp[i],dp[i-dig]+1);
            currDig /= 10;
        }
    }
    cout<<dp[n]<<"\n";
}