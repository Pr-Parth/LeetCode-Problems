#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    for(int i=x/2;i>=1;i--){
	        cout<<i<<" ";
	    }
	    for(int j=x/2+1;j<=x;j++){
	        cout<<j<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
