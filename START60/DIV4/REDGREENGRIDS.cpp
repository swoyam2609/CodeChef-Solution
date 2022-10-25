#include <iostream>
#include <cstring>
#include <vector>
#include <math.h>
using namespace std;

const long long modulo = 998244353; // this is prime

// finding nCr with modulo is harder than you think!

// long long fact[1999];    //for fermat's little theorem method
long long combinations[1999];

// Calculating nCr%p using fermat's little theorem

// void populateFactorials()
// {
//     fact[0] = 1;
//     for (int i = 1; i < 2000; i++)
//     {
//         fact[i] = (fact[i - 1] * i) % modulo;
//     }
// }

// long long modularMultiplicativeInverse(long long n)
// {
//     return effPower(n, modulo - 2);
// }

// long long nCr(int n)
// {
//     int r = n / 2;
//     return (((fact[n] * modularMultiplicativeInverse(fact[r])) % modulo) * modularMultiplicativeInverse(fact[r])) % modulo;
// }

// Calculating nCr%p using pascal's triangle(slower but easy to understand)

long long effPower(long long base, long long power) // O(lg N)
{
    if (power == 0)
        return 1;
    long long temp = effPower(base, power / 2);
    if (power & 1) // power % 2 != 0
    {
        return ((base * temp) % modulo * temp) % modulo;
    }
    else
    {
        return (temp * temp) % modulo;
    }
}

void pascalTriangle() // O(n^2), n is small and, it is only a one time calculation
{
    // max path length = 1998
    int n = 1999;
    long long C[2000];
    memset(C, 0, sizeof(C));
    C[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            C[j] = (C[j - 1] + C[j]) % modulo;
            if (j == ceil(i / 2.0))
            {
                combinations[i / 2] = C[j];
            }
        }
    }
}

int main() // problem's core:- (number of paths from (1,1) to (N,M)) * (number of combinations of equal colors on the path) * (number of all color combinations in the squares not on the path)
{
    pascalTriangle();
    // populateFactorials();
    vector<vector<long long>> pathsCount(1000, vector<long long>(1000, 0));
    pathsCount[0][0] = 1;
    for (int i = 0; i < 1000; i++) // calculate number of possible paths    //O(n*m), only a one time calculation.
    {
        for (int j = 0; j < 1000; j++)
        {
            if (i - 1 >= 0)
            {
                pathsCount[i][j] += pathsCount[i - 1][j];
                pathsCount[i][j] = pathsCount[i][j] % modulo;
            }
            if (j - 1 >= 0)
            {
                pathsCount[i][j] += pathsCount[i][j - 1];
                pathsCount[i][j] = pathsCount[i][j] % modulo;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        int pathLength = N + M - 1;
        if (pathLength % 2 != 0)
        {
            cout << 0 << endl;
            continue;
        }
        long long possiblePaths = (pathsCount[N - 1][M - 1]) % modulo;
        // long long possibleColors = nCr(pathLength);
        long long possibleColors = combinations[pathLength / 2];
        int noOfCells = N * M;
        long long restPermutation = effPower(2, noOfCells - pathLength);
        cout << (((possiblePaths * possibleColors) % modulo) * restPermutation) % modulo << endl;
    }

    return 0;
}