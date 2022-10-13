#include <iostream>
#define testCase int t; cin >> t; while (t--)
using namespace std;

int main()
{
    testCase
    {
        int x;
        cin >> x;
        if (x > 100)
            cout << x - 10 << endl;
        else
            cout << x << endl;
    }
    return 0;
}
