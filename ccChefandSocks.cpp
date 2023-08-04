#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	    int jacketCost, sockCost, money;
	    cin>>jacketCost>>sockCost>>money;
	    
	    int remain= money - jacketCost;
	        if((remain/sockCost)%2==0){
	            cout<<"Lucky Chef"<<endl;
	        }
	        else{
	           cout<<"Unlucky Chef"<<endl;
	        }
	
	return 0;
}
