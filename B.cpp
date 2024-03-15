#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n, int a[]) {
    int last = a[n-1];
    int x,y;
    for(int i=n-2;i>=0;i--) {
        if(a[i] <= last) {
            last = a[i];
        } else if(a[i] < 10) {
            return 0;
        } else {
            x = a[i]/10;
            y = a[i]%10;
            if(x > y) return 0;
            if(y > last) return 0;
            last = x;
        }
    }
    
    return 1;
}

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
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << (solve(n,a) ? "YES\n" : "NO\n");
    }


    
    return 0;
}
