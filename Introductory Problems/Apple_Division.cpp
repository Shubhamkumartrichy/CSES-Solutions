#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,sum=0,ans=INT_MAX;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i = 0; i < 1<<a; i++) {
		int s = 0;
		for(int j = 0; j < a; j++) {
			if(i & 1<<j) s += arr[j];
		}
		int curr = abs((sum-s)-s);
		ans = min(ans, curr);
	}
	cout << ans;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/