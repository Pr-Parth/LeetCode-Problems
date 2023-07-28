#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,p,b;
	    cin>>n>>p>>b;
	    
	    if(n>=p){
	        cout<<"PIZZA"<<endl;
	    }
	   
	    else if(n<p && n<b){
	        cout<<"NOTHING"<<endl;
	    }
	    else {
	        cout<<"BURGER"<<endl;
	    }
	    
	    
	}
	return 0;
}
