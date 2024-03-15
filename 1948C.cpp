#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(string row1, string row2, int n) {
    int reachable[n];
    reachable[0] = 1;
    reachable[1] = (row2[0]=='>');
    for(int i=2;i<n;i++) {
         if(i%2 == 0) reachable[i] = (row1[i-1]=='>') && (reachable[i-1] || reachable[i-2]);
         else reachable[i] = (row2[i-1]=='>') && (reachable[i-1] || reachable[i-2]);
    }
    return reachable[n-1];
}

int main ()
{
    // std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    int n;

    string row1;
    string row2;

    while(t--) {
        cin >> n;
        cin >> row1;
        cin >> row2;
        cout << (solve(row1,row2,n) ? "YES\n" : "NO\n");
    }

    
    return 0;
}
