#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int c;
	    cin>>c;
	    string s;
	    cin>>s;
	    list<char> ls;
	    ls.push_front(s[0]);
	    bool at=false;
	    int i=1,j=s.size()-1;
	    while(i<=j){
	        if(at){
	             if(s[i]=='1'){
	                ls.push_back(s[i]);
	            }
	            else{
	                ls.push_front(s[i]);
	            }
	            i++;
	            at=false;
	        }else{
	            if(s[j]=='0'){
	                ls.push_back(s[j]);
	            }
	            else{
	                ls.push_front(s[j]);
	            }
	            j--;
	            at=true;
	        }
	    }
	    
	     for (auto itr = ls.begin(); itr != ls.end(); itr++)
         cout << *itr ;
         cout<<endl;
	}
	return 0;
}
