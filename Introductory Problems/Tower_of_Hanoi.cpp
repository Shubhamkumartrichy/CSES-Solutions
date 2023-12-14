#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int a, int b, int c, int n) {
	if (n == 0)
		return;
	solve(a, c, b, n-1);
	cout<<a<<' '<<c<<endl;
	solve(b, a, c, n-1);
}

int32_t main(){
    int n; cin>>n;
    cout<< pow(2,n) - 1<<endl;
    solve(1, 2, 3, n);
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/