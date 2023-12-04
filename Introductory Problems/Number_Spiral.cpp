#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<(a*a)-a+1<<endl;
        }else if(a>b){
            if(a%2==0){
                cout<<(a*a)-b+1<<endl;
            }else{
                cout<<((a-1)*(a-1))+b<<endl;
            }
        }else{
            if(b%2!=0){
                cout<<(b*b)-a+1<<endl;
            }else{
                cout<<((b-1)*(b-1))+a<<endl;
            }
        }
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/