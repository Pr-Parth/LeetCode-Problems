#include <bits/stdc++.h>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    
	    int gcd = findGCD(n, m);
        cout << gcd << endl;
	    
	}
	return 0;
}
