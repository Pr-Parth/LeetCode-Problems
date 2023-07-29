#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    int b[n];
	    for(int i=0; i<n; i++){
	        cin>>b[i];
	    }
	    
	    int count=0;
	    for(int i=0; i<n; i++){
	        int total=0;
	        total = a[i]*20 - b[i]*10;
	        if(count<total){
	            count = total;
	        }
	        
	    }
	   cout<<count<<endl;
	}
	return 0;
}
