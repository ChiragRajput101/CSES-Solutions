#include <bits/stdc++.h>
using namespace std;

// FAILED appr:
// GREEDY- to minimize the cost we should be operating on as less as poss sticks
// so changing them to the height of mx occuring one


// INTUITIVELY YOU THINK THAT THE VAL MUST THAT EVERYONE SHOULD BE CONV TI EXISTS IN THE MIDDLE
//  also 1 2 3 4 5 .. cases like this point to failed mx-element approach
// CHANGE TO THE MEDIAN OF SORTED ARR

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    int m = n/2;

    long long ans = 0;

    for(int i=0;i<n;i++) {
        ans += abs(a[m]-a[i]);
    }   
    cout<<ans<<'\n';
}