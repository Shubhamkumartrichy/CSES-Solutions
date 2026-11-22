#include <bits/stdc++.h>
using namespace std;

const int maxi=2e5+1;
vector<vector<int>> adj(maxi); 
vector<int> dis(maxi,0);

void dfs(int node, int parent){
    for(int child : adj[node]){
        if(child != parent){
            dis[child] = dis[node] + 1;
            dfs(child, node);
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

    int maxnode = 1;
    int maxDis = 0;
    for(int i=1;i<=a;i++){
        if(dis[i] > maxDis){
            maxDis = dis[i];
            maxnode = i;
        }
    }

    dis.assign(maxi,0);
    dfs(maxnode, -1);

    int maxDis2 = 0;
    for(int i=1;i<=a;i++){
        maxDis2 = max(maxDis2, dis[i]);
    }

    cout<<maxDis2<<endl;

}