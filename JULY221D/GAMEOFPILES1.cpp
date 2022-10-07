#include <bits/stdc++.h>
using namespace std;

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        long long n,countodd=0;
        cin>>n;
        long long pile[n];
        for(int i=0;i<n;i++)
        cin>>pile[i];
     
    if(n>1) 
    {  
         sort(pile, pile+n);
         if(pile[0]==1)
         cout<<"Chef"<<endl;
         else
         {
             for(int i=0;i<n;i++)
             {
                 if(pile[i]%2!=0)
                 countodd++;
             }
             if(countodd%2==0)
             cout<<"Chefina"<<endl;
             else
             cout<<"Chef"<<endl;
         }
    }
    else
    {
        if(pile[0]%2==0)
        cout<<"Chefina"<<endl;
        else
        cout<<"Chef"<<endl;
    }
    }
	return 0;
}
