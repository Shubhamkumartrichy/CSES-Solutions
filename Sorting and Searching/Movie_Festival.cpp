#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}

int32_t main() {
    int a,x,y;
    cin>>a;
    vector<pair<int,int>> vp;
    for(int i=0;i<a;i++){
        cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(),vp.end(),sortbysec);
	int i=0,ans=0,temp=0;
	while(i<a){
		if(temp<=vp[i].first){
			temp=vp[i].second;
			i++;
			ans++;
		}
		else i++;
	}
	cout<<ans<<endl;
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/