#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        string k;
        cin>>k;
        
        int count1=count(s.begin(),s.end(),'0');
        int count2=count(k.begin(),k.end(),'0');
        
        if(count1==count2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
