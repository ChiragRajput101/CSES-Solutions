#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a, a+n);

    int ans = 1;
    int el = a[0];

    for(int i=1;i<n;i++) {
        if(a[i] != el) {
            el = a[i];
            ans++;
        }
    }

    cout<<ans<<endl;
}