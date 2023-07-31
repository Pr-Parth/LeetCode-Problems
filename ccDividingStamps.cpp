#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	
	int count=0;
	int count1=0;
	int a[n];
	for(int i=1; i<=n; i++){
	    cin>>a[i];
	    count += a[i];
	    count1 += i;
	}
	if(count==count1){
	    cout<<"YES"<<endl;
	}
	else{
	    cout<<"NO"<<endl;
	}
	return 0;
}
