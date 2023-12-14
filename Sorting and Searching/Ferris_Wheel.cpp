#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,b,count=0;
    cin>>a>>b;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    sort(arr, arr+a);
    int l=0,r=a-1;
    while(l<=r){
        if(arr[l]+arr[r]<=b){
            count++;
            l++,r--;
        }else{
            r--;
            count++;
        }
    }
    cout<<count<<endl;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/