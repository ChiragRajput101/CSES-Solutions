#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(), a.end());

    // greedy approach -- we add the curr ele to curr if it less than curr else we break out and return the curr
    long long curr = 1;
    for(int i=0;i<n;i++) {
        if(curr >= a[i]) curr += a[i];
        else break;
    }

    cout<<curr<<"\n";
}