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
    queue<int> missing;     // to keep track of missing values in ascending order
    for (int i = 0; i < n;) // O(2*n)
    {
        if (i + lag + 1 != arr[i])
        {
            missing.push(i + 1 + lag); // adding missing values
            lag++;
            continue;
        }
        i++;
    }
    for (int i = 0; i < k; i++) // O(n)
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
        sort(arr.begin(), arr.end());      // O(n*lg(n))
        long score = 0;                    // score can get pretty large
        if (arr[n - 1] == 2 * n || k == 1) // if we already have the maximum possible value in the array, or can't afford to add it
        {
            score = calculateScore(arr, n, k);
        }
        else // check which will yield the best score, adding the maximum value or not adding the maximum value/
        {
            long scoreWithoutMax = calculateScore(arr, n, k);
            arr.push_back(2 * n); // pushing the maximum value into the sorted array
            k--;                  // by doing so we consume one move
            n++;                  // and add one element to the array
            long scoreWithMax = calculateScore(arr, n, k);
            score = max(scoreWithMax, scoreWithoutMax);
        }
        cout << score << endl;
    }

    return 0;
}
