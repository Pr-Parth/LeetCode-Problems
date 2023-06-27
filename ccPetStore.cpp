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
	   // int sum=0;
	    int count=0;
	    for(int i =0; i<n; i++){
	        cin>>a[i];
	       // sum+=a[i];
	    }
        sort(a,a+n);       // sorting so that we can compare adjacent element same or not     
	    if(n%2!=0){       //odd cant be distributed equally in two
	        cout<<"NO\n";
	    }
	    else{
	        int i;          //for even comparing adjacent element
	        for(i=0;i<n;i+=2){
	            if(a[i]!=a[i+1]){
	                cout<<"NO\n";
	                break;
	            }
	        }
	        if(i==n){                   //finally at last just compare i==n or not
	                cout<<"YES\n";
	            }
	           
	        
	    }
	}
	return 0;
}
