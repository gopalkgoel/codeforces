#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int k, int a[]) {
    //printf("in solve with n = %d, k = %d\n", n,k);

    vector<int> X; // list of numbers appearing twice in a1,...,an
    vector<int> Y; // list of numbers appearing twice in a_(n+1),...,a_(2n)
    vector<int> spare; // list of numbers appearing once in each

    int Xcount[n];
    int Ycount[n];
    for(int i=0;i<n;i++) {Xcount[i]=0;Ycount[i]=0;}
    for(int i=0;i<n;i++) {
        Xcount[a[i]-1] += 1;
        Ycount[a[i+n]-1] += 1;
        //printf("Xcount[%d] = %d\n",a[i]-1,Xcount[a[i]-1]);
    }
    for(int i=0;i<n;i++) {
        if(Xcount[i]==2) {
            X.push_back(i+1);
            //printf("X got %d\n", i+1);
        } else if(Ycount[i]==2) {
            Y.push_back(i+1);
            //printf("Y got %d\n",i+1);
        } else {
            spare.push_back(i+1);
            //printf("spare got %d\n",i+1);
        }
    }
    if(k <= X.size()) {
        for(int i=0;i<k;i++) cout << X[i] << " " << X[i] << " ";
        cout << endl;
        for(int i=0;i<k;i++) cout << Y[i] << " " << Y[i] << " ";
        cout << endl;
    } else {
        for(int i=0;i<X.size();i++) cout << X[i] << " " << X[i] << " ";
        for(int i=0;i<2*k-2*X.size();i++) cout << spare[i] << " ";
        cout << endl;
        for(int i=0;i<X.size();i++) cout << Y[i] << " " << Y[i] << " ";
        for(int i=0;i<2*k-2*X.size();i++) cout << spare[i] << " ";
        cout << endl;
    }
}

int main ()
{
    //std::ios_base::sync_with_stdio(false), cin.tie(0) , cout.tie(0);
    //freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    int n,k;

    while(t--) {
        cin >> n >> k;
        int a[2*n];
        for(int i=0;i<2*n;i++) cin >> a[i];
        solve(n,k,a);
    }
    
    return 0;
}
