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

    ll n;

    while(t--) {
        cin >> n;
        cout << (n-4)*(n-4) + 10*(n-4) + 26 << endl;
    }
    
    return 0;
}
