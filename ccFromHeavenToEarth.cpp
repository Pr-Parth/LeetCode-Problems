#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,v1,v2;
	    cin>>n>>v1>>v2;
	    
	    double distStairs = 1.4141*n;
	    double distElevator= 2*n;
	    
	    double timeStairs= distStairs/v1;
	    double timeElevator = distElevator/v2;
	    
	    if(timeElevator>timeStairs){
	        cout<<"Stairs"<<endl;
	    }
	    else{
	        cout<<"Elevator"<<endl;
	    }
	}
	return 0;
}
