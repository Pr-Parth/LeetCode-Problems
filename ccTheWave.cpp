#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for(n) for(i=0; i<n; i++)
/// cout << (c ? "NO" : "YES")  << endl;///c(1)=NO

void solve()
{
    ll int n,m,x,p,i,j,r,k,c=0,sum=0,mi= INT_MAX;
    cin>>n>>m;
    vector<ll int>v,q;
    ///for check these value present or not !!
    set<ll int>us;
    for(n){
        cin>>p;
        v.push_back(p);
        us.insert(p);
    }
    sort(v.begin(),v.end());
    for(m){///1 3 5 100
        cin>>p;
        q.push_back(p);/// -2 2 4 80 107 5
    }
    for(m){
        if(us.find(q[i])!=us.end())cout<<"0"<<endl;
        else{
            x = lower_bound(v.begin(),v.end(),q[i])-v.begin();
            if((n-x)%2==0)cout<<"POSITIVE"<<endl;
            else cout<<"NEGATIVE"<<endl;
        }
    }


}

int main()
{
    solve();

    return 0;
}
