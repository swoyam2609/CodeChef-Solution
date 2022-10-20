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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a % 2 == 0 && b % 2 == 1) || (b % 2 == 0 && c % 2 == 1) || (c % 2 == 0 && a % 2 == 1))
            cout << "YES" << endl;
        else if ((b % 2 == 0 && a % 2 == 1) || (c % 2 == 0 && b % 2 == 1) || (a % 2 == 0 && c % 2 == 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*
    INPUT

    4
    1 2 3
    8 4 6
    3 3 9
    7 8 6

    OUTPUT

    YES
    NO
    NO
    YES

*/