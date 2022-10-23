#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n;
     string str2;
     cin>>n>>str2;
     string str1=str2;
     reverse(str2.begin(),str2.end());
     int n1=str1.length(),n2=str2.length();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int i=n1,j=n2;
        string ans="";
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans=str1[i-1]+ans;
                i--;j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){

                i=i-1;
            }
            else{

                j=j-1;
            }
        }
        cout<<ans<<endl;
 }
 return 0;
}