#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <typename K, typename V, typename Comp = std::less<K>>
using ordered_map = tree<K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename Comp = std::less<K>>
using ordered_set = ordered_map<K, null_type, Comp>;

template <typename K, typename V, typename Comp = std::less_equal<K>>
using ordered_multimap = tree<K, V, Comp, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename Comp = std::greater_equal<K>>
using ordered_multiset = ordered_multimap<K, null_type, Comp>;

using namespace std;
#define sz(x)           int(x.size())
#define all(vec)        vec.begin(), vec.end()
#define rall(vec)       vec.rbegin(), vec.rend()
#define cin(v, n)       for (int cn = 0; cn < n; cn++) cin >> v[cn];
#define cout(v)         for(auto&cnt:v) cout << cnt << " ";
#define MOD 1000000007
#define pi 3.141593
#define endl "\n"

typedef long long ll;
typedef unsigned long long ull;

void Solve();
int main()    
{
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);   
    int tests = 1;
    cin >> tests;
    for (int i = 1; i <= tests; i++) {
        Solve();  
    } 
    return 0;           
}
void Solve(){
    long long a,b; cin>>a>>b;
        while (true){
            if((a==b)) return cout<<"YES\n",void();
            if(a<b) swap(a,b);
            if(a%b) return cout<<"NO\n",void();
            a/=b;
        }
}   


//struct Product
// {
//     int price, id;
//     double rate;
//     Product(int price = 0, int id = 0, double rate = 0) : price(price), id(id), rate(rate){};
//     bool operator < (const Product& rhs) const{
//         if(rate == rhs.rate){
//             if(price == rhs.price){
//                 return id < rhs.id;
//             }
//             return price < rhs.price;
//         }
//         return rate > rhs.rate;
//     }
//     friend istream &operator >> (istream &in, Product &p){
//         in >> p.price >> p.id >> p.rate;
//         return in;
//     }
//     friend ostream & operator << (ostream& out, const Product & p){
//         out << p.id << " " << p.price << " " << p.rate;
//         return out;
//     }
// };


// int dx[] = {1, 1, 1, 0, 0, -1, -1, -1},  dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
// int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
// int dx[] = {1, 1, 2, 2, -1, -1, -2, -2}, dy[] = {2, -2, 1, -1, 2, -2, 1, -1};
