#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    int count=0;
	    
	    for(int i=0; i<n; i++){
	        if(s[i]=='1'){
	            count++;
	        }
	    }
        int total = count+(120-n);
	    float per = (total*100)/120;
	    if(per>=75){
	       cout << "YES" << endl;
	    }
	    else if(per<75){
	        cout << "NO" << endl;
	    }
	}
	return 0;
}


