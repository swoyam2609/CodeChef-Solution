#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mSum(vector<ll> &a) {
  ll max_so_far = a[0], max_ending_here = a[0];
 
    for (ll i = 1; i < a.size(); i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    vector<ll> s(x);
	    for(int i=0;i<x;i++){
	        ll c;
	        cin>>c;
	        s.push_back(c);
	    }
	    ll sum;
	    if(mSum(s)<0){
	        sum=0ll;
	    }else{
	        sum=mSum(s);
	    }
	    int y;
	    bool fg=true;
	    cin>>y;
	    for(int i=0;i<y;i++){
	        ll c;
	        cin>>c;
	        if(c>0){
	            sum+=c;
	            fg=false;
	        }
	    }
	    if(fg){
	        cout<<mSum(s)<<endl;
	    }
	    else cout<<sum<<endl;
	}
	return 0;
}
