#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, b;
	    cin>>n>>b;
	    int h,w,p;
	    int area=0;
	    int flag =0;
	    for(int i=1; i<=n; i++){
	        cin>>h>>w>>p;
	        if(p<=b){
	            if(area<w*h){
	                area=w*h;
	                flag=1;
	            }
	        }
	    }
	    if(flag==1){
	        cout<<area<<endl;
	    }
	    else{
	        cout<<"no tablet"<<endl;
	    }
	    
	    
	}
	return 0;
}
