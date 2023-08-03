#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    if(abs(m-n)<k){
	        cout<<0<<endl;
	    }
	    else {
	        cout<<abs(n-m) - k<<endl;
	    }
	    
	}
	return 0;
}
