#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    vector<string> ans;
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    cout<<ans.size()<<endl;
    for (auto x:ans){
        cout<<x<<endl;
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/