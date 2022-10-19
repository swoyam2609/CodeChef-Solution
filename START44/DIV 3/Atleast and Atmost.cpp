// There are NN hidden integer arrays of length NN each. You are given the mex of each of these NN arrays.

// Ashish likes lower bounds and Kryptonix likes upper bounds. So, for each 0 \leq i \leq N-10≤i≤N−1, find:

// The least possible number of occurrences of ii across all the arrays
// The most possible number of occurrences of ii across all the arrays
// Note that these values must be computed independently, i.e, it is allowed to choose different configurations of arrays to attempt to minimize/maximize the number of occurrences of different integers.

// Please see the samples for an example.

// Recall that the mex of an array is the smallest non-negative integer that is not present in it. For example, the mex of [0, 2, 4, 1, 1, 5][0,2,4,1,1,5] is 33, and the mex of [3, 8, 101, 99, 100][3,8,101,99,100] is 00.





#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
template<class T> using indexed_set = tree<T, null_type, less_equal<T>,
        rb_tree_tag, tree_order_statistics_node_update>;
#define fbo find_by_order //(k-indexed val with 0-indexing)
#define ook order_of_key //(num of vals in set that are strictly less)
#define ms(x, a) memset(x, a, sizeof(x))
#define siz(x) (int)x.size()
#define len(x) (int)x.length()
#define pb push_back
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define F first
#define S second
#define fin(x) cout << x; return
#define deb(...) logger(#__VA_ARGS__, __VA_ARGS__)
template<typename ...Args>
void logger(string vals, Args&&... values){
    cout << vals << " = ";
    string delim = "";
    (...,(cout << delim << values, delim = ", "));
    cout << endl;
}
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const int MOD = 1e9+7;
//===========================================
const int MAX = 3e5+5;
ll psa[MAX], cnt[MAX];

void solve(){
    int n; cin >> n;
    ll tot = 0;
    psa[0] = n;
    for (int i = 1; i <= n; i++){
        int a; cin >> a;
        psa[a]--;
        cnt[a] += n-a;
        tot += n-a;
    }
    for (int i = 0; i < n; i++){
        if (i) psa[i] += psa[i-1];
        cout << psa[i] << " " << psa[i]+tot-cnt[i] << "\n";
    }
    for (int i = 0; i <= n; i++) psa[i] = cnt[i] = 0;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    //freopen("test.txt", "r", stdin);
    int t; cin >> t;
    while (t--) solve();
}

// stuff you should look for
	/// int overflow, array bounds
	// special cases (n=1?)
	// do smth instead of nothing and stay organized
	// WRITE STUFF DOWN
	// DON'T GET STUCK ON ONE APPROACH