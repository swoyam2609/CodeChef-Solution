#include <iostream>
using namespace std;
int main() {
	int temp;
	cin >> temp;
	while(temp--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if(a <= b && c <= b)
	    cout << "Yes" << endl;
	    else
	    cout << "No" << endl;	    
	}
	return 0;
}