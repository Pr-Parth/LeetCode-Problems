#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,w;
	    cin>>n>>w;
	    int a[n];
	    int sum=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        
	    }
	    
	    sort(a,a+n);
	    
	    
	    for(int i=n-1; i>=0; i--){
	        sum+=a[i];
	        if(sum>=w){
	            cout<<i<<endl;
	            break;
	        }
	    }
	    
	    
	}
	return 0;
}
