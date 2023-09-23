#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    int srr[n];
	    vector<pair<int ,int>> index(5);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        index[arr[i]].first=i;
	    }
	    for(int i=0;i<n;i++){
	        int a=arr[i];
	        int b;
	        cin>>b;
	        index[a].second=b;
	    }
	    
	    bool swap=true;
	    int ans=0;
	    while(swap){
	        swap=false;
	        for(int i=1;i<n;i++){
	            if(index[i].first>=index[i+1].first){
	                index[i+1].first+=index[i+1].second;
	                swap=true;
	                ans+=1;
	            }
	        }
	    }
	    cout<<ans<<endl;
	    
	    
	}
	return 0;
}
