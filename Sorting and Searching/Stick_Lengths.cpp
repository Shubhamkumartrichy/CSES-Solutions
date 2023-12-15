#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,sum=0,ans=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    int mid=arr[a/2];
    for(int i=0;i<a;i++){
        ans+=(abs(mid-arr[i]));
    }
    cout<<ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/