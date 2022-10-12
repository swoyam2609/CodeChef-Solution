#include <iostream>
#define testCase int t; cin >> t; while (t--)
using namespace std;

int main()
{
    testCase
    {
        float x, y;
        cin >> x >> y;
        if ((y / x) >= 0.5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}