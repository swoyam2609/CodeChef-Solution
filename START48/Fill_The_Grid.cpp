#include <iostream>
using namespace std;
int main()
{
    long long int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (N % 2 == 1 && M % 2 == 1)
        {
            cout << (N + M) - 1;
        }
        else if (N % 2 == 1)
        {
            cout << M;
        }
        else if (M % 2 == 1)
        {
            cout << N;
        }
        else
        {
            cout << 0;
        }
        cout << "\n";
    }
    return 0;
}