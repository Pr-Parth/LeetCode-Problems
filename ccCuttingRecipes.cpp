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
	    for (int i =0; i<n; i++){
	        cin>>a[i];
	    }
	    int min;
	    for(int i=0; i<n; i++){
	        min=a[0];
	        if(a[i]<min){
	            min=a[i];
	        }
	    }
        // cout<<min<<endl;
        int final=0;
        for(int i=0; i<n; i++){
            final=__gcd(final,a[i]);
            
        }
	    for(int i =0; i<n; i++){
	        
            cout<<a[i]/final<<" ";
	    }
	   
	   cout<<endl; 
	    
	}
	return 0;
}
