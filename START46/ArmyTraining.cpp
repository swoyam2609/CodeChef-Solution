#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int totalsum=0,sum=0;
      int n;
      cin>>n;
      int a[n];
      for (int i = 0; i < n; i++) {
          /* code */
          cin>>a[i];
          totalsum+=a[i];
      }
      sort(a,a+n,greater<int>());//greater<int>() is used fo rthe descending order.
      long long finalAnswer=0;
      for (int i = 0; i < n; i++) {
          
          finalAnswer=max(finalAnswer,(long long)(sum)*((1000*(n-i))-(totalsum-sum)));
          sum+=a[i]; 
      }
      cout<<finalAnswer<<endl;
    }
	
	return 0;
}
