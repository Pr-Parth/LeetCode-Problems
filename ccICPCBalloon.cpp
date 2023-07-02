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
	    int count=0;
	    for (int i=0; i<n; i++){
	        if(a[i]>=1 && a[i]<=7 ){
	            count = i;
	            
	        }
	    }
	    cout<<count+1<<endl;
	    
	}
	return 0;
}
