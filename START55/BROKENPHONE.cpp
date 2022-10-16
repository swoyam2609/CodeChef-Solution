#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
        cout<<"REPAIR"<<endl;
        else if(x>y)
        cout<<"NEW PHONE"<<endl;
        else
        cout<<"ANY"<<endl;
        
    }
	// your code goes here
	return 0;
}
