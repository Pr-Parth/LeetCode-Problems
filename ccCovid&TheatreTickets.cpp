#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int seats, finalans;
	    if (m%2==0){
	        seats=m/2;
	    }
	    else{
	        seats = m/2+1;
	    }
	    if(n%2==0){
	        finalans = (n/2)*seats;
	    }
	    else{
	        finalans= (n/2 + 1)*seats;
	    }
	    cout<<finalans<<endl;
	    
	}
	return 0;
}
