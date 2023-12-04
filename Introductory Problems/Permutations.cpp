#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
    int a,k=1;
    cin>>a;
    int arr[a];
    if(a==1){
        cout<<1;
    }else if(a==4){
        cout<<"2 4 1 3";
    }else if(a<=4){
        cout<<"NO SOLUTION";
    }else{
        for(int i=0;i<a;i+=2){
            arr[i]=k;
            k++;
        }
        for(int i=1;i<a;i+=2){
            arr[i]=k;
            k++;
        }
        for(int i=0;i<a;i++){
            cout<<arr[i]<<" ";
        }
    }
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/