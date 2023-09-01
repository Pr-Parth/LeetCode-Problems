#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, x, s;
	    cin >> n >> x >> s;
	    int current=x;
	    for(int i=0;i<s;i++){
	        int a, b;
	        cin >> a >> b;
	        if(current==a){
	            current=b;
	        }
	        else if(current==b){
	            current = a;
	        }
	    }
	    
	    cout << current << endl;
	}
	return 0;
}
