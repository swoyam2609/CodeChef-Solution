# Alice jogs everyday to keep herself fit and active. She noticed that she burns X calories when jogging the first kilometer, and for K > , jogging the K^{th} kilometer burns calories equivalent to the total number of calories burned while jogging the first K-1 kilometers.

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define br '\n';
#define mod 1000000007
typedef long long ll;
typedef unsigned long long ul;
typedef unsigned int ui;
typedef vector<int> vi;

void solve(long int[]);

int main() {
	ios_base::sync_with_stdio(false);
	cin .tie(nullptr);
	cout.tie(nullptr);
	int test;
	cin >> test;
	long int pow[1000001];
	pow[0]= 1;
	for (int i= 1; i < 1000001; i++)
	    pow[i]= (pow[i-1]*2)%mod;
	while(test--)
		solve(pow);
	return 0;
}

void solve(long int pow[]) {
    
	int n, x;
	cin >> n >> x;
	unsigned long long si= x, zi= si;
	cout<<(x*pow[n-1])%mod<<"\n";
	return;
}
