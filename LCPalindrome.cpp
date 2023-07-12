#include<bits/stdc++.h>
using namespace std; 




int main(){
    int x;
    cin>>x;
    int num = x;
    int rev = 0;
    int dig;
    while (num > 0)
    {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    if(x==rev){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
}