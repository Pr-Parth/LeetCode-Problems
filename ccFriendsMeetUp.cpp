#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,stepsA, stepsB;
	    cin>>a>>b;
	    
	    if(a<b){
	        cout<<"NO"<<endl;
	    }
	    else if(a>b){
	        for(int i=0; i<100; i++){
	            stepsA = a + i;
	            stepsB = a + 2*i;
	            
	            if(stepsA = stepsB){
	                cout<<"YES"<<endl;
	                break;
	            }
	           
	        }
	    }
	    
	    else{
	        cout<<"YES"<<endl;
	    }
	    
	   
	}
	return 0;
}
