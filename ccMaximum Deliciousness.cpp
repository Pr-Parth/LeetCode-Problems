#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    vector<int>a;
	    for(int i=0;i<3;i++)
	    {
	        int z;
	        cin>>z;
	        a.push_back(z);
	    }
	    vector<long long>b;
	    for(int j=0;j<a[0];j++)
	    {
	        long long p;
	        cin>>p;
	        b.push_back(p);
	    }
	    sort(b.begin(),b.end());
	    for(int q=0,u=a[0]-1;q<=u;q++,u--)
	    {
	        int temp=b[q];
	        b[q]=b[u];
	        b[u]=temp;
	    }
	    long long count=0;
	    int m=a[1];
	    int i=a[2]-1;
	    while(i<a[0])
	    {
	        count = count + b[i];
	        i=i+m;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
