#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define digit floor(log10(n) + 1) 
#define ll long long
#define ld long double 
#define test_case ll t;cin>>t;while(t--)
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define all(v) begin(v),end(v)
#define loop(i,x,y) for(ll i=x;i<y;i++)
#define loop1(i,y,x) for(ll i=y;i>=x;i--)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vll vector<ll>
#define vi vector<int>
#define max_heap priority_queue <ll>
#define min_heap priority_queue <ll, vector<ll>, greater<ll> >
#define bs(v,x) binary_search(begin(v),end(v),x)
#define lb(v,x) lower_bound(all(v),x)-begin(v)
#define ub(v,x) upper_bound(all(v),x)-begin(v)
#define Map map<ll,ll>
#define Umap unordered_map<ll,ll>
#define Set set<ll>
#define Uset unordered_set<ll>
#define total(v) accumulate(begin(v),end(v),0LL)
#define dbg(v) for(auto i : v) cout<<i<<" ";
#define int long long



void solve()
{
    int x,y;
    cin>>x>>y;
    int a,z=3*x-y,c;
    for(int i=-1000;i<=1000;i++){
        if((z-i)>=-1000&&(z-i)<=1000){
            cout<<min(z-i,i)<<" "<<y<<" "<<max(z-i,i)<<endl;
            return ;
        }
    }
    
    
}








int32_t main()
{
     IOS
    
     test_case 
     solve();
    
     return 0;
}
      
