#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n, int a[]) {
    int map[n];
    for(int i=0;i<n;i++) map[i]=0;

    for(int i=0;i<n;i++) map[a[i]]++;

    int x=0;
    while(map[x]!=0 && x<n) x++;
    int y=-1;
    int z=-1;
    for(int i=0;i<x;i++) {
        if(map[i]==1) {
            y = i;
            break;
        }
    }
    if(y==-1) return x;
    for(int i=y+1;i<x;i++) {
        if(map[i]==1) {
            z = i;
            break;
        }
    }
    if(z==-1) return x;

    //printf("x = %d\n",x);
    return z; 
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
        cout << solve(n,a) << endl;
    }
    
    return 0;
}
