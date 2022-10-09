// #pragma GCC optimize("Ofast,unroll-loops")
// #pragma GCC target("avx,avx2,fma")
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <cmath>
#include <queue>
#include <bitset>
#include <numeric>
#include <array>
#include <cstring>
#include <random>
#include <chrono>
#include <complex>
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define make_unique(x) sort(all((x))); (x).resize(unique(all((x))) - (x).begin())
typedef long long ll;
typedef long double ld;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class F>
std::vector<int> smawck(F f, const std::vector<int> &rows, const std::vector<int> &cols) {
    std::vector<int> ans(rows.size(), -1);
    if((int) std::max(rows.size(), cols.size()) <= 2) {
        for(int i = 0; i < (int) rows.size(); i++) {
            for(auto j : cols) {
                if(ans[i] == -1 || f(rows[i], ans[i], j)) {
                    ans[i] = j;
                }
            }
        }
    } else if(rows.size() < cols.size()) {
        // reduce
        std::vector<int> st;
        for(int j : cols) {
            while(1) {
                if(st.empty()) {
                    st.push_back(j);
                    break;
                } else if(f(rows[(int) st.size() - 1], st.back(), j)) {
                    st.pop_back();
                } else if(st.size() < rows.size()) {
                    st.push_back(j);
                    break;
                } else {
                    break;
                }
            }
        }
        ans = smawck(f, rows, st);
    } else {
        std::vector<int> newRows;
        for(int i = 1; i < (int) rows.size(); i += 2) {
            newRows.push_back(rows[i]);
        }
        auto otherAns = smawck(f, newRows, cols);
        for(int i = 0; i < (int) newRows.size(); i++) {
            ans[2*i+1] = otherAns[i];
        }
        for(int i = 0, l = 0, r = 0; i < (int) rows.size(); i += 2) {
            while(l && cols[l-1] >= ans[i-1]) l--;
            if(i+1 == (int) rows.size()) r = (int) cols.size();
            while(r < (int) cols.size() && r <= ans[i+1]) r++;
            ans[i] = cols[l++];
            for(; l < r; l++) {
                if(f(rows[i], ans[i], cols[l])) {
                    ans[i] = cols[l];
                }
            }
            l--;
        }
    }
    return ans;
}
// max smawck
// F(i, j, k) checks if M[i][j] <= M[i][k]
// another interpretations is:
// F(i, j, k) checks if M[i][k] is at least as good as M[i][j]
// higher == better
// when comparing 2 columns as vectors
// for j < k, column j can start better than column k
// as soon as column k is at least as good, it's always at least as good
template<class F>
std::vector<int> smawck(F f, int n, int m) {
    std::vector<int> rows(n), cols(m);
    for(int i = 0; i < n; i++) rows[i] = i;
    for(int i = 0; i < m; i++) cols[i] = i;
    return smawck(f, rows, cols);
}

template<class T>
std::vector<T> MaxConvolutionWithConvexShape(std::vector<T> anyShape, const std::vector<T> &convexShape) {
    if((int) convexShape.size() < 1) return anyShape;
    if(anyShape.empty()) anyShape.push_back(0);
    int n = (int) anyShape.size(), m = (int) convexShape.size();
    auto function = [&](int i, int j) {
        return anyShape[j] + convexShape[i-j];
    };
    auto comparator = [&](int i, int j, int k) {
        if(i < k) return false;
        if(i - j >= m) return true;
        return function(i, j) <= function(i, k);
    };
    const std::vector<int> best = smawck(comparator, n + m - 1, n);
    std::vector<T> ans(n + m - 1);
    for(int i = 0; i < n + m - 1; i++) {
        ans[i] = function(i, best[i]);
    }
    return ans;
}
const int N = 1e5 + 42;
int n;
ll a[N];
pair<vector<ll>, vector<ll>> go(int l, int r) {
  if(l == r) {
    if(a[l] >= 0) {
      return {{a[l]}, {a[l]}};
    } else return {{a[l], -a[l]}, {a[l], -a[l]}};
  }
  int tm = (l + r) / 2;
  auto dpl = go(l, tm);
  auto dpr = go(tm + 1, r);
  auto dp1 = MaxConvolutionWithConvexShape(dpr.fi, dpl.se);
  auto dp2 = MaxConvolutionWithConvexShape(dpr.se, dpl.se);
  for(int i = 0; i < dp1.size(); i++) {
    if(i < dpl.fi.size()) dp1[i] = max(dp1[i], dpl.fi[i]);
    if(i) dp1[i] = max(dp1[i], dp1[i - 1]);
  }
  for(auto& x : dp1)
  return mp(dp1, dp2);
}
void solve() {
  int n; cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  auto dp = go(0, n - 1);
  ll ans = 0;
  for(int i = 0; i <= n; i++) {
    if(i < dp.fi.size()) ans = max(ans, dp.fi[i]);
    cout << ans << ' ';
  }
  cout << '\n';
}
int main() {

  ios::sync_with_stdio(0); cin.tie(0);

  int t;

  cin >> t;

  while(t--) solve();

  return 0;
}
/*

*/
