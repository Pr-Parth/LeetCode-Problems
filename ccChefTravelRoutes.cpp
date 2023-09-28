#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int m;
    cin>>m;
    string c1[m],c2[m];
    int l[m];
    for(int i=0;i<m;i++){
        cin>>c1[i]>>c2[i]>>l[i];
    }
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int k;
        cin>>k;
        int con=1;
        string d[k];
        for(int j=0;j<k;j++){
            cin>>d[j];
            if(count(s,s+n,d[j])==0||(count(d,d+j+1,d[j])>1)){
                con=0;
            }
        }
         int cost=0,z=0;
        if(con==1){
            for(int j=0;j<k-1;j++){
                for(int h=0;h<m;h++){
                    if(c1[h]==d[j] && c2[h]==d[j+1]){
                        cost+=l[h];
                        z++;
                    }
                }
            }

        }
        if(k==1 && con==1){
	           cout << 0 << endl;
	           continue;
	       }
	       else if(k==1 && con==0){
	           cout << "ERROR" << endl;
	           continue;
	       }
        if(z==k-1 && con==1)cout<<cost<<endl;
        else cout<<"ERROR"<<endl;
    }
	return 0;
}
