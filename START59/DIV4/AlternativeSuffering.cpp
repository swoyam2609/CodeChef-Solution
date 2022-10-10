#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100001];

int32_t main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        int n, k;
        cin >> n >> k >> s;
        k--;
        s = "$" + s;
        s += "$";
        string b = s;
        for (int j = 1; j <= n; ++j)
            if (s[j] == '1')
            {
                b[j] = '0';
                if (s[j - 1] == '0')
                    b[j - 1] = '1';
                if (s[j + 1] == '0')
                    b[j + 1] = '1';
            }
        s = b.substr(1, n);
        
        for (int i = 0, x = INT32_MAX; i < n; ++i, x++)
        {
            if (s[i] == '1')
                x = 0;
            a[i] = x;
        }
        for (int i = n-1, x = INT32_MAX; i >= 0; --i, x++)
        {
            if (s[i] == '1')
                x = 0;
            a[i] = min(a[i], x);
        }
        for (int i = 0; i < n; ++i)
        {
            if (k < a[i])
                cout << 0;
            else
                cout << ((k - a[i]) % 2 == 0 ? 1 : 0);
        }
        cout << "\n";
    }
}
