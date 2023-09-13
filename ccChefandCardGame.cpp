#include <iostream>
using namespace std;
#define ll long long 

int sum(ll n){
    int temp, s = 0;
    while(n != 0){
        temp = n%10;
        s += temp;
        n = n/10;
    }
    return s;
}

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int counta = 0;
	    int countb = 0;
	    for(int i=0; i<n; i++){
	        ll a;
	        cin >>a;
	        a = sum(a);
	        
	        ll b;
	        cin >>b;
	        b = sum(b);
	        
	        if(a > b) counta++;
	        else if(a < b) countb++;
	        else {
	            counta++;
	            countb++;
	        }
	    }
	    if(counta > countb) cout <<"0 " <<counta <<endl;
	    else if(counta < countb) cout <<"1 " <<countb <<endl;
	    else cout <<"2 " <<countb <<endl;
	}
	return 0;
}
