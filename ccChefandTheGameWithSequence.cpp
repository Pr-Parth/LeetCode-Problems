#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int even_count = 0, odd_count =0;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        if(a[i]%2==0){
	            even_count++;   
	        }
	        else{
	            odd_count++;
	        }
	    }
	    if(odd_count%2==0 || n==1){
	        cout<<1<<endl;
	    }
	    else{
	        cout<<2<<endl;
	    }
	}
	return 0;
}
