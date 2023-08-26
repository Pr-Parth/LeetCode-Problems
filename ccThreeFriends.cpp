#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	  cin>>x>>y>>z;
	  if(x==y && y==z && x==z)
	  cout<<"no"<<endl;
	  else
	  {
	    if(x+y==z || x+z==y || y+z==x)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	  }
	}
	return 0;
}
