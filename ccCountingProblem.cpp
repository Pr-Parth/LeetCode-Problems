#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int count=0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	        if(a[i]%2!=0){
	            count++;
	        }
	    }
	    if(count>=2 && count%2==0){
	        cout<<"YES"<<endl;
	    }
	   
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
