#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main ()
{
    // std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    int n,k;

    while(t--) {
        cin >> n >> k;
        if(k>=n-1) cout << 1 << endl;
        else cout << n << endl;
    }
    
    return 0;
}
