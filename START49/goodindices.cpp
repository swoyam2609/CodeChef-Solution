#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> v;
	    ll sum=0;
	     for(ll i=0;i<n;i++){
	         ll x;
	         cin>>x;
	         sum+=x;
	         v.push_back(x);
	     }
	     ll ans;
	     sort(v.begin(),v.end());
	     for(ll i=0;i<n;i++){
	         if(v[i]*(i+1)<=sum){ans=n-i-1;}
	     }
	     cout<<ans<<endl;
	}
	return 0;
}