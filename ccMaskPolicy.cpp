#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,infected;
	    cin>>n>>infected;
	    int uninfected=n-infected;
	    if(infected <= uninfected){
	        cout<<infected<<endl;
	    }
	    else{
	        cout<<uninfected<<endl;
	    }
	}
	return 0;
}
