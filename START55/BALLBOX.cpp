#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n>=k*(k+1)/2)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
     }
}
