#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

long calculateScore(vector<int> arr, int n, int k)
{
    int arrMaxElement = arr[n - 1];
    int minMissing, maxPossible = 2 * n;
    long score = 0;
    int lag = 0;
    queue<int> missing;
    for (int i = 0; i < n;) // O(2*n)
    {
        if (i + lag + 1 != arr[i])
        {
            missing.push(i + 1 + lag);
            lag++;
            continue;
        }
        i++;
    }
    // for (int i = 0; i < missing.size() + i; i++)
    // {
    //     cout << missing.front() << "->";
    //     missing.pop();
    // }
    // cout << endl;

    for (int i = 0; i < k; i++)
    {
        if (missing.size() < 1)
            break;
        score += arrMaxElement - missing.front();
        missing.pop();
    }
    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++) // O(n)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end()); // O(n*lg(n))
        long score = 0;
        if (arr[n - 1] == 2 * n || k == 1)
        {
            score = calculateScore(arr, n, k);
        }
        else
        {
            long scoreWithoutMax = calculateScore(arr, n, k);
            arr.push_back(2 * n);
            k--;
            n++;
            long scoreWithMax = calculateScore(arr, n, k);
            // cout << "ans: " << scoreWithoutMax << " " << scoreWithMax << endl;
            score = max(scoreWithMax, scoreWithoutMax);
        }
        cout << score << endl;
    }
    // if we need to add maxPossible, it should be the first move.

    return 0;
}
