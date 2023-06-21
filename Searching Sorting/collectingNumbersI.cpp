#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> pos(n+1);

    for(int i=1;i<=n;i++) {
        int a;
        cin>>a;
        pos[a] = i;
    }

    // greedy -- if for x ,x+1 exists at a pos higher than x then continue else inc the count
    // THIS APPR only Works since the nos are guar to be in [1,n]

    int c = 1;
    for(int i=1;i<=n-1;i++) {
        if(pos[i] > pos[i+1]) c++; 
    }

    cout<<c<<"\n";
}