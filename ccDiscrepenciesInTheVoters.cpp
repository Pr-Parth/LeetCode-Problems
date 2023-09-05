#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	map<int,int>mp;
	for(int i=0;i<(x+y+z);i++){
	    int m;
	    cin>>m;
	    mp[m]++;
	}
	vector<int>m;
	for(auto i:mp){
	    if(i.second>=2){
	        m.push_back(i.first);
	    }
	}
	cout<<m.size()<<endl;
	for(int i=0;i<m.size();i++){
	    cout<<m[i]<<endl;
	}
	return 0;
}
