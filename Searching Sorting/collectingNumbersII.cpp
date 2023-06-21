#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    vector<int> pos(n);

    for(int i=0;i<n;i++) {
        cin>>a[i];
        pos[a[i]] = i;
    }

    int c = 1; // no of ops for original arr
    for(int i=1;i<=n-1;i++) {
        if(pos[i] > pos[i+1]) c++;
    }

    while(m--) {
        int p1,p2;
        cin>>p1>>p2;

        swap(a[p1-1], a[p2-1]);

        int x = a[p1-1], y = a[p2-1];
        // check for rel ordering of x-1 and x+1
        if(abs(x-y) == 1) {

        }
        else {
            if(x-1 != 0) {
                int ini = pos[x] - pos[x-1];
                int fin = p2-1 - pos[x-1];
            }

            if(x+1 != n+1) {

            }
        }
    }

    
}