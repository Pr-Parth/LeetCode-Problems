#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
long long	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long int p[n];
	     long long int m;
	     cin>>m;
	     for(int i=0;i<n;i++){
	         cin>>p[i];
	     }
	    long int count=0;
	     sort(p,p+n,greater<long long int>());
	     long long int sum=0;
	      for(int i=0;i<n;i++){
	      if(sum<m){
	          sum+=p[i];
	          count++;
	      }
	      else{
	          break;
	      }
	     }
	     if(sum>=m){
	     cout<<count<<endl;}
	     else{
	         cout<<"-1"<<endl;
	     }
	}
	
	return 0;
}
