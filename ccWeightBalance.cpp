#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    
	    int diffw= w2-w1;
	    int finalx1= m*x1;
	    int finalx2 = m*x2;
	    
	    
	    if(diffw >=finalx1 && diffw<=finalx2){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	    
	}
	return 0;
}
