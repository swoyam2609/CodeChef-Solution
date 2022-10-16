#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define bpc __builtin_popcount
#define forn(i,e) for(ll i = 0; i < e; i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define per(i,a,b) for(ll i=a;i>=b;i--)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define fi                first
#define se                second
#define sz(x)             (int)((x).size())
#define all(x)            (x).begin(),(x).end()
#define alr(s)            s.rbegin(),s.rend()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define vvi vector<vector<ll>>
#define pi pair<ll,ll>
#define vppi vector<pair<pair<ll,ll>,ll>>
#define pq_max priority_queue<ll>
#define pqp_max priority_queue<pi>
#define pq_min priority_queue<ll, vector<ll>, greater<ll>>
#define pqp_min priority_queue<pi, vector<pi>, greater<pi>>
#define m_pi              3.141592653589793238
#define lb lower_bound
#define ub upper_bound
#define uset unordered_set<ll>
#define oset set<ll>
#define umap unordered_map<ll,ll>
#define omap map<ll,ll>

 
void solve()
{
    ll n;
    cin>>n;
    vi a(n);
    string s;
    cin>>s;
    string r="aeiou";ll c=0;
    per(i,n-1,0)
    {   a[i]=c;
        if(r.find(s[i])!=string::npos)
        {
            c++;
        }
        
    }
    map<int,string>mp;
    string str="";
     c=-1;
    forn(i,n)
    {
        if(c==-1)
        {
            c=a[i];
            
        }
        else
        if(a[i]!=c)
        {   if(c&1)
            {
                reverse(all(str));
                mp[c]=str;
            }
            else
            mp[c]=str;
            c=a[i];
            str="";
        }
        str+=s[i];
    }
    mp[c]=str;
    string ans="";
    int i;
    for( i=1;;i+=2)
    {
        if(mp.count(i)==0)
        break;
        ans+=mp[i];
        
    }
   
    string res="";
    i--;
    for(i;i>=0;i-=2)
    {
         if(mp.count(i))
        
        ans+=mp[i];
    }
   // reverse(all(res));
    cout<<ans<<res<<endl;
}
int main() {
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}
