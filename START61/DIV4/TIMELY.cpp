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
        int x;
        cin >> x;
        if (x >= 30)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
/*
    INPUT

    6
    30
    60
    14
    29
    31
    42

    OUTPUT

    YES
    YES
    NO
    NO
    YES
    YES
*/