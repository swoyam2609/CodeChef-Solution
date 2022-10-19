// A string SS is called good if none of the substrings of SS of length \ge 2≥2 are palindromic.

// For e.g. S =S= \texttt{hello}hello is not good but S =S= \texttt{world}world is good.

// You are given a string AA of length NN (containing lowercase Latin letters only). Rearrange AA to form a good string or determine it is not possible to do so.

// Recall that a string is called palindromic if it reads the same backwards and forwards. For example, \texttt{noon}noon and \texttt{level}level are palindromic strings.

#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> ii;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;
typedef pair<int, ii> pip;
typedef pair<ii, int> ppi;
#define rev(v) reverse(v.begin(), v.end())
#define print(x)           \
    for (auto &it : x)     \
        cout << it << ' '; \
    cout << endl;
#define printd(x)      \
    for (auto &it : x) \
        cout << it.first << ' ' << it.second << endl;
#define pi (3.141592653589)
#define sz(s) s.size()
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

bool isPrime(int n)
{
    if (n == 1)
        return false;
    if (n == 2)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


void jai_shree_ram()
{
    int n;
    string s;
    cin >> n >> s;
    int ans[n+1]={};
    int cnt[27] = {};
    for (int i = 0; i < n; i++)
    {
        cnt[s[i] - 'a']++;
    }
    for(int i=0;i<n;i++){
        int mx=26;
        for(int j=0;j<26;j++){
        if(i>0&&ans[i-1]==j)continue;
        if(i>1&&ans[i-2]==j)continue;
         if (cnt[j] > cnt[mx]) mx = j;
        }
        if(mx==26){
            cout<<"NO\n";
            return;
        }
        cnt[mx]--;
        ans[i]=mx;
    }
    
    cout<<"YES\n";
    for(int i=0;i<n;i++){
        cout<< (char)('a'+ans[i]);
    }
    cout<<endl;
   

}

int32_t main()
{
    fast

        // injeel h_m_s
        // code cses cp cf leet

        int t = 1;
    cin >> t;
    while (t--)
    {
        jai_shree_ram();
    }
    return 0;
}