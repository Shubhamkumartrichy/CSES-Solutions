#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,b,c;
    cin>>a>>b>>c;
    int app[a],apa[b];
    for(int i=0;i<a;i++){
        cin>>app[i];
    }
    for(int i=0;i<b;i++){
        cin>>apa[i];
    }
    sort(app, app+a);
    sort(apa, apa+b);
    
    int i=0,j=0,count=0;
    while(i<a && j<b){
        if(app[i]>=apa[j]-c && app[i]<=apa[j]+c){
            count++;
            i++;j++;
        }else{
            if(app[i]<apa[j]){
                i++;
            }else{
                j++;
            }
        }
    }
    cout<<count<<endl;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/