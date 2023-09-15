#include <bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(0);cin.tie(0)

int main() {
	fastIO;
	int t;
	cin>>t;
	while(t--){
	    
	    long long n, m;
	    cin>>n>>m;
	    string s;
	    cin>>s;
	    
	    long long t_len = n*m;
	    long long t_sum = 0, r_sum = 0;
	    long long ans = 0;
	    for(int i = 0; i < s.size(); i++) t_sum += s[i]-'0';
	    if(t_sum == 0){
	        cout<<t_len<<"\n";
	        continue;
	    }
	    if(m%2){
	        for(int i = 0; i < n; i++){
	            r_sum += s[i]-'0';
	            if(t_sum-r_sum == r_sum) ans++;
	        }
	    }else{
	        s += s;
	        t_sum += t_sum;
	        for(int i = 0; i < s.size(); i++){
	            r_sum += s[i]-'0';
	            if(t_sum-r_sum == r_sum) ans++;
	        }
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
