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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        float A = float(a) / x;
        float B = float(b) / y;
        if (A == B)
            cout << "BOTH" << endl;
        else if (A < B)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    return 0;
}