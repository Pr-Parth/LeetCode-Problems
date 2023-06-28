#include <bits/stdc++.h>
using namespace std;

bool canKillAllWeeds(vector<int> arr, int m, int k){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(m <arr[i] + k-1){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    vector<int> arr(n);
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    if(canKillAllWeeds(arr, m, k)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
