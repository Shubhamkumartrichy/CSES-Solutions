#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a, ans = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++){
        cin >> arr[i];
    }
    set<int> s;
    int i=0,j=0;
    while(i<a && j<a){
        while(j<a && !s.count(arr[j])){
            s.insert(arr[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        while(j<a && s.count(arr[j])){
            s.erase(arr[i]);
            i++;
        }
    }
    cout << ans << endl;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/