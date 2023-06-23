#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int R;
	cin>>R;
	
	if(1<=R && R<=50){
	    cout<<100;
	}
	else if(51<=R && R<=100){
	    cout<<50;
	}
	else{
	    cout<<0;
	}
	return 0;
}
