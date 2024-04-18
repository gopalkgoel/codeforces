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

    ll a,b,c;

    while(t--) {
        cin >> a >> b >> c;
        if((c+b)%3 > c) cout << -1 << endl;
        else cout << a + (c+b+2)/3 << endl; 
    }
    
    return 0;
}
