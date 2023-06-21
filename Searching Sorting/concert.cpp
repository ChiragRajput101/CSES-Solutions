#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int>a(n), b(m);
    multiset<int> s;

    for(int i=0;i<n;i++) {
        cin>>a[i];
        s.insert(a[i]);
    } 

    for(int i=0;i<m;i++) cin>>b[i]; // max price cust are willing to pay

    // BS- approach


    for(int i=0;i<m;i++) {
        auto it = s.upper_bound(b[i]); // return the smallest el > val;
        if(it == s.begin()) {
            cout<<-1<<" ";
            continue;
        }

        cout<<*(--it)<<"\n";
        s.erase(it);
    }   
}