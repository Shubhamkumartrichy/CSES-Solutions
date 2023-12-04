#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a;
    cin>>a;
    int arr[a-1];
    for(int i=0;i<a-1;i++){
        cin>>arr[i];
    }
    cout<<((a*(a+1))/2)-accumulate(arr, arr+(a-1), 0LL);
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/