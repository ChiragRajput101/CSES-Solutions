#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++) {
        int s,e;
        cin>>s>>e;

        v.push_back({e,s});
    } 

    sort(v.begin(),v.end());

    int c = 0;

    // for(int i=1;i<n;i++) {
    //     slight error in this one -- not in thinking 
    //     f(v[i].second >= v[i-1].first) c++;
    // }

    int end = 0;

    for(auto p : v) {
        if(p.second >= end) { // s >= end
            c++;
            end = p.first;
        }
    }

    cout<<c<<"\n";
}