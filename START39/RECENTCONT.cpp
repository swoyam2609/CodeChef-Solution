#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,c1,c2;
	cin>>t;
	while(t--){
	    cin>>n;
	    c1=0,c2=0;
	    string str;
	    while(n--){
	        cin>>str;
	        if(str[0]=='S')c1++;
	        if(str[0]=='L')c2++;
	    }
	    cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}
