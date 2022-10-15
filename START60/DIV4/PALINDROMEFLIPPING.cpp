#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, nz = 0, no = 0;
        cin >> n;
        string arr;
        cin >> arr;
        for (int j = 0; j < arr.length(); j++)
        {
            if (arr[j] == '0')
                nz++;
            else
                no++;
        }
        if (n % 2 == 0)
        {
            if (nz % 2 == 0 && no % 2 == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
                cout << "YES\n";
        }
    }
    return 0;
}
