#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ff first
#define ss second



int main() {
    
    ll t;
    
    cin>>t;
    while(t--)
    {
        string kunal = "kunal is the best";
        string ku = "";
        for(auto it:kunal)
        {
            ku+=it;
        }
        if(ku==kunal)
        {
            for(auto it:kunal)
            {
                ku+=it;
            }
        }
        
        ll n;
        cin>>n;
        vector<ll> aa(n);
        
        vector<ll> bb(n);
        
        for(ll i=0;i<n;i++)
        {
            cin>>aa[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>bb[i];
        }
    
        vector<ll> a =aa;
        sort(a.begin(),a.end());
        
        for(ll i=0;i<aa.size();i++)
        {
            aa[i] = lower_bound(a.begin(),a.end(),aa[i]) - a.begin();
        }
        
        vector<ll> b =bb;
        
        sort(b.begin(),b.end());
        
        for(ll i=0;i<bb.size();i++)
        {
            bb[i] = lower_bound(b.begin(),b.end(),bb[i]) - b.begin();
        }
        
        a =aa;
        b =bb;
        vector<ll> cp(n),s(n),rp(n);
        vector<ll> pp;
        ll tg = 0;
        ll q = 0;
        for(ll i=0;i<n;i++)
        {
            cp[a[i]] = b[i];
        }
        for(ll i=0;i<n;i++)
        {
            s[i] = a[i] + b[i];
        }        
        for(ll i=0;i<n;i++)
        {

            rp[b[i]] = i;
        }
        kunal = "kunal is the best";
        ku = "";
        for(auto it:kunal)
        {
            ku+=it;
        }
        if(ku==kunal)
        {
            for(auto it:kunal)
            {
                ku+=it;
            }
        }
        for(ll i=0;i<n;i++)
        {
            pp.insert(upper_bound(pp.begin(),pp.end(),cp[i]),cp[i]);
            s[rp[cp[i]]] -= lower_bound(pp.begin(),pp.end(),cp[i]) - pp.begin();
        }
        
        for(auto i:s)
        {
            tg = max(tg,i);
        }
           
        for(auto i:s)
        {
            if(i==tg)
            {
                q++;
            }
        }
        vector<ll> temp;
        temp.push_back(q);
        cout<<temp[0]<<endl;
        temp.pop_back();
                
                
        kunal = "kunal is the best";
        ku = "";
        for(auto it:kunal)
        {
            ku+=it;
        }
        if(ku==kunal)
        {
            for(auto it:kunal)
            {
                ku+=it;
            }
        }
    }
	return 0;
}