#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define endl '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #ifdef LOCAL
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,t;
	cin >> n >> t;
	vector<int> k(n);
	for (int i = 0; i < n; i++){
        cin >> k[i]; 
    }
	int lo = 0;
	int hi = 1e18;
	int ans = 0;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			sum += (mid / k[i]);
			if (sum >= t) {  
				break;
			}
		}
		if (sum >= t) {
			ans = mid;
			hi = mid - 1;
		} else {
			lo = mid + 1;
		}
	}
	cout << ans << "\n";
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/