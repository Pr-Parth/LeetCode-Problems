#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,u;
	    cin>>s;
	    cin>>u;
	    int count=0;
	    for(int i=0; i<n; i++){
	        if(s[i]==u[i]){
	            count++;
	        }
	        else if(u[i]=='N'){
                continue;
            }
            else{
                i++;
            }
        
	    }
	    cout<<count<<endl;
	    
	    
	    
	}
	return 0;
}
