#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n, string a) {
    int L,R;L=0;R=0;
    for(int i=0;i<n;i++) {
        if(a[i]=='1') R++;
    }

    vector<int> valid;

    for(int i=0;i<=n;i++) {
        if(i==0) {
            if(R>=(n+1)/2) valid.push_back(i);
        } else if(i==n) {
            if(L>=(n+1)/2) valid.push_back(i);
        } else {
            if(L>=(i+1)/2 && R>=(n-i+1)/2) valid.push_back(i);
        }
        if(i<n) {
            if(a[i]=='0') L++;
            if(a[i]=='1') R--;
        }
    }

    //for(int i=0;i<valid.size();i++) printf("valid[%d] = %d\n", i, valid[i]);

    int ans = valid[valid.size()-1];
    for(int i = valid.size()-1;i>=0;i--) {
        if(abs(2*valid[i]-n) <= abs(2*ans-n)) ans = valid[i];
    }

    return ans;

    return 0;
}

int main ()
{
    // std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    int n;
    string a;

    while(t--) {
        cin >> n;
        cin >> a;
        cout << solve(n,a) << endl;
    }
    
    return 0;
}
