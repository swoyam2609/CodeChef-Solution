// Chef likes to spend his summer vacation playing with strings. Chef likes alternating patterns, but he only likes the characters \texttt{a}a and \texttt{b}b, so he does the following:

// Chef starts with an empty string SS. Then,

// First, he appends \texttt{a}a once to SS
// Next, he appends \texttt{b}b twice to SS
// Next, he appends \texttt{a}a thrice to SS
// Next, he appends \texttt{b}b four times to SS
// and so on. For example, the first 1313 characters of SS are \texttt{abbaaabbbbaaa}abbaaabbbbaaa.

// Now, Chef takes the string formed by the first NN characters of SS, and wants to calculate its beauty. The beauty of a string is calculated as follows:

// First, we define the value of a string AA to be the number of positions 1 \leq i \lt |A|1≤i<∣A∣ such that A_i \neq A_{i+1}A 
// i
// ​
//  =A 
// i+1
// ​
//  . For example, the value of \texttt{aaa}aaa is 00 and the value of \texttt{abba}abba is 22.
// Then, the beauty of a string is defined to be the sum of values of all its substrings. Two substrings are considered distinct if they occur at different positions, so every string of length KK has exactly K\cdot(K+1)/2K⋅(K+1)/2 substrings.
// You are given NN. Help Chef by calculating the beauty of the string formed by the first NN characters of SS. The answer may be large, so report it modulo 10000000071000000007.


#include<bits/stdc++.h>
using namespace std;

#define ll				long long
#define pb				push_back
#define vll				vector<ll>
#define pll				pair<ll, ll>
#define F				first
#define S				second

void sol(){ 
    ll n;
    cin >> n;

    vll v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    vll greater(n+1), lower(n+1);
    for(ll i=n-1; i>=0; i--){
        lower[i] = n - v[i] + 1 + lower[i+1];
    }
    for(ll i=0; i<n; i++){
        greater[i] = n - v[i];
        if(i) greater[i] += greater[i-1];
    }
    // for(auto it: v) cout << it << " ";
    // cout << "\n";
    // for(auto it: greater) cout << it << ' ';
    // cout << "\n";
    // for(auto it: lower) cout << it << " ";
    // cout << "\n";
    for(ll i=0; i<n; i++){
        auto indh = upper_bound(v.begin(), v.end(), i);
        auto indl = lower_bound(v.begin(), v.end(), i);

        ll mx=0;
        if(indl != v.begin()){
            indl--;
            mx += greater[indl - v.begin()];
        }
        mx += lower[indh - v.begin()];

        cout << v.end() - indh << " " << mx << "\n";

    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll tt;
    cin >> tt;
    while(tt--){
        sol();
    }

    return 0;
}
// anirudh prakash //