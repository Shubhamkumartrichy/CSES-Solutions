#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int n, x;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        auto it = s.upper_bound(x);

        if (it == s.end()) {
            s.insert(x);
        } else {
            s.erase(it);
            s.insert(x);
        }
    }
    cout << s.size() <<endl;

    return 0;
}


//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/
