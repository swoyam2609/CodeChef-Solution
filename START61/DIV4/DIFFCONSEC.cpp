#include <iostream>
#include <string>
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)
using namespace std;

int main()
{
    testCase
    {
        int n, count = 0;
        char c;

        cin >> n;
        string str = "";
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            str = str + c;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (str.at(i) == str.at(i + 1))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
/*
    INPUT

    3
    2
    11
    4
    0101
    5
    00100

    OUTPUT

    1
    0
    2
*/