#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,x=0,y=0;
	    cin>>a>>b>>c>>d;
	    if(a>=b){
	        x=a;
	    }
	    else{
	        x=b;
	    }
	    if(c>=d){
	        y=c;
	    }
	    else{
	        y=d;
	    }
	    cout<<x+y<<endl;
	}
	return 0;
}
