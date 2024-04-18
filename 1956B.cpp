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
    int a;
    int ans=0;

    while(t--) {
        cin >> n;
        int mult[n+1];
        for(int i=1;i<=n;i++) mult[i]=0;
        for(int i=0;i<n;i++) {
            cin >> a;
            mult[a]++;
        }
        ans = 0;
        for(int i=1;i<=n;i++) {
            if(mult[i]==2) ans++;
        }
        cout << ans << endl;
    }
    
    return 0;
}
