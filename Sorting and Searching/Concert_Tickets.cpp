#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){
    int n, m, curr, ticket;
    cin >> n >> m;
    multiset<int, greater<int>> tickets;

    while (n--){
        cin >> ticket;
        tickets.insert(ticket);
    }

    while (m--){
        cin >> curr;
        auto it = tickets.lower_bound(curr);
        if (it == tickets.end()){
            cout << -1 << endl;
        }
        else{
            cout << *it << endl;
            tickets.erase(it);
        }
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/