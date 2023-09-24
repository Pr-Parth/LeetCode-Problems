#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int count=0;
	int counter=1;
	vector<int>array(4);
	for(int i=0;i<t;i++){
        count=1;
	    // getting an array
	    for(int j=0;j<4;j++){
	        cin>>array[j];
	    }
	    // sorting an arrray
	    sort(array.begin(),array.end());
	    // counting the maximum possible count
	    for(int j=0;j<4;j++){
	        for(int l=j+1;l<4;l++){
	            if(array[j]==array[l]){
	                counter++;
	                
	            }
	            else{
	                count=max(counter,count);
	                counter=1;
	                break;
	            }
	            if(l==3){
	                count=max(counter,count);
	                counter=1;
	            }
	        }
	    }
	    if(count==3){
	        cout<<1<<endl;
	    }
	    else if(count==2){
	        cout<<2<<endl;
	    }
        else if(count==1){
            cout<<2<<endl;
        }
	    else if(count==4){
	        cout<<0<<endl;
	    }
	    
	}
	return 0;
}
