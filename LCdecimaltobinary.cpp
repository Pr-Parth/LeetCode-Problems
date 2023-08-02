#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[11], i = 0, num = n;
    
    // Until the value of n becomes 0.
	while(n != 0){
		arr[i] = n % 2;
		i++;
		n = n / 2;
	}
	

	
	for(i = i - 1; i >= 0;i--){
		cout << arr[i];
	}
	
    return 0;
}
    
