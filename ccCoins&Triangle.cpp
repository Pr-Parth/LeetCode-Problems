#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long  n;
	    cin>>n;
	    long long sum = (sqrt(1+ 8*n)- 1)/2;
	    cout<<sum<<endl;
	}   
	return 0;
}
