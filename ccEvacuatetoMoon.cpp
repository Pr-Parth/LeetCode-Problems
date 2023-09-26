#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	int t; cin>>t;
	while(t--){
	    int a,b,c,d, ans=0; cin>>a>>b>>c;
	    priority_queue<int>q1,q2;
	    for(int i=0; i<a; i++){cin>>d; q1.push(d);}
	    for(int i=0; i<b; i++){cin>>d; q2.push(d);}
	    for(int i=0; i<min(a,b); i++){
	        int aa=q1.top(), bb=q2.top(); q1.pop(); q2.pop();
	        ans+=min(aa,bb*c);
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
