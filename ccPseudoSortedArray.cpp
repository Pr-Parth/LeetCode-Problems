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
	    
	    int arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin >> arr[i];
	    }
	    for(int i=1; i<n; i++)
	    {
	        if(arr[i-1] > arr[i])
	        {
	            swap(arr[i-1],arr[i]) ;
                break;
	        }
	    }
	    int count=0;
	    for(int i=1; i<n; i++)
	    {
	        if(arr[i-1] > arr[i])
	        {
	            count++;
	        }
	    }
	    if(count==0)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}