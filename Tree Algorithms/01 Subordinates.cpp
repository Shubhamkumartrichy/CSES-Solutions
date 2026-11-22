#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> ans;

void dfs(int node) {
    ans[node] = 1;

    for(int i : adj[node]) {
        dfs(i);
        ans[node] += ans[i]; 
    }
}

int main(){
    int a;
    cin>>a;
    adj.resize(a + 1);
    ans.resize(a + 1);

    for(int i=2; i<=a; i++) {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }

    dfs(1);
    
    for(int i=1;i<=a;i++){
        cout<<ans[i]-1<<" ";
    }

}