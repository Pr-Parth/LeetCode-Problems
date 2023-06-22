#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,m;
	
	while(t--){
	    cin>>n>>m;
	    int count=0;

	    for(int i=n; i<=m;i++){
	        if(i%10==2){
	            count++;
	            
	            
	        }
	        else if(i%10==3){
	            count++;
	            
	            
	        }
	        else if(i%10==9){
	            count++;
	            
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}