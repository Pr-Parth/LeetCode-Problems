#include <iostream>
#include <set>
using namespace std;

int mostfrequent(int arr[],int n){
    int max_count = 0;
    for(int i=0;i<n;++i){
        int count =0;
        for(int j=0;j<n;++j){
            if(arr[j]==arr[i]) count++;
        }
        if(count>max_count) max_count = count;
    }
    return max_count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    int maxcount = mostfrequent(a,n);
	    cout<<n-maxcount<<endl;
	    
	}
	return 0;
}
