#include<bits/stdc++.h>
using namespace std;
int main() {
    int test;
    cin >> test;
    while(test--) {
        int a;
        cin >> a;
        vector<int> v(a);
        string s;
        for(auto &x: v) cin >> x;
        set<int> s1;
        for(int i = 0; i < a; i++) {
            char c;
            cin >> c;
            if(c == '0') 
            s1.insert(v[i]);
        }        
        cout << *s1.begin() << endl;
    }
}