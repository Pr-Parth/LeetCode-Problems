#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int array[3]={x,y,z};
        int c = 0;

        if(array[0]>0){
            c++;
            array[0]=array[0]-1;
        }
        if(array[1]>0){
            c++;
            array[1]=array[1]-1;
        }
        if(array[2]>0){
            c++;
            array[2]=array[2]-1;
        }

        sort(array,array+3, greater<int>()); //Sort in descending order
        
        if(array[0] >=1 && array[1]>=1){
            c++;
            array[0]--;
            array[1]--;
        }
        if(array[0]>=1 && array[2]>=1){
            c++;
            array[0]--;
            array[2]--;
        }
        if(array[1]>=1 && array[2]>=1){
            c++;
            array[1]--;
            array[2]--;
        }

        cout<<c<<endl;
        

    }

    return 0;
}