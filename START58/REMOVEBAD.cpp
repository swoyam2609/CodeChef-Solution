#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    //105MA
    ll n;cin>>n;
    map <ll,ll>mapp;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];mapp[vec[i]]++;
    }
    ll maxx=0;
    for(auto i:mapp){
        maxx=max(maxx,i.second);
    }
    cout<<n-maxx<<"\n";
    
    
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
