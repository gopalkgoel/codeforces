#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main ()
{
	// std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

	int t, n;
    cin >> t;

    int f, s;
    ll ans;

    while(t--) {
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++) cin >> a[i];

        f = 0; s = 1;

        for(int i=1;i<n;i++) {
            if(a[i] > a[f]) {s = f; f = i;}
            if(a[i] <= a[f] && a[i] > a[s] && i != f) s = i;
        }

        ans = a[s]*a[f];

        f = 0; s = 1;

        for(int i=1;i<n;i++) {
            if(a[i] < a[f]) {s = f; f = i;}
            if(a[i] >= a[f] && a[i] < a[s] && i != f) s = i;
        }

        ans = max(a[s]*a[f], ans);

        cout << ans << endl;
    }
    
    return 0;
}
