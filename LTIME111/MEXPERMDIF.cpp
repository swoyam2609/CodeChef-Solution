#ifdef LOCAL
#include "debug.h"
#else
#include <bits/stdc++.h>
using namespace std;
#define dbg(x...)
#endif
#define int long long
#define pb push_back
#define ff first
#define ss second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define endl "\n"

/*
a = sum(mex(every proper prefix))
  = sum(mex(proper prefix of len > idx[0]))
b = sum(mex(every proper suffix))
k = abs(a - b)

If n is even, we can place 0 in middle
and cancel out contribution of 0 to a and b

p[0...l-1], 0, p[l+1...n]
p[0] = 1, p[n] = 2
l+r = n
2r - l = 2n - 3l = k
2n-k = 3l
n+1, n+2 = 3l

2r - (n-r) = 3r-n = k
n+k = 3r
k=n-1, n-2
n+k = 2n-1, 2n-2
*/

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//uniform_int_distribution<int>(L, R)(rng)

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T = 1;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;
        // This works for k >= n
        if (k > n * (n + 1) / 2 or (k == 0 and n <= 2)) {
            cout << -1 << endl;
            continue;
        }
        int idx = 0;
        vector<int> p(n + 1, -1);
        if (k >= n) {
            int rem = n;
            for (int mex = 0; k; ++mex) {
                if (k > rem) {
                    p[idx] = mex;
                    k -= rem;
                    rem--;
                    idx++;
                } else {
                    // at idx, we will get +rem
                    // at idx+1, we will get +(rem-1)
                    idx += rem - k;
                    k = 0;
                    p[idx] = mex;
                    p[n] = mex + 1;
                }
            }
            int nxt = p[n] + 1;
            for (int i = 0; i <= n; ++i) {
                if (p[i] == -1) {
                    p[i] = nxt;
                    nxt++;
                }
            }
        } else {
            auto check = [&]()->bool {
                int sum = 0;
                set<int> s;
                for (int i = 0; i <= n; ++i)
                    s.insert(i);
                for (int i = 0; i < n; ++i) {
                    s.erase(p[i]);
                    sum += *s.begin();
                }
                for (int i = 0; i <= n; ++i)
                    s.insert(i);
                for (int i = n; i > 0; --i) {
                    s.erase(p[i]);
                    sum -= *s.begin();
                }
                return abs(sum) == k;
            };
            if (n <= 5) {
                iota(all(p), 0);
                while (!check() and next_permutation(all(p)));
                if (!check()) {
                    cout << -1 << endl;
                    continue;
                }
            } else if (k < n - 2) {
                int dif = n - 1 - k;
                p[1] = 0;
                p[0] = dif;
                int nxt = 1;
                for (int i = n; i > 1; --i) {
                    if (p[i] == -1) {
                        if (nxt == p[0])
                            nxt++;
                        p[i] = nxt;
                        nxt++;
                    }
                }
                // assert(check());
            } else {
                p[0] = k;
                p[1] = (k == n - 1) ? n - 2 : n - 1;
                p[2] = idx++;
                p[n] = idx++;
                for (int i = n - 1; p[i] == -1; --i) {
                    if (idx == n - 2)
                        idx += 2;
                    p[i] = idx++;
                }
                // assert(check());
            }
        }
        for (auto &x : p)
            cout << x << " ";
        cout << endl;

    }
    return 0;
}