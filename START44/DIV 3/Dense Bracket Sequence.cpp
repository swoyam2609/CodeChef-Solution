//A bracket sequence SS is called dense if one of the following is true:

// SS is empty.
// S = (X)S=(X) where XX is dense.
// You are given a bracket sequence SS. What is the minimum number of brackets you must remove to make it dense?

#include <bits/stdc++.h>
#define ll  long long
#define vi  vector<int>
#define sw  vector<string>
#define vii vector<long long>
#define sti  stack<int>
#define st   set<int>
#define uns   unordered_set
#define mt    multiset<int>
#define mod   1000000007
#define pb    push_back
#define sz    size()
using namespace std;
void solve() {
	ll n;
	cin>>n;
     string arr;
     cin>>arr;
	ll low = 0,high = n-1,counter = 0;
	while(low < high) {
		if(arr[low] == '(' && arr[high] == ')') {
			low++;
			high--;
			counter += 2;
		}
		else if(arr[low] == '(' && arr[high] == '(') {
			  high--;
		}
		else if(arr[low] == ')' && arr[high] == ')') {
			low++;
		}
		else if(arr[low] == ')' && arr[high] == '(') {
			high--;
			low++;
		}
	}
	cout<<n-counter<<"\n";
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 	//solution comes here//
    ll t;
    cin>>t;
    while(t--) {
    	solve();
	}
	fflush(stdout);
    return 0;
}