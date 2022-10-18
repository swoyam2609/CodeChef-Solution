#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll BE(ll ac, ll nb)
{
    ll res = 1;
    while (nb > 0)
    {
        if (nb & 1)
        {
            res = (res * ac * 1LL);
        }
        ac = (1LL * ac * ac);
        nb = nb >> 1;
    }
    return res;
}

void pro()
{
    ll n;
    cin >> n;
    ll an[n];
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        cin >> an[i];
    }
    ll cnt = 0, xor1 = 0;
    st.insert(0);
    for (int i = 0; i < n; i++)
    {
        xor1 ^= an[i];

        if (st.count(xor1) >= 1)
        {
            st.clear();
            cnt++;
            st.insert(0);
            xor1 = 0;
        }
        st.insert(xor1);
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        pro();
}