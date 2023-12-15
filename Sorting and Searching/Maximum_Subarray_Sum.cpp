#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,best=INT_MIN,sum=INT_MIN;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum = max(arr[i],sum+arr[i]);
        best = max(best,sum);
    }
    cout<<best;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/