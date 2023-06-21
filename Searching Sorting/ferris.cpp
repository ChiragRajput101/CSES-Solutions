#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;

    int p[n];
    for(int i=0;i<n;i++) cin>>p[i];

    // classic 2 sum problem

    int ans = n;

    sort(p,p+n);

    int i=0, j=n-1;

    while(i<j) {
        if(p[i]+p[j] <= x) {
            i++;
            ans--;
        }
        j--;
    }

    cout<<ans<<"\n";
}