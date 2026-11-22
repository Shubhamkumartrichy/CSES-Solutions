#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 1;

int ans = 0;
vector<vector<int>> adj(N);
vector<bool> visited(N, 0);

void dfs(int node, int parent) {
    for(int i : adj[node]) {
        if(i != parent) {
            dfs(i, node);
            if(!visited[node] && !visited[i]) {
                visited[node] = 1;
                visited[i] = 1;
                ans++;
            }
        }
    }
}

int main(){
    int a;
    cin>>a;

    for(int i=1;i<a;i++){
        int b,c;
        cin>>b>>c;
        adj[b].push_back(c);
        adj[c].push_back(b);
    }

    dfs(1,-1);
    cout<<ans<<endl;
}
