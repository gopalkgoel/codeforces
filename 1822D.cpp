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

    int n;

    while(t--) {
        cin >> n;
        if(n%2 == 0) {
            for(int i=1;i<=n;i++) {
                if(i%2==1) cout << (n - (i-1)) << " ";
                else cout << i-1 << " ";
            }
            cout << endl;
        }
        else if(n==1) cout << 1 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}
