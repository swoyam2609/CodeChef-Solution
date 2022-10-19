//You are given two integers NN and KK. Find number of ordered triplets (A, B, C)(A,B,C) that satisfy the following conditions:

// 0 \le A, B, C \lt 2^N0≤A,B,C<2 
// N
 
// A, BA,B and CC are distinct
// A \oplus B \oplus C = KA⊕B⊕C=K
// Here, \oplus⊕ denotes the bitwise XOR operation.

    #include <bits/stdc++.h>

    using namespace std;
    #define faster ios_base::sync_with_stdio(false);   cin.tie(NULL);
    #define ll long long int 
    #define mod 1000000007
    #define PI 3.1415926535897932384626
    #define rep(i, a, b) for(int i = a; i < b; i++)

    ll fastPow(ll n, ll e);
    

    int main() 
    {
        faster
        int t=1;
        cin>>t;
        while(t--){
            ll n, k;cin>>n>>k;
            ll a=fastPow(2, n);
            cout << (a-1)*(a-2) << endl;
            

        }
        
        return 0;
    }

ll fastPow(ll n, ll e){
    if(e==0)return 1;
    ll l = fastPow(n,e/2);
    ll ans=(l*l);
    if(e%2==0)return ans;
    return ans*n;
}