


#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
     int res =0;
	cin>>t;
	while(t--){
		int n;
         // int res =0;
		cin>>n;
		int arr[n];
		for(int i =0; i<n; i++){
			cin>>arr[i];
		}
		for(int i =0; i<n; i++){
			 res = min(res, arr[i]);
		}
		
	}
     cout<<res<<endl;
}