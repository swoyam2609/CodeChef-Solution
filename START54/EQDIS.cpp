#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,repeat=0;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);
        for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                repeat++;
            }
        }
        if(n%2!=0&&repeat==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
                cout<<"YES"<<endl;
        }
    }
    return 0;
}
