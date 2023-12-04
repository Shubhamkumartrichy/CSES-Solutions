#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,ans=0;
    cin>>a;
    for(int i=5;i<=a;i*=5){
        ans+=a/i;
    }
    cout<<ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/