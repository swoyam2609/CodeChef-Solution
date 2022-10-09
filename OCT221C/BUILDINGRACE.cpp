#include<bits/stdc++.h>
using namespace std;

string solve(double x, double y, double a, double b){
    if(x/a==y/b){
        return "BOTH";
    }
    else if(x/a<y/b){
        return "CHEF";
    }
    else{
        return "CHEFINA";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<solve(a,b,c,d)<<'\n';
    }
    return 0;
}