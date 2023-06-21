#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n,m,k;
    cin>>n>>m>>k;

    ll a[n], b[m];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    // greedy

    int ans = 0;

    for(int i=0,j=0;i<n && j<m;) {

        while(j<m && b[j] < a[i]-k) {
            j++;
            // incr i here would be incorrect as there may occur an apartment ahead whose size matches the curr guy's req

            // TC: k = 10
            // 20 21 31 35 39 41 49 74 86 90 
            // 4 7 14 24 24 60 82 82 85 95 
            // ans: 6
        }
        if(j == m) continue;

        if(b[j] <= a[i]+k) {
            ans++;
            j++;
        }
        i++;
    }

    cout<<ans<<endl;
}