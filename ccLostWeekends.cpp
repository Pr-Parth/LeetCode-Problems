#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p;
	    int a[5];
	    int s=0;
	    for(int i=0; i<5; i++){
	        cin>>a[i]; 
	    }
	    cin>>p;
	    for(int i=0; i<5; i++){
	        s+=a[i]*p;
	    }
	    if(s<=(5*24)){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }
	}
	return 0;
}
