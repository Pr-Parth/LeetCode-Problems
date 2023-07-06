#include <bits/stdc++.h>
#define ll  long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n,x;
	    cin>>n>>x;
	    
	    if(n%x==0)
	        cout<<"YES"<<endl;
	    else if(n%2==0 && x%2==0 || x%2==1)
	    cout<<"YES"<<endl;
	    else{
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
