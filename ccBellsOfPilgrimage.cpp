#include <bits/stdc++.h>
using namespace std;

int calculateMana(int n, int p, int x, int k){
    int mana = p;
    if(k<=x){
        mana+=k*10;
    }
    else{
        mana+=x*10 + (k-x)*5; 
    }
    if(k == n){
        mana+=20;
    }
    return mana;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,k,p;
	    cin>>n>>x>>k>>p;
	    
	    cout<<calculateMana(n, p, x, k)<<endl;
	}
	return 0;
    
}
