#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long int n;
	    cin>>n;
	   long int p[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    sort(p,p+n);
	  long  int sum=0;
	     for( long int i=1;i<n;i++){
	        sum+=p[i];
	    }
	    cout<<p[0]*sum<<endl;
	}
	return 0;
}
