#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    
	    int a[n];
	    for(int i= 1;i<=n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=1; i<=10; i++){
            int count=0;
	        for(int j= 1; j<=n; j++){
	            if(a[j]==i){
	                count++;
	            }
	        }
            if(sum<count){
                sum=count;
            }
	    }
        cout<<n-sum<<endl;
	    
	    
	    
	}
	return 0;
}
