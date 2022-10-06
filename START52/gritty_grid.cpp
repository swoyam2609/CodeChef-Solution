#include<bits/stdc++.h> 
using namespace std;
#define int long long
void solve() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  n += m-2+a; a += b;
  if(n%2 == 1 && a%2 == 0) puts("No");
  else puts("Yes");
}
signed main() {
  int T;
  cin >> T;
  while(T--)
    solve();
}