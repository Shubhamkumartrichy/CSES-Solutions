#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,count=0;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=1;i<a;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            count+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<count<<endl;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/