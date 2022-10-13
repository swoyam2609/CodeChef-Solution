#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,c;
        cin>>n;
        int a[n];
        bool x = true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            c=0;
            int k = a[i];
            if(k != NULL)
            {
               
              for(int j=0;j<n;j++)
              {
                  if(a[j]==k)
                  {
                      c++;
                    a[j]=NULL;  
                  }
              }
            }
            if(k != NULL)
            {
            if(k==c)
            {
                x = true;
                continue;
            }
            else if(k != c)
            {
                x = false;
                cout<<"NO"<<endl;
                break;
            }
            }
        }
        if(x)
        {
            cout<<"YES"<<endl;
        }
        
    }
}