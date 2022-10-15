#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            if((a-b)%2==0)
            cout<<(a-b)/2<<endl;
            else
            cout<<((a-b)/2)+1<<endl;
        }
        else
        {
            if((b-a)%2==0)
            cout<<(b-a)/2<<endl;
            else
            cout<<((b-a)/2)+1<<endl;
        }
    }
	return 0;
}