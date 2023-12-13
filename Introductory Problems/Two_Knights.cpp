#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int n;
    cin >> n;

    cout << 0 << endl;
    for (int i = 2 ; i <= n ; i++) {
      cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << endl;
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/