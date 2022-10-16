#include <iostream>
using namespace std;

int main() {
	int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>X>>Y;
	    if(X<Y){
	        cout<<Y-X<<endl;
	    }
	    if(Y<=X){
	        cout<<0<<endl;
	    }
	}
	return 0;
}
