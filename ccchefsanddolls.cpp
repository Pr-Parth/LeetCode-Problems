#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	cin>>n;
	int num;
	int count=0;
	for(int i=0; i<n; i++){
	    cin>>num;
	    if(num%2==1){
	    count++;
	}
	}
	
	cout<<count;
	return 0;
}
