#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr,arr+a);
    int ans=1;
    for(int i=0;i<a;i++){
        if(arr[i]<=ans){
            ans+=arr[i];
        }else{
            break;
        }
    }
    cout<<ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/