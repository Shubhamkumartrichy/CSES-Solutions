#include <bits/stdc++.h>
using namespace std;
#define int long long int

vector<string> generate(int n){
    if(n==0){
        return {"0"};
    }
    if(n==1){
        return {"0","1"};
	}
	vector<string> recAns=generate(n-1);
	vector<string> Ans;
	for(int i=0;i<recAns.size();i++)
	{
	string s=recAns[i];
	Ans.push_back("0"+s);
	}
	for(int i=recAns.size()-1;i>=0;i--)
	{
	string s=recAns[i];
	Ans.push_back("1"+s);
	}
	return Ans;
}

void generateans(int n){
    vector<string> arr;
    arr=generate(n);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

int32_t main() {
    int n;
    cin>>n;
    generateans(n);
}

//CODE_OWNER- Shubham_Kumar
//Codeforces- shubhamkumarco
//LINKEDIN- https://www.linkedin.com/in/shubham-kumar-98b51b257/
