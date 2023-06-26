#include <bits/stdc++.h>
using namespace std;

int sum(int a[], int n)
{
    int sum = 0; 
    for (int i = 0; i < n; i++)
        sum += a[i];
 
    return sum;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,v;
	    cin>>n>>k>>v;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	    }

     
	   int l = (n+k)*v;
	    int diff = l-sum(a,n);
	    if(diff > 0 && diff%k == 0){
	        cout<<diff/k<<endl;
	    } else{
	        cout<<-1<<endl;
	    }
	}
	return 0;
}