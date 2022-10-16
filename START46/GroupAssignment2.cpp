#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        vector<int> a;
        ;
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        bool ans = true;
        std::sort(a.begin(), a.end());
        int i = 0;
        while (i < a.size() && ans)
        {
            int num = a[i];
            if (num == 0)
                continue;
            for (int j = 0; j < num; j++)
            {
                if (i >= n)
                {
                    ans = false;
                    break;
                }
                if (a[i] == num)
                    i++;
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}