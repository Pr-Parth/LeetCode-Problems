#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	    int d12=pow((x2-x1),2) + pow((y2-y1),2);
	    int d13=pow((x3-x1),2) + pow((y3-y1),2);
	    int d23=pow((x2-x3),2) + pow((y2-y3),2);
	    int k=r*r;
	    if((d12<=k && d13<=k) ||(d12<=k && d23<=k) || (d13<=k && d23<=k))
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
