#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a, ans = INT_MIN,count=0;
    cin >> a;
    map<int, int> m;

    int arr1[a],arr2[a];

    for (int i = 0; i < a; i++) {
        cin>>arr1[i];   cin>>arr2[i];
        m[arr1[i]]++;   m[arr2[i]]--;
    }

    for( auto it:m ){
        count+=it.second;
        ans=max(ans,count);
    }

    cout << ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/