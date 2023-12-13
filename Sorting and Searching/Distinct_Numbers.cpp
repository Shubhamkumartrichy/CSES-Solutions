#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a;
    cin>>a;
    int arr[a];
    set<int> s;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout<<s.size();
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/