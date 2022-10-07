#include <bits/stdc++.h>
using namespace std;



long long hpower2(long long  n)
{//finding power of 2 <=N
    long long store=0;
    for(long long i=n;i>=1;i--)
        {
            if((i&(i-1))==0)
            {
                store=i;
                break;
            }
        }
        return store;
}

int main() {
    long long mysol;
    cin>>mysol;
    while (mysol--)
    {
        long long n;
        cin>>n;
       long long f[n+1];
        for(int i=0;i<=n;i++)
        cin>>f[i];
      
        long long sol[3]={0,0,0};
       
        for(int i=hpower2(n);i>0;i/=2)
        {
           long long diff=f[i]-f[0];
               if(diff<0)
               {
                   diff*=-1;
                   long long countst = diff/i;
                   if(countst==1)
                   {
                       countst=2;
                       if((sol[0]^i)<=n)
                       {
                           sol[0]^=i;
                           countst--;
                       }
                        if(countst && (sol[1]^i)<=n)
                       {
                           sol[1]^=i;
                           countst--;
                       }
                       if(countst>0 && (sol[2]^i)<=n){
                       sol[2]^=i;
                   }   }
                       else if(countst==3)
                       {
                           sol[0]^=i;
                           sol[1]^=i;
                           sol[2]^=i;
                       }
                }
                    else
                {
                    long long countst = diff/i;
                    if(countst==1)
                    {
                        if((sol[0]^i)<=n)
                        sol[0]^=i;
                        else if((sol[1]^i)<=n)
                        sol[1]^=i;
                        else
                        sol[2]^=i;
                    }
               }
               sort(sol, sol+3);
        }
        cout<<sol[0]<<" "<<sol[1]<<" "<<sol[2]<<endl;
              
    }
	return 0;
}
