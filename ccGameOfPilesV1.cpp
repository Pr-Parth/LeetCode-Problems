#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin >>tc;
	while(tc--){
	    int num;
	    cin>>num;
	    int cnt=0,flag=0;
	    int arr[num];
	    for(int i=0;i<num;i++){
	        cin>>arr[i];
	        
	        if(arr[i]%2!=0)
	            cnt++;
	       
	        if(arr[i] == 1)
	            flag =1;
	    }
	    
	    if(flag)
	        cout<<"CHEF"<<endl;
	    else if(cnt%2!=0)
	        cout<<"CHEF"<<endl;
	    else
	        cout<<"CHEFINA"<<endl;
	    
	    
	        
	        
	}
	return 0;
}
