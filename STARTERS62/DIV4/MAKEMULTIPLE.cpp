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
        int a, b;
        cin >> a >> b;
        if (b % a == 0)
            cout << "YES" << endl;
        else if (a <= b / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*
INPUT
3
3 6
4 14
9 10

OUTPUT
YES
YES
NO
*/