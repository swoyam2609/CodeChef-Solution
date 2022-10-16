#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		std::vector<int> arr(n);
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}

		int rptr = ceil((float) n / 2);
		int lptr = n / 2 - 1;
		int prevDiff = 0;
		int steps = 0;
		while (rptr < n && lptr > -1)
		{
			int currDiff = arr[rptr] - arr[lptr];
			if (prevDiff > currDiff)
			{
				steps = -1;
				break;
			}

			steps += currDiff - prevDiff;
			prevDiff = currDiff;
			rptr++;
			lptr--;
		}

		cout << steps << endl;
	}

	return 0;
}
