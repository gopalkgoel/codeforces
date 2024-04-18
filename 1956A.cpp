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

    int k,q;

    while(t--) {
        cin >> k >> q;
        int a[k+1];
        int n[q];
        for(int i=0;i<k;i++) cin >> a[i];
        for(int i=0;i<q;i++) cin >> n[i];
        a[k] = 101;

        int ans[101];
        for(int i=0;i<a[0];i++) ans[i] = i;
        for(int j=0;j<k;j++) {
            for(int i=a[j];i<a[j+1];i++) {
                ans[i] = ans[i-(j+1)];
            }
        }

        for(int i=0;i<q;i++) cout << ans[n[i]] << " ";
        cout << endl;
    }
    
    return 0;
}
