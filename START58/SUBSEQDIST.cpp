/*
Karan Kunwar (@zoldyck)
*/
#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;
#define MOD 1000000007
#define mp make_pair
#define f first
#define se second
#define pb push_back
#define all(x) x.begin(), x.end()
#define prdb(x) cout << fixed << setprecision(10) << x
#define sz(x) (int)(x).size()
clock_t time_p=clock();
void timer(){time_p=clock()-time_p;cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"sec\n";}
template <class T> using prq = priority_queue<T>;
template <class T> using prqg = priority_queue<T, vector<T>, greater<T>>;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int>	vi;
typedef vector<ll>	vl;
typedef vector<pii>	vpii;
typedef vector<pl>	vpl;
typedef vector<vi>	vvi;
typedef vector<vl>	vvl;
// DEBUG
#ifdef LOCAL 
#include "debug.cpp"
#else 
#define deb(...) 0
#define edeb(...) 0 
#endif

const ll INF = 1e18+1;
ll expo (ll x, ll y) {ll res = 1; while (y) {if (y & 1)res = res * x; res %= MOD; y = y >> 1; x = x * x; x %= MOD;} return res;}
ll smod(ll a,ll md=MOD) {a=a%md; if(a<0)a+=md; return a;}


void zoldyck(){
      int i, n;
      cin >> n;
      map<int, int> freq;
      for(int i=0; i<n; i++){
            int x;
            cin >> x;
            freq[x]++;
      }

      int ans = 0;
      for(auto [x, y]: freq){
            ans = max(ans, y);
      }

      cout << ceil(log2(ans)) << '\n';
}

int main() 
{
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
      #endif
      ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
      int t = 1;
      cin >> t;
      while(t--) {
            zoldyck();
      }
      timer();
      return 0;
}
