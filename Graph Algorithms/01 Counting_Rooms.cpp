#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> c;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
 
void dfs(int i, int j){
    c[i][j]='#';
 
    for(int k=0;k<4;k++){
        int x=i+dx[k];
        int y=j+dy[k];
 
        if(x>=0 && x<c.size() && y>=0 && y<c[0].size() && c[x][y]=='.'){
            dfs(x,y);
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
 
    for(int i=0;i<a;i++){
        vector<char> d;
        for(int j=0;j<b;j++){
            char e;
            cin>>e;
            d.push_back(e);
        }
        c.push_back(d);
    }
 
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if (c[i][j] == '.') {
                count++;
                dfs(i,j);
            }
        }
    }
    cout << count << endl;
}