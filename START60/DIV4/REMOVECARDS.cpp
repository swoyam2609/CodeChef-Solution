#include <iostream>
#define testCase int t; cin >> t; while (t--)
using namespace std;

int c, pivot;

int mostFrequent(int *arr, int n)
{
    int maxcount = 0;
    int maxFreq;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        if (count > maxcount)
        {
            maxcount = count;
            maxFreq = arr[i];
        }
    }

    return maxFreq;
}

int main()
{
    testCase
    {
        int n;
        c = 0;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        pivot = mostFrequent(A, n);
        for (int i = 0; i < n; i++)
        {
            if (A[i] != pivot)
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}