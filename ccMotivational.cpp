#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    int s,r;
	    int ans=0;
	    for(int i=0; i<n; i++){
	        cin>>s>>r;
	        if(s<=x){
	            ans=max(ans, r);
	        }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
