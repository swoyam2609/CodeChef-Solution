// While playing chess, Chef noticed that it is generally advantageous for him if his knight attacks two or more of his opponent's pieces simultaneously. To practice this skill, Chef decided to perform the following exercise:

// Take an empty 8 \times 88×8 chessboard, and any two white pieces.
// Choose two distinct cells (X_1, Y_1)(X1,Y1), (X_2, Y_2)(X2,Y2) and place the pieces on those cells (the cell at the intersection of the ii-th row and jj-th column is denoted (i, j)(i,j)).
// Check if there exists an empty cell where he can place a black knight in such a way that the knight attacks both the white pieces simultaneously

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll ;
ll gcd(ll a, ll b)
{
if (a == 0)
return b;
return gcd(b % a, a);
}
ll findGCD(ll arr[], ll n)
{
ll result = arr[0];
for (int i = 1; i < n; i++)
{
result = gcd(arr[i], result);

if(result == 1)
{
return 1;
 }
}
 return result;
}





 int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);
     ll t;
     cin>>t;
     while (t--){
     ll x1,y1,x2,y2;
     cin>>x1>>y1;
     cin>>x2>>y2;

     if (abs (x1-x2)==0){
        if (abs(y1-y2)==2 || abs(y1-y2)==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     else if (abs(x1-x2)==1){
        if (abs(y1-y2)==1){
            if ((x1==1 && y1==1) || (x2==1 && y2==1)) cout<<"NO"<<endl;
           else if ((x1==1 && y1==8) || (x2==1 && y2==8)) cout<<"NO"<<endl;
           else if ((x1==8 && y1==1) || (x2==8 && y2==1)) cout<<"NO"<<endl;
           else if ((x1==8 && y1==8) || (x2==8 && y2==8)) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
           else if (abs(y1-y2)==3) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
     else if (abs (x1-x2)==3){
        if (abs(y1-y2)==1 || abs(y1-y2)==3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     else if (abs(x1-x2)==4){
        if (abs(y1-y2)==0 || abs(y1-y2)==2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
     }
     else if (abs(x1-x2)==2){
        if (abs (y1-y2)==0 || abs(y1-y2)==4) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }
     else cout<<"NO"<<endl;
 

         } 
    

     return 0;
}