#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> coin(a);
    for(int i=0;i<a;i++){
        cin>>coin[i];
    }

    vector<int> dp(b+1);

    dp[0]=1;
    for(int i=1;i<=b;i++){
        for(int j=0;j<a;j++){
            if(coin[j]<=i){
                dp[i]=(dp[i]+dp[i-coin[j]])%mod;
            }
        }
    }
    cout<<dp[b]<<endl;

}