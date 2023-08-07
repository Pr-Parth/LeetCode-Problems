#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    string s[n];
	    
	    for(int i=0; i<n; i++){
	        cin>>s[i];
	    }
	    int count1=0;
	    int count2=0;
	    for(int i=0; i<n; i++){
	        if(s[i] == "0"){
	            count1++;
	        }
	        else if(s[i]=="1"){
	            count2++;
	        }
	    }
        cout<<count1<<endl;
        cout<<count2<<endl;
	    int total;
	    total= count1*a + count2*b;
	    cout<<total<<endl;
	    
	}
	return 0;
}
