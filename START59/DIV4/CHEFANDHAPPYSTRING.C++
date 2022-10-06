#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    bool isLowercaseVowel, isUppercaseVowel;
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if(isLowercaseVowel||isUppercaseVowel)
    return true;
    else return false;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int st=0,size=0,mx=0;
	    for(int i=st;i<s.size();i++){
	        if(isVowel(s[i])){
	            size++;
	        }else{
	            mx=max(mx,size);
	            size=0;
	            st=i;
	        }
	    }
	    mx=max(mx,size);
	    if(mx>2){
	        cout<<"Happy"<<endl;
	    }else{
	        cout<<"Sad"<<endl;
	    }
	}
	return 0;
}
