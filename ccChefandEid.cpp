#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int min=a[1]-a[0];
	    for(int j=0;j<n;j++){
	       
	        if((a[j+1]-a[j])<min){
	            min=a[j+1]-a[j];
	        }
	    }
	    std::cout << min << std::endl;
	}
	return 0;
}
