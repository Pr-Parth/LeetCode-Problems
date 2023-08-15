#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    int maximum=x;
	    int sum=x;
	    
	    for(int i=0; i<n; i++){
	        sum +=a[i];
	        maximum=max(sum,maximum);
	        
	        if(sum<0){
	            sum=x;
	        }
	    }
	    cout<<maximum<<endl;
	}
	return 0;
}
