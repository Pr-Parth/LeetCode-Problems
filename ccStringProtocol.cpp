#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int count=0;
	    for(int i=0; i<n; i++){
	        if(s[i]==s[i+1]){
	            i++;
	        }
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
