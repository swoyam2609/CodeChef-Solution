#include <bits/stdc++.h>
using namespace std;


#define ll long long
int main() {
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll maxi = INT_MIN;
        ll mini = INT_MAX;
        ll minipos = INT_MIN;

        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        sort(v.begin(),v.end());
        ll ansmaxi;
        ll ansmini = 1e18;
        ansmaxi = max(v[0]*v[0],v[n-1]*v[n-1]);
        if(v[0]<0 and v[n-1]>=0)
        {
            ansmini= v[0]*v[n-1];
        }
        else
        {
            for(auto it:v)
            {
                ansmini = min(ansmini,it*it);
            }
        }
        cout<<ansmini<<" "<<ansmaxi<<endl;
    }
    

	return 0;
}
