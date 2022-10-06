#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>=67&&x<=45000){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
