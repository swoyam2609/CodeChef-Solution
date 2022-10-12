#include <iostream>
#define testCase int t; cin >> t; while (t--)
using namespace std;

int main()
{
    testCase
    {
        int n, k;
        cin >> n >> k;
        cout << (n / k) * (n / k) << endl;
    }
    return 0;
}
