#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,N,j;
    
    cin>>T;
    while(T--)
    {
        cin>>N;
        long long int A[N],P[N];
        for(i=0;i<N;i++)
        {
            cin>>A[i];
        }
        sort(A,A+N);
        long long int sum=0;
        for(i=N-1;i>-1;i--)
        {
            sum+=A[i];
            P[i]=sum;
        }
        for(i=0;i<N;i++)
        {
            cout<<P[i]<<" ";
        }
        cout<<endl;
    }
    
	return 0;
}
