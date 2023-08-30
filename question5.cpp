#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int b;
    cin>>b;

    int c;
    cin>>c;

    int d;
    cin>>d;

    if(a>b){
        if(a>c){
            if(a>d){
                cout<<a;
            }
            else{
                cout<<d;
            }
        }
    }
    else if(b>c){
        if(b>d){
            cout<<b;
        }
        else{
            cout<<d;
        }
    }
    else if(c>d){
        cout<<c;
    }
    else{
        cout<<d;
    }
    if(b==d){
        cout<<c;
    }
    return 0;
}