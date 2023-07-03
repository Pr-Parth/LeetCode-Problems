#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, cnt1=0, cnt2=0, max1=0, max2=0;
	    cin>>n;
	    int arr1[n], arr2[n];
	    for(int i=0; i<n; i++){
	        cin>>arr1[i];
	        if(arr1[i]>0){
	            cnt1++;
	        }
	        else cnt1=0;
	        if(cnt1>max1){
	            max1=cnt1;
	        }
	    }
	    for(int i=0; i<n; i++){
	        cin>>arr2[i];\
	        if(arr2[i]>0){
	            cnt2++;
	        }
	        else cnt2=0;
	        if(cnt2>max2){
	            max2=cnt2;
	        }
	    }
	    if(max2==max1){
	        cout<<"Draw\n";
	    }
	    else if(max1>max2){
	        cout<<"Om\n";
	    }
	    else cout<<"Addy\n";
	}
	return 0;
}
