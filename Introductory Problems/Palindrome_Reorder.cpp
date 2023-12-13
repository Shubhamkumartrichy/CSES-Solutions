#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int count=0;
    string a,b,c,ans;
    cin>>a;
    map <char,int> m;
    for(int i=0;i<a.size();i++){
        m[a[i]]++;
    }
    for(auto it: m){
        if(it.second%2!=0){
            count++;
        }
    }
    if(count>1){
        cout<<"NO SOLUTION"<<endl;
    }else{
        for(auto it: m){
           if(it.second%2==0){
              for(int i=0;i<it.second/2;i++){
                b+=it.first;
              }
           }else{
              for(int i=0;i<it.second;i++){
                c+=it.first;
              }
           }
        }
        string ans;
        ans=ans+b+c;
        reverse(b.begin(), b.end());
        ans=ans+b;
        cout<<ans<<endl;
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/