#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if((x == y && x <= z) || (y == z && z <= x) || (z == x && z <= y)) cout <<"YES" <<endl;
	    else cout <<"NO" <<endl;
	}
	return 0;
}
