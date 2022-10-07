#include <iostream>
using namespace std;

int main() {
   long long mysol;
   cin>>mysol;
   while(mysol--)
   {
       long long int n;
       cin>>n;
       int A[n];
       if(n%2==0)
       {
           for(int i=1; i<=n; i++)
           {
               A[1]=n/2;
               if(i%2!=0)
               {
                   A[i+1]=n+1-A[i];
                   A[i+2]=n-A[i+1];
               }
              
              cout<<A[i]<<" ";
           }
           cout<<endl;
       }
       else
       {
           
           for(int i=1; i<=n; i++)
           {
               A[1]=n/2+1;
               if(i%2!=0)
               {
                   A[i+1]=n-A[i];
                   A[i+2]=n+1-A[i+1];
               }
              cout<<A[i]<<" ";
               
           }
           cout<<endl;
       
       }
   }  
	return 0;
}

