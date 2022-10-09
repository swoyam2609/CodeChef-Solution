#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
            else break;
        }
        cout<<count<<'\n';
    }
    return 0;
}