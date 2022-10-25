#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    
	    if((A+B)%2==0) 
        cout<<"YES"<<endl;
	    else
        cout<<"NO"<<endl;
	    
	}
	return 0;
}
