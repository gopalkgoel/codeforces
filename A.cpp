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
    //char ans[200];
    char current = 'A';

    while(t--) {
        cin >> n;
        if(n%2 == 1) {
            cout << "NO" << endl;
        } else {
            current = 'A';
            cout << "YES" << endl;
            for(int i=0;i<n/2;i++) {
                cout << current << current;
                if(current=='A') current = 'B';
                else current = 'A';
            }
            cout << endl;
        }
    }


    
    return 0;
}
