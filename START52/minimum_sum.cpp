#include<bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long t, n, GCD, i, a;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> GCD;
        for(i = 1; i < n; i++)
        {
            cin >> a;
            GCD = __gcd(GCD, a);
        }
        cout << GCD * n << endl;
    }
    return 0;
}