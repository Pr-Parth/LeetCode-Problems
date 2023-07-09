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
        bool valid = true;
        for(int i=0;i<n;i++){
          if(s[i]=='.'){
            continue;
          } else if(s[i]=='H'&& valid==true){
           valid=false;
          } else if(s[i]=='H' && valid==false){
            break;
          } else if (s[i]=='T' && valid==false){
            valid=true;
          } else if(s[i]=='T' && valid==true){
            valid=false;
            break;
          }
        }
        if( valid == true){
            cout<<"Valid"<<endl;
        }else{
            cout<<"Invalid"<<endl;
        }
    }
	return 0;
}
