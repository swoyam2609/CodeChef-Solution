#include <bits/stdc++.h>

#ifdef DEBUG
    #include "/home/hdd/cp/lib/debug.hpp"
#else
    #define dbg( ... )
#endif

#define int int64_t
using namespace std;

vector< vector< vector< int > > > bit( 2, vector< vector< int > >( 2, vector< int >( 2 ) ) );

void prepare_choices() {
    bit[0][0][0] = 1;
    bit[0][1][1] = 1;
    bit[1][0][1] = 1;
    bit[1][1][0] = 1;
    bit[1][1][1] = 4;
}

inline void run_case() {
    int P, Q, R;
    cin >> P >> Q >> R;

    dbg( bit );

    int res { 1 };

    for( int b {}; b < 20; ++b ) {
        int p { ( P & ( 1 << b ) ) > 0 };
        int q { ( Q & ( 1 << b ) ) > 0 };
        int r { ( R & ( 1 << b ) ) > 0 };

        res *= bit[p][q][r];
    }

    cout << res << endl;
}

int32_t main() {
    ios::sync_with_stdio( false );
    cin.tie( nullptr );

    prepare_choices();

    int T { 1 };
    cin >> T;

    for( int test { 1 }; test <= T; ++test ) {
        run_case();
    }
}

