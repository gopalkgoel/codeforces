#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n, vector<vector<int> > A) {
    // root the tree at 0 and calculate the depth
    int depth[n];
    depth[0]=0;
    for(int i=1;i<n;i++) depth[i]=-1;

    vector<int> stack = {0};
    int x;
    
    while(!stack.empty()) {
        x = stack.back();
        stack.pop_back();
        // /cout << x << endl;
        for(int i=0;i<A[x].size();i++) {
            if(depth[A[x][i]]!=-1) continue;
            depth[A[x][i]] = depth[x]+1;
            stack.push_back(A[x][i]);
        }
    }
    // for(int i=0;i<n;i++) {
    //     cout << "depth of vertex " << i+1 << " is " << depth[i] << endl;
    // }

    int arg_max_depth = 0;
    for(int i=0;i<n;i++) {
        if(depth[arg_max_depth] < depth[i]) arg_max_depth = i;
    }

    // cout << "max depth vertex is " << arg_max_depth + 1 << endl;

    int parent[n];
    stack = {arg_max_depth};
    for(int i=0;i<n;i++) depth[i]=-1;
    depth[arg_max_depth]=0;
    for(int i=0;i<n;i++) parent[i] = -1;
    
    while(!stack.empty()) {
        x = stack.back();
        stack.pop_back();
        // /cout << x << endl;
        for(int i=0;i<A[x].size();i++) {
            if(depth[A[x][i]]!=-1) continue;
            depth[A[x][i]] = depth[x]+1;
            stack.push_back(A[x][i]);
            parent[A[x][i]] = x;
        }
    }
    // for(int i=0;i<n;i++) {
    //     cout << "depth of vertex " << i+1 << " is " << depth[i] << endl;
    // }
    // for(int i=0;i<n;i++) {
    //     cout << "parent of vertex " << i+1 << " is " << parent[i]+1 << endl;
    // }

    int farthest = 0;
    for(int i=0;i<n;i++) {
        if(depth[i]>depth[farthest]) farthest = i;
    }

    int m = depth[farthest];
    int path[m+1];
    path[0] = farthest;
    for(int i=0;i<m;i++) path[i+1] = parent[path[i]];

    // for(int i=0;i<m+1;i++) {
    //     cout << path[i]+1 << endl;
    // }

    if(m%2==0) {
        cout << m/2 + 1 << endl;
        for(int i=0;i<=m/2;i++) cout << path[m/2]+1 << " " << i << endl;
    } else if(m%4==1) {
        cout << m/2 + 2 << endl;
        for(int i=0;i<=m/2+1;i++) cout << path[m/2]+1 << " " << i << endl;
    } else if(m%4==3) {
        cout << m/2 + 1 << endl;
        for(int i=0;i<(m+1)/4;i++) {
            cout << path[m/2]+1 << " " << 2*i+1 << endl;
            cout << path[m/2+1]+1 << " " << 2*i+1 << endl;
        }
    }


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
    vector<vector<int> > adj_list;
    vector<int> temp;
    int x,y;

    while(t--) {
        cin >> n;
        adj_list.clear();
        for(int i=0;i<n;i++) adj_list.push_back(temp);
        for(int i=0;i<n-1;i++) {
            cin >> x >> y;
            adj_list[x-1].push_back(y-1);
            adj_list[y-1].push_back(x-1);
        }
        solve(n,adj_list);
        //cout << "----\n";
    }
    
    return 0;
}
