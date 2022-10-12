#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, ans = 0ll; cin >> n;
    vector <ll> v(n);
    for (ll &i : v) cin >> i;
    ll xor1 = 0ll;
    set <ll> s;
    for (ll i : v)
    {
        xor1 ^= i;
        if (!xor1 || s.find(xor1) != s.end())
        {
            ans++;
            xor1 = 0;
            s.clear();
        }
        else s.insert(xor1);
    }
    cout << ans << "\n";
}

int main() 
{
	// your code goes here
	ll t; cin >> t;
	while (t--)
	{
	    solve();
	}
	return 0;
}
