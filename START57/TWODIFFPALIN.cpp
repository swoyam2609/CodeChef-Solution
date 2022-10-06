#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int ans = 0;
        if (a >= 2 && b >= 2)
        {
            if ((a % 2 == 0) || (b % 2 == 0))
                ans = 1;
        }
        if (ans)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
