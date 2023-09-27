#include<bits/stdc++.h>
using namespace std;
#define ll long long
int expo(ll int n){
    int count=0;
    int x=2;
    while(n/2!=0){
        n=n/2;
        count++;
    }
    return count;
}
ll int power(ll int x, ll int y)
{
    ll int temp;
    if (y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
}
unsigned int factorial(unsigned int n)
{
    if(n == 0)
          return 1;
    int i = n, fact = 1;
    while (n / i != n) {
        fact = fact * i;
        i--;
    }
    return fact;
}
long long ncr(int n,int r)
{
    if(r==0)
    {
        return 1;
    }
    if(r>n-r)
    {
        r=n-r;
    }
    long long ans=1;
    for(int i=1;i<=r;i++)
    {
        ans=ans*(n-i+1)/i;
    }
    return ans;
}

void solve(){
 ll int n,k;
 cin>>n>>k;
 vector<ll int>v(n);
 map<ll int,ll int>mp;
 for(int i=0;i<n;i++){
     cin>>v[i];
     mp[v[i]]++;
 }
 sort(v.begin(),v.end());
 if(v[k]==v[k-1]){
     ll int cnt=0;
     for(int i=k;i<n;i++){
         if(v[k-1]==v[i]){
             cnt++;
         }
     }
     ll int total=mp[v[k-1]];
     ll int ans=ncr(total,total-cnt);
     cout<<ans<<endl;
     
 }
 else{
     cout<<1<<endl;
 }
}

int main()
{
    
    ll int t;
    cin>>t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}