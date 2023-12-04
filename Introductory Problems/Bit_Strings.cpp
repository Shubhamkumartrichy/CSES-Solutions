#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,ans=1;
    cin>>a;
    for(int i=0;i<a;i++){
        ans=((ans%1000000007)*2)%1000000007;
    }
    cout<<ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/