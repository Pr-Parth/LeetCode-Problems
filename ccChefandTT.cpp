#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    
	    int count=0;
	    int temp=0;
	    for(int i=0; i<s.length(); i++){
	        if(s[i]=='1'){
	           count++;
	        }
	        else{
	            temp++;
	        }
	    }
	    if(count>temp){
	        cout<<"WIN"<<endl;
	    }
	    else{
	        cout<<"LOSE"<<endl;
	    }
	}
	return 0;
}
