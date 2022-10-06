#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
      int n;
      cin >> n;
      long long  a[n],b[n];
      for(int i=0; i<n; i++) {
          cin >> a[i];
      }
      for(int i=0; i<n; i++) {
          cin >> b[i];
      }
      long long k=0;
      for(int i=0; i<n; i++) {
          k+=a[i]-b[i];
      }
      long long p=0;
      for(int i=0; i<n; i++) {
          p+=abs(a[i]-b[i]);
      }
      if(k!=0) {
          cout << "-1\n";
      } else {
          cout << p/2 << "\n";
      }
  }
  return 0;
}