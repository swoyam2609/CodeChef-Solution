#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        while (n) {
            cout << n-- << " ";
        }
        cout << "\n";
    }
    return 0;
}
