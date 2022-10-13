#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

ll power(ll a,ll b,ll mod){
    ll res=1;
    while(b>0){
        if(b&1){
            res = res*a;
            res %= mod;
        }
        a = a*a;
        a %= mod;
        b = b>>1;
    }
    return res;
}


ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
} 

ll lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


void solve(){
    ll x,y;
    cin>>x>>y;
    ll z=x^y;
    ll a,b,c;
    if((x&1) && (y&1)){
        a = 2;
        b = x^2;
        c = y^2;
    }
    else if(x&1){
        z = x^y;
        a=2;
        b = x^2;
        c = z^2;
    }
    else if(y&1){
        z = x^y;
        a=2;
        b=y^2;
        c=z^2;
    }
    cout<<a<<" "<<min(c,b)<<" "<<max(c,b)<<endl;
}




int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int tc=1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}