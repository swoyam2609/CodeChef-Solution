#include <iostream>
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)
using namespace std;

int main()
{
    testCase
    {
        int n, x;
        cin >> n >> x;
        if ((n * x) % 4 == 0)
            cout << (n * x) / 4 << endl;
        else
            cout << (n * x) / 4 + 1 << endl;
    }
    return 0;
}