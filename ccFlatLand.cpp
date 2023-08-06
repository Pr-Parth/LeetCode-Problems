#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n,root,rem;
	    cin>>n;
	    int count=0;
	    while(n!=0){
	        int x=sqrt(n);
	        n-=pow(x,2);
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}