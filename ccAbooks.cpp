#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int count;
	    int arr1[n];
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[i]<arr[j])
	            {
	                count++;
	            }
	        }
	        arr[i]=count;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    
	    cout<<endl;
	}
	return 0;
}
