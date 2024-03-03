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

    string s;

    int pairs[26];
    int total_pairs;
    int max_pairs;
    int char_count[26];
    int max_char_count;

    while(t--) {
        cin >> n;
        cin >> s;

        // cout << "s = " << s << endl;

        if(n%2==1) {cout << -1 << endl; continue;}
        
        for(int i=0;i<26;i++) {pairs[i] = 0; char_count[i]=0;}
        total_pairs = 0;
        max_pairs = 0;
        max_char_count = 0;

        for(int i=0;i<n;i++) char_count[s[i]-'a']++;
        for(int i=0;i<26;i++) {
            if(max_char_count < char_count[i]) max_char_count = char_count[i];
        }

        if(max_char_count*2 > n) {cout << -1 << endl; continue;}

        for(int i=0;i<n/2;i++) {
            if(s[i] == s[n-1-i]) {
                pairs[s[i]-'a']++;
                total_pairs++;
            }
        }
        for(int i=0;i<26;i++) {
            if(max_pairs < pairs[i]) max_pairs = pairs[i];
        }

        if(max_pairs*2 > total_pairs) {
            cout << max_pairs << endl;
        } else if(total_pairs%2 == 1) {
            cout << total_pairs/2 + 1 << endl;
        } else {
            cout << total_pairs/2 << endl;
        }
    }

    return 0;
}
