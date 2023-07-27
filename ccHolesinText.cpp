#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int totalcount;
	    int count1=0;
	    int count2=0;
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q'){
	            count1++;
	        }
	        if(s[i]=='B'){
	            count2++;
	        }
	            
	    }
	    totalcount = count1+2*count2;
	    cout<<totalcount<<endl;
	}
	return 0;
}
