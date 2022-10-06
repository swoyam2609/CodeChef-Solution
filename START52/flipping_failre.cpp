#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100001], b[100001];
int n, m, s;
int query(int l, int r) {
  return b[r] - b[l-1];
}
void solve() {
  string T;
  cin >> T;
  for(int i=0; i<T.size(); ++i)
    a[i+1] = T[i] - 48;
  n=T.size(); s=2147483647;
  for(int i=1; i<=n;++i)
    b[i] = b[i-1] +a[i];
  m=query(1, n);
  for(int i=1; i<=n; ++i) {
    if(n-i-query(i+1, n) > query(1, i)) continue;
    s=min(s, n-i-query(i+1, n)+query(1, i)-(n-i-query(i+1, n))-query(1, query(1, i)-(n-i-query(i+1, n))));
  }
  cerr << endl;
  cout << s << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--)
    solve();
}