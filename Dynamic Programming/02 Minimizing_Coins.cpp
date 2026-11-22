#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> coin(a);
    for(int i=0;i<a;i++){
        cin>>coin[i];
    }
    vector<int> dp(b+1, 1e9);

    dp[0]=0;
    for(int i=1;i<=b;i++){
        for(int j=0;j<a;j++){
            if(coin[j]<=i){
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
            }
        }
    }
    cout<<(dp[b]==1e9?-1:dp[b])<<endl;
}