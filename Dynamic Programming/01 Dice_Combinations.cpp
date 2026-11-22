#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;

int32_t main(){
    int a;
    cin>>a;
    vector<int> dp(a+1);
    
    dp[0]=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=6;j++){
            if(j<=i){
                dp[i]=(dp[i]+dp[i-j])%mod;
            }
        }
    }
    cout<<dp[a]<<endl;
}

