#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	   // int k =2*n;
	    int a[2*n];
	    int count;
	    for(int i=0; i<(2*n); i++){
	           cin>>a[i];
	      }
	    for(int i =0; i<(2*n)-1; i++){
	            count=0;
	        for(int j=i; j<2*n;j++){
	            if(a[i]==a[j]){
	                count++;
	            }
	        }
	        if(count==3){
	            cout<<"NO"<<endl;
	            break;
	        }
	    }
	   
        if(count<3){
            cout<<"YES"<<endl;
        }   
    }
	return 0;
}