#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int a[n];
	    for(int i =0; i<n; i++){
	        cin>>a[i];
	    }
	    
	    cin>>k;
	    int key;
	    key = a[k-1];
	    // cout<<key;


	    sort(a,a+n);
       
	    
	    int pos;
	    for(int i=0; i<n; i++){
	        if(a[i]==key){
	            cout<<i + 1<<endl;
	        }
	    }
	    
	    
	    
	}
	return 0;
}
