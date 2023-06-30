#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll a[n];
   
	    for(ll i=0; i<n; i++) {
	        cin>>a[i];
	    }
	    sort(a,a+n);
        ll sum=0;
        for(ll i = n-1; i>=0; i-=2) {
            sum += a[i];
	    }   
        cout<<sum<<endl;    
    }
	return 0;        
}


