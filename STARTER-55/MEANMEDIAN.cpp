#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int x, y;
    cin >> x >> y;
    bool flag = false;
    for(int a=-1000;a<=y;a++){
        int c = 3*x - a - y;
        if(c > y && c <= 1000){
            cout << a << " " << y << " " << c;
            break;
        }
    }
   cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}