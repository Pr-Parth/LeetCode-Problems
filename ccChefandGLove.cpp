#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    int arr1[n];
	    int arr2[n];
	    
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr1[i];
	    }
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr2[i];
	    }
	    
	    int fs = 0;
	    int bs = 0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(arr1[i]<=arr2[i])
	        {
	            fs++;
	        }
	    }
	    for(int i=0; i<n; i++)
	    {
	        if(arr1[i]<=arr2[n-i-1])
	        {
	            bs++;
	        }
	    }
	    if(fs==n && bs==n)
	    {
	        cout << "both" << endl;
	    }
	    else if(fs!=n && bs!=n)
	    {
	        cout << "none" << endl;
	    }
	    else if(fs==n && bs!=n)
	    {
	        cout << "front" <<  endl;
	    }
	    else
	    {
	        cout << "back" << endl;
	    }
	}
	return 0;
}