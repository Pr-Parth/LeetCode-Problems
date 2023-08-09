#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int n,x=0;
	    cin>>n;
	    
	    if(n%2==0){
	        cout<<n/2<<endl;
	    }
	    else{
	        cout<<-1*((n+1)/2)<<endl;
	    }
	    
	}
	return 0;
}
