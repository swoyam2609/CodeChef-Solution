#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,y,z,w;
	    cin>>x>>y>>z>>w;
	    if(x==0 && y==0 && z==0 && w==0){
	        cout<<"IN"<<endl;
	    }
	    else
	        cout<<"OUT"<<endl;
	}
	return 0;
}